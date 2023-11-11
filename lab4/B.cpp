// Get subtree
#include <bits/stdc++.h>
using namespace std;
struct Node {
    int val;
    Node *left;
    Node* right;
    Node(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
struct BinSearchTree{
    Node *root;
    int cnt = 0;
    BinSearchTree(){
        root = NULL;
    }
    private:
    Node* add(int x, Node *root){
        if(root == nullptr){
            root = new Node(x);
        }else if(x < root->val) root->left = add(x, root->left);
        else root->right = add(x, root->right);
        return root;
    }
    int getSize(Node* cur){
        if(cur == nullptr) return 0;
        cnt++;
        getSize(cur->left);
        getSize(cur->right);
        return cnt;
    }
    Node *find(int k){
        Node* cur = root;
        while(cur->val != k){
            if(cur->val > k){
                cur = cur->left;
            }else cur = cur->right;
        }
        return cur;
    }
    public:
    void add(int x){
        this->root = add(x, root);
    }
    int getSize(int k){
        return this->getSize(find(k));
    }
};
int main(){
    BinSearchTree bst;
    int n, k, x;
    cin >> n;
    string s;
    while(n--){
        cin >> x;
        bst.add(x);
    }
    cin >> k;
    cout << bst.getSize(k) << endl;
    return 0;
}