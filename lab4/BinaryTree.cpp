// BinaryTree definition
#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *left;
    struct node *right; 
};
// Creating New Node
struct node *newNode(int data){
    struct node * node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
// Traverse PreOrder
void traversePreOrder(struct node *temp){
    if (temp != NULL){
        cout << " " << temp->data;
        traversePreOrder(temp->left);
        traversePreOrder(temp->right);
    }
}
// Traverse InOrder
void traverseInOrder(struct node *temp){
    if (temp != NULL){
        traverseInOrder(temp->left);
        cout << " " << temp->data;
        traverseInOrder(temp->right);
    }
}
// Traverse PostOrder
void traversePostOrder(struct node *temp){
    if(temp != NULL){
        traversePostOrder(temp->left);
        traversePostOrder(temp->right);
        cout << " " << temp->data;
    }
}
int main(){
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    cout << "pre: " ;
    traversePreOrder(root);
    cout << "in: " ;
    traverseInOrder(root);
    cout << "post: ";
    traversePostOrder(root); 
}