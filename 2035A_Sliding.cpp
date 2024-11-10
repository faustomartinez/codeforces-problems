#include <iostream>

long long n, m, r, c, t;

int main(){
    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> n >> m >> r >> c;


        // A los que solo se mueven una vez para la izquierda los sumo una vez, estos son n*m - ((r-1)*m + c) - (n-r)
        // Me quedan los n-r que se mueven las m posiciones correspondientes a su nivel de arriba, y listo.
        long long res = n*m - ((r-1)*m + c) - (n-r)  +  m*(n-r)  ;

        std::cout << res << std::endl;
    }
    
    
    
    return 0;
}