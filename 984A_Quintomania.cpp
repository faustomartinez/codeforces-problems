#include <iostream>
#include <vector>

int t, n;

int main(){
    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> n;

        std::vector<int> a(n);
        
        for(int i = 0; i < n; i++){
            std::cin >> a[i];
        }

        bool flag = true;

        for(int i = 1; i < n; i++){
            int diferencia;
            diferencia = a[i] > a[i-1] ? a[i] - a[i-1] : a[i-1] - a[i];
            if(diferencia !=5 && diferencia != 7) flag = false;
        }

        std::cout << (flag ? "YES" : "NO") << std::endl;
    }

    return 0;
}