#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, q;
    cin >> n >> q;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    // Sort 
    sort(a.begin(), a.end());
    // Prefix sum
    vector <int> prefix_sum(n + 1, 0);
    for(int i=0;i<n;i++){
        prefix_sum[i + 1] = prefix_sum[i] + a[i];
    }
    for(int i=0;i<q;i++){
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        // Calculating the numbers
        int cnt1 = upper_bound(a.begin(), a.end(), r1) - lower_bound(a.begin(), a.end(), l1);
        int cnt2 = upper_bound(a.begin(), a.end(), r2) - lower_bound(a.begin(), a.end(), l2);

        int total_cnt = n - cnt1 + cnt2;

        int sum1 = prefix_sum[upper_bound(a.begin(), a.end(), r1) - a.begin()];
        int sum2 = prefix_sum[upper_bound(a.begin(), a.end(), r2) - a.begin()];
        int sum = sum1 - sum2;

        int res = total_cnt * r1 - sum;
        cout << res << endl;
    }
}