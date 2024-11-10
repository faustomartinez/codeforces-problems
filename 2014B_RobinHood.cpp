#include <iostream>
#include <cmath>

int t,n,k;

int cantidad_de_dias_impares;

int imparesDebajo(int n){
    if(n % 2 == 0){
        return n/2;
    }else{
        return n/2 +1;
    }
}

int main(){
    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> n >> k;
        cantidad_de_dias_impares = imparesDebajo(n) - imparesDebajo(n-k);
        std::cout << (cantidad_de_dias_impares % 2 == 0 ? "YES" : "NO") << std::endl;
    }

    return 0;
}