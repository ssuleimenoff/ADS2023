// Aureole
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
struct bst {
    node *root;
    bst(){
        root = NULL;
    }
    private:
    node *add(node *root, int value){
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
    void calculateLevelSums(vector <int>& levelSums){
        queue <pair<node*, int>> q;
        q.push({root, 0});
        while(!q.empty()){
            node* cur = q.front().first;
            int level = q.front().second;
            q.pop();
            if(levelSums.size() <= level){
                levelSums.push_back(cur->value);
            }else{
                levelSums[level] += cur->value;
            }
            if(cur->left){
                q.push({cur->left, level + 1});
            }
            if(cur->right){
                q.push({cur->right, level + 1});
            }
        }
    }
};
int main(){
    bst b;
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        b.add(a[i]);
    }
    vector <int> levelSums;
    b.calculateLevelSums(levelSums);
    int maxLevel = levelSums.size();
    cout << maxLevel << endl;
    for(int i=0;i<maxLevel;i++){
        cout << levelSums[i] << " ";
    }
    return 0;

}