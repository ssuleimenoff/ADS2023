// Mountains
#include <bits/stdc++.h>
using namespace std;
struct node {
    int value;
    node *left;
    node *right;
    node(int value){
        this->value = value;
        left = NULL;
        right = NULL;
    }
};
struct bst{
    node *root;
    bst(){
        root = NULL;
    }
    private:
    node* add(node *root , int value){
        if(root == NULL){
            root = new node(value);
        }else if(value < root->value){
            root->left = add(root->left, value);
        }else{
            root->right = add(root->right, value);
        }
        return root;
    }
    public:
    void add(int value){
        root = add(root, value);
    }
    string out(node *cur, string op){
        for(int i=0;i<op.size();i++){
            if(op[i] == 'L'){
                if(cur->left) cur = cur->left;
                else return "NO";
            }else{
                if(cur->right) cur = cur->right;
                else return "NO";
            }
        }
        return "YES";
    }
};
int main(){
    bst b;
    int x, y;
    cin >> x >> y;
    string s;
    int m;
    while(x--){
        cin >> m;
        b.add(m);
    }
    while(y--){
        cin >> s;
        cout << b.out(b.root, s) << endl;
    }
}