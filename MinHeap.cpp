#include<bits/stdc++.h>
using namespace std;
/*
priority_queue<int>pq; //maxHeap
priority_queue<int,vector<int>,greater<int>>pq //minHeap
*/
// c = 5
// 0 1 2 3 4
// 1th left child = 2*1+1 = 3 index

// parent<child
class MinHeap{
    public:
        vector<int>heap;

    void insert(int ele){
        heap.push_back(ele);
        int i = heap.size()-1;
        //child>=parent
        while(heap[(i-1)/2]>heap[i]){
            swap(heap[(i-1)/2],heap[i]);
            i = (i-1)/2; //parent
        }
    }
    
    void minHeapify(int i){
        int size = heap.size();
        while(i<size){
            int left = 2*i+1;
            int right = 2*i+2;
            int smallest = i;
            if(left<size && heap[left]<heap[smallest]) smallest = left;
            if(right<size && heap[right]<heap[smallest]) smallest = right;
            
            if(smallest!=i){
                swap(heap[smallest],heap[i]);
                i = smallest;
            }
            else break;
        }
    }   
    int extractMin(){
        if(heap.size()==0) return -1;
        
        int val = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        minHeapify(0);
        return val;
    }
    void show(){
        for(auto it:heap){
            cout << it << " ";
        }
        cout << endl;
    }
    
};
int main(){
    MinHeap mh;
    mh.insert(10);
    mh.insert(12);
    mh.insert(13);
    mh.insert(1);
    mh.show();
    
    cout << mh.extractMin()<<endl;
    mh.show();
    mh.insert(3);
    mh.show();
    return 0;
}
