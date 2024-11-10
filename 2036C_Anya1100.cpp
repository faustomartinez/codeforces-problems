#include <iostream>
#include <string>
#include <vector>

std::string s;
long long q, i, v, n;

bool find_1100(std::string& s, long long j){
    if(j < 3) return false;
    if(j >= n) return false;
    if(s[j] == '0' && s[j-1] == '0' && s[j-2] == '1' && s[j-3] == '1') return true;
    return false;
}

void solve(){
    std::cin >> s;
    n = s.size();

    long long contador = 0;

    for(long long j = 0; j < n; j++){
        if(find_1100(s,j)) contador++;
    }

    std::cin >> q;

    for(long long j = 0; j < q; j++){
        std::cin >> i >> v;
        i--;
        if(s[i] != '0' + v){
            bool antes = find_1100(s,i) || find_1100(s,i+1) || find_1100(s, i+2) || find_1100(s, i+3);
            s[i] = '0' + v;
            bool despues = find_1100(s,i) || find_1100(s,i+1) || find_1100(s, i+2) || find_1100(s, i+3);
            contador += despues-antes;
        }
        std::cout << (contador > 0 ? "YES" : "NO") << std::endl;
    }
}

int main(){
    int t;
    std::cin >> t;
    for(int j = 0; j < t; j++){
        solve();
    }
    return 0;
}