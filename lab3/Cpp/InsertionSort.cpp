// Given this array: [2,8,5,3,9,4]
// 1) Work lfet to the right
// 2) Examine each item and compare it to items on its left
// 3) Insert the item in the correct position in the array
// step-by-step:
// -> [2,5,8,3,9,4]
// -> [2,3,5,8,9,4]
// -> [2,3,4,5,8,9]
// SampleCode:
/*#include <bits/stdc++.h>
using namespace std;
pair <int,int> binarySearch(vector<int>&row, int target){
    int left = 0;
    int right = row.size() - 1;
    while(left <= right){
        int mid = left + (right - left)/2;
        if(row[mid] == target){
            return {mid,0}; // Found the target element
        }else if(row[mid < target]){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
        }
        return {-1,-1}; // Target element not found
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> snake(n, vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> snake[i][j];
            }
        }
        vector<int> targets(m * n);
        for(int i=0;i<m*n;i++){
            int target = targets[i];
            int row = i / m;
            int col = i % m;
            if(row % 2 == 0){
                pair<int,int> result = binarySearch(snake[row], target);
                if(result.first != -1){
                    cout << row << " " << result.first << endl;
                }else{
                    cout << "-1" << endl;
                }
            }else{
                pair<int,int> result = binarySearch(snake[row], target);
                if(result.first != -1){
                    cout << row << " " << m - 1 - result.first << endl;
                }else{
                    cout << "-1" << endl;
                }
            }
        }
    }
    return 0;
}
*/


