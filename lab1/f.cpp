//PrimeNumbers
#include <bits/stdc++.h>
using namespace std;
bool is_prime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    int cnt = 0;
    int res = 2;
    while(cnt != n){
        while(!is_prime(res)){
            res++;
        }
        res++;
        cnt++;
    }
    cout << res - 1 << endl;
}