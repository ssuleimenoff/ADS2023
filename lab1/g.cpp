//vanyaAndPrimes2
#include <bits/stdc++.h>
using namespace std;
bool is_prime(int num){
    if(num == 1){
        return false;
    }
    else{
        for(int i=2;i<=sqrt(num);i++){
            if(num % i == 0){
                return false;
            }
        }
        return true;
    }
}
int main(){
    int n;
    cin >> n;
    int cnt1 = 0;
    int cnt2 = 0;
    int res = 2;
    while(cnt2 != n){
        while(!is_prime(res)){
            res++;
        }
        res++;
        cnt1++;
        if(is_prime(cnt1)){
            cnt2++;
        }
    }
    cout << res - 1 << endl;
}