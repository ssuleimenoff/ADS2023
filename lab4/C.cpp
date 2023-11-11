// Christmas Gifts
#include <bits/stdc++.h>
using namespace std;
struct node {
    int val;
    node *left;
    node *right;
    node(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
struct bst {
    node *root;
    bst(){
        root = NULL;
    }
    private:
    node* add(node* root, int val){
        if(root == NULL){
            root = new node(val);
        }else if(val < root->val){
            root->left = add(root->left, val);
        }else {
            root->right = add(root->right, val);
        }
        return root;
    }
    public:
    void add(int val){
        root = add(root, val);
    }
    void preorder(node *cur){
        if(cur){
            cout << cur->val << " ";
            preorder(cur->left);
            preorder(cur->right);
        }
    }
};
int main(){
    bst b;
    int n, k;
    cin >> n;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        b.add(a[i]);
    }
    cin >> k;

    node *cur = b.root;
    while(cur->val != k){
        if(k < cur->val){
            cur = cur->left;
        }else{
            cur = cur->right;
        }
    }
    b.preorder(cur);
    return 0;
}