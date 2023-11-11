// A-Optimizing Program
#include <bits/stdc++.h>
using namespace std;
struct minHeap{
    vector <long long> heap;
    int parent(int i){
        return (i - 1)/2;
    }
    int left(int i){
        return 2 * i + 1;
    }
    int right(int i){
        return 2 * i + 2;
    }
    void insert(long long value){
        this->heap.push_back(value);
        int i = this->heap.size() - 1;
        while(i != 0 && this->heap[parent(i)] >= this->heap[i]){
            swap(this->heap[parent(i)], this->heap[i]);
            i = parent(i);
        }
    }
    long long extractMin(){
        if(this->heap.size() == 0) return INT_MAX;
        if(this->heap.size() == 1){
            long long root = this->heap[0];
            this->heap.pop_back();
            return root;
        }
        long long root = this->heap[0];
        this->heap[0] = this->heap[this->heap.size() - 1];
        this->heap.pop_back();
        this->heapify(0);
        return root;
    }
    void heapify(int i){
        int l = this->left(i);
        int r = this->right(i);
        int smallest = i;
        if(l < this->heap.size() and this->heap[l] < this->heap[smallest]){
            smallest = l;
        }
        if(r < this->heap.size() and this->heap[r] < this->heap[smallest]){
            smallest = r;
        }
        if(smallest != i){
            swap(this->heap[i], this->heap[smallest]);
            this->heapify(smallest);
        }
    }
};
int main(){
    minHeap mh;
    int n; cin >> n;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        mh.insert(x);
    }
    long long sum = 0;
    while(mh.heap.size() != 1){
        long long x = mh.extractMin();
        long long y = mh.extractMin();
        mh.insert(x + y);
        sum += x + y;
    }
    cout << sum;
    return 0;
}