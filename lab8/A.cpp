#include <bits/stdc++.h>
using namespace std;
int my_hash(string s){
    unsigned long long p = 1;
    unsigned long long q = 1e9 + 7;
    int x = 11;
    unsigned long long answer = 0;
    for(int i=0;i<s.size();i++){
        answer = (answer + ((s[i] - 47) * p) % q) % q;
        p = (p * x) % q;
    }
    return answer;
}
int main(){
    long long n;
    cin >> n;
    long long limit = n;
    n = n * 2;
    vector <string> v;
    string x;
    map <string, bool> exist;
    map <string, string> hash;
    for(long long i=0;i<n;i++){
        cin >> x;
        string num = to_string(my_hash(x));
        exist[x] = true;
        hash[x] = num;
        v.push_back(x);
    }
    long long cnt = 0;
    for(auto c : v){
        if(exist[hash[c]] && cnt < limit){
            cnt++;
            printf("Hash of string \%s\" is )
        }
    }
}
        