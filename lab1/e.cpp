#include <bits/stdc++.h>
using namespace std;
int main(){
    int steps = 0;
    deque<int> boris;
    deque<int> nursik;
    for(int i = 0; i < 5; i++){
        int el;
        cin >> el;
        boris.push_back(el);
    }
    for(int i = 0; i < 5; i++){
        int el;
        cin >> el;
        nursik.push_back(el);
    }
    for(int i = 1; i <= 1000000; i++){
        int b = boris.front();
        int n = nursik.front();
        boris.pop_front();
        nursik.pop_front();
        if((b == 0 && n == 9) || (b == 9 && n == 0) ){
            if(b == 0){
                boris.push_back(b);
                boris.push_back(n);
            }else{
                nursik.push_back(b);
                nursik.push_back(n);
            }
        }else{
            if(b > n){
                boris.push_back(b);
                boris.push_back(n);
            }else{
                nursik.push_back(b);
                nursik.push_back(n);
            }
        }
        if(boris.size() == 0 || nursik.size() == 0){
            steps = i;
            break;
        }
    }
    if(steps == 0){
        cout << "blin nichya";
        return 0;
    }
    if(boris.empty()){
        cout << "Nursik" << " " << steps;
    }else{
        cout << "Boris" << " " << steps;
    }
}