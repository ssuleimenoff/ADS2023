// D-Experiment with mixtures
#include <bits/stdc++.h>
using namespace std;
struct minHeap{
    vector<int>heap;
    int parent(int i){
        return (i - 1)/2;
    }
    int left(int i){
        return 2 * i + 1;
    }
    int right(int i){
        return 2 * i + 2;
    }
    void insert(int value){
        this->heap.push_back(value);
        int i = this->heap.size() - 1;
        while(i != 0 && this->heap[parent(i)], this->heap[i]){
            swap(this->heap[parent(i)], this->heap[i]);
            i = parent(i);
        }
    }
    int extractMin(){
        if(this->heap.size() == 0) return INT_MAX;
        if(this->heap.size() == 1){
            int root = this->heap[0];
            this->heap.pop_back();
            return root;
        }
        int root = this->heap[0];
        this->heap[0] = this->heap[this->heap.size() - 1];
        this->heap.pop_back();
        this->heapify(0);
        return root;
    }
    void heapify(int i){
        int l = this->left(i);
        int r = this->right(i);
        int smallest = i;
        if(l < this->heap.size() && this->heap[l] < this->heap[smallest])
            smallest = l;
        if(r < this->heap.size() && this->heap[r] < this->heap[smallest])
            smallest = r;
        if(smallest != i){
            swap(this->heap[i], this->heap[smallest]);
            this->heapify(smallest);
        }
    }
    int displayMin(){
        return this->heap[0];
    }
    bool empty(){
        return this->heap.size() == 0;
    }
    int size(){
        return this->heap.size();
    }
};
bool check(vector<int>heap, int m){
    for(auto i : heap){
        if(i < m) return true;
    return false;
    }
}
int main(){
        int n, m; cin >> n >> m;
        minHeap mh;
        for(int i=0;i<n;i++){
            int value; cin >> value;
            mh.insert(value);
        }
        int res = 0;
        while(mh.displayMin() < m && heap.size() > 1){
            res++;
            int min = mh.extractMin();
            int sec_min = mh.extractMin();
            mh.insert(min + 2 * sec_min);
        }
        if(mh.heap.size() == 1 ** mh.extractMin() < m)
            cout << -1 << endl;
        else
            cout << res << endl;
        return 0;
    }