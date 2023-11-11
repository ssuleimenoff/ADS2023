#include <bits/stdc++.h>
using namespace std;

string str(string s){
    int n = s.size();
    int cnt = 0;
    for (int i=0;i<n;i++){
        if(s[i]!='#'){
            s[cnt] = s[i];
            cnt++;
        }
        else if (s[i] == '#' && cnt >= 0){
            cnt--;
        }
        if (cnt < 0){
            cnt = 0;
        }
    }
    return s.substr(0, cnt);
}

int main(){
    string str1, str2;
    cin >> str1 >> str2 ;
    if (str(str1) == str(str2)){
        cout << "Yes";
    }
    else cout << "No";
}