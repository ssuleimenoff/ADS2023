//BalancedSequenceOfLetters
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    stack <char> st;
    for(int i=0;i<s.size();i++){
        char ch = s[i];
        if(st.empty() || st.top()!=ch){
            st.push(ch);
        }else{
            st.pop();
        }
    }
    if(st.empty()){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}