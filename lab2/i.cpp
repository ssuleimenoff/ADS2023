#include <bits/stdc++.h>
using namespace std;
struct Node{
 Node * prev;
 Node * next;
 string val;
 Node(string _val){
  prev = NULL;
  next = NULL;
  val = _val;
 } 
};
Node * head = NULL;
Node * tail = NULL;
int cnt;
void add_back(string s){
    Node* newNode = new Node(s);
    if(tail != NULL){
        tail->next = newNode;
        tail = tail->next;
    }else{
        tail = newNode;
    }
    if(head == NULL){
        head = newNode;
    }
    cnt++;
}
void add_front(string s){
    Node* newNode = new Node(s);
    if(head != NULL){
        newNode->prev = NULL;
        newNode->next = head;
    }
    head = newNode;
    if(tail == NULL){
        tail = newNode;
    }
    cnt++;
}
bool empty(){
    return cnt == 0;
}
void erase_front(){
    if(head != NULL){
        head = head->next;
    }else{
        head = NULL;
    }
    cnt--;
}
void erase_back(){
    if(tail != NULL && cnt > 1){
        Node* beforeLast = tail->prev;
        beforeLast->next = NULL;
        tail = beforeLast;
    }else{
        tail = NULL;
    }
    cnt--;
}
string front(){
    return head->val;
}
string back(){
    return tail->val;
}
void clear(){
    head = NULL;
    cnt = 0;
}
int main()
{
 string s;
    while(cin >> s){
     if(s == "add_front"){
      string t;
      cin >> t;
      add_front(t);
      cout << "ok" << endl;
     }
     if(s == "add_back"){
      string t;
      cin >> t;
      add_back(t);
      cout << "ok" << endl;
     }
     if(s == "erase_front"){
      if(empty()){
       cout << "error" << endl;
      }
      else
      {
       cout << front() << endl;
       erase_front();
      }
     }
     if(s == "erase_back"){
      if(empty()){
       cout << "error" << endl;
      }
      else{
       cout << back() << endl;
       erase_back();
      }
     }
     if(s == "front"){
      if(empty()){
       cout << "error" << endl;
      }
      else{
       cout << front() << endl;
      }
     }
     if(s == "back"){
      if(empty()){
       cout << "error" << endl;
      }
      else{
       cout << back() << endl;
      }
     }
     if(s == "clear"){
      clear();
      cout << "ok" << endl;
     }
     if(s == "exit"){
      cout << "goodbye" << endl;
      break;
     }
    }
    return 0;
}