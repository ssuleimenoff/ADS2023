//Oshiete oshiete yo sono shikumi wo
#include <bits/stdc++.h>
using namespace std;
bool check(vector <int>& a, long long m, int k){
    long long cnt = 0;
    long long sum = 0;
    for(int i=0;i<a.size();i++){
        if(a[i] > m){
            return false;
        }else if(sum + a[i] > m){
            sum = a[i];
            cnt++;
        }else{
            sum += a[i];
        }
    }
    cnt++;
    return cnt <= k;
}
int main(){
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    long long left = 0;
    long long right = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        right += a[i];
    }
    long long ans = 0;
    while(left <= right){
        long long mid = left + (right + left)/2;
        if(check(a, mid , k)){
            ans = mid;
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}