//Deque
#include <bits/stdc++.h>
using namespace std;
int main(){
    deque <int> dq;
    string str;
    while(getline(cin , str)){
        if(str =="!"){
            break;
        }else{
            char chr = str[0];
            if(chr == '+'){
                int ab = stoi(str.substr(2));
                dq.push_front(ab);
            }
            if(chr == '-'){
                int ab = stoi(str.substr(2));
                dq.push_back(ab);
            }
            if(chr == '*'){
                if(dq.size() > 1){
                    int sum = dq.front() + dq.back();
                    dq.pop_front();
                    dq.pop_back();
                    cout << sum << endl;
                }else if(dq.size() == 1){
                    cout << dq.front() * 2 << endl;
                    dq.pop_front();
                }
                else {
                    cout << "error" << endl;
                }
            }
        }
    }
}