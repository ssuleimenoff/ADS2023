//NearestNumber
#include <bits/stdc++.h>
using namespace std;
int nearNum(int size, vector <int> & arr, int num){
    int nearInd = 0;
    int nearDiff = abs(arr[0] - num);
    for(int i=1;i<size;i++){
        int diff = abs(arr[i] - num);
        if(diff < nearDiff){
            nearDiff = diff;
            nearInd = i;
        }
    }
    return nearInd;
}
int main(){
    int size;
    cin >> size;
    vector <int> arr(size);
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    int num;
    cin >> num;
    int res = nearNum(size, arr, num);
    cout << res << endl;
    return 0;
}