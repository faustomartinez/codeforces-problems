#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

int n, k, elem1, elem2;

int main(){
    int t;
    std::cin >> t;

    for(int i = 0; i < t; i++){
        std::cin >> n >> k;

        std::vector<int> brand_profit(k); 

        for(int j = 0; j < k; j++){
            std::cin >> elem1 >> elem2;
            elem1--;
            brand_profit[elem1] += elem2;
        }

        std::sort(brand_profit.begin(), brand_profit.end(), std::greater<int>());

        long long res = 0;

        for(int j = 0; j < std::min(n,k); j++){
            res += brand_profit[j];
        }

        std::cout << res << std::endl;
    } 

    return 0;
}