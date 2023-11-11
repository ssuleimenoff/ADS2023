// Binary Search Learning Process
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int low , int high, int x){
    while(low <= high){
        int mid= low + (high - 1) / 2; // Mid Pos
        // Check if x is present at mid
        if(arr[mid] == x)
            return mid;
        // If x greater , ignoring left half
        if(arr[mid] < x)
            low = mid + 1;
        // if x is smaller , ingoring right half
        else
            high = mid - 1;
    }
    // if we reach here, then element wasn't present
    return -1;
}
int main(void){
    int arr[] = { 2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
    ? cout << "Element is not present in array"
    : cout << "Element is present at index " << result;
    return 0;
}