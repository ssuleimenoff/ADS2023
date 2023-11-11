//PrimeOrNot
#include <bits/stdc++.h>
using namespace std;
bool is_prime(int num){
    if(num <= 1){
        return false;
    }
    if(num == 2){
        return true;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a;
    cin >> a;
    if(is_prime(a)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}