//ClassromOfElite
#include <bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin >> size;
    string input;
    cin >> input;
    queue <char> data;
    int kcnt = 0;
    int scnt = 0;
    for(int i=0;i<size;i++){
        data.push(input[i]);
        if(input[i] == 'S'){
            scnt++;
        }else{
            kcnt++;
        }
    }
    int k_skip_cnt = 0;
    int s_skip_cnt = 0;
    while(scnt > 0 && kcnt > 0){
        char ab = data.front();
        if(ab == 'S'){
            if(s_skip_cnt > 0){
                s_skip_cnt--;
                scnt--;
            }else{
                k_skip_cnt++;
                data.push(ab);
            }
        }else{
            if(k_skip_cnt > 0){
                k_skip_cnt--;
                kcnt--;
            }else{
                s_skip_cnt++;
                data.push(ab);
            }
        }
        data.pop();
    }
    if(data.front() == 'K'){
        cout << "KATSURAGI" << endl;
    }
    else{
        cout << "SAKAYANAGI" << endl;
    }
}