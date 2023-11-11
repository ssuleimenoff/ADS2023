//NugmanAndStack
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, age;
    cin >> n;
    vector <int> vc;
    for(int i=0;i<n;i++){
        cin >> age;
        if(!vc.empty()){
            bool check = false;
            for(int j=vc.size()-1;j>=0;j--){
                if(age >= vc[j]){
                    cout << vc[j] << " ";
                    check = true;
                    break;
                }
            }
            if(!check){
                cout << -1 << " ";
            }
        }
        else {
            cout << -1 << " ";
        }
        vc.push_back(age);
    }
}