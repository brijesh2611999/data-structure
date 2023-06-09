#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int low,int high){
    for(int i=0;i<high;i++){
        int key = arr[i];
        int j =i;
        while(j>0 && arr[j-1]>key){
            arr[j]= arr[j-1];
            j--;
        }
        arr[j]=key;
    }
}
int main(){
    int arr[5] = {5,4,3,2,1};
    insertion_sort(arr,0,5);
    for(int j=0;j<5;j++){
        cout << arr[j]<<" ";
    }
    return 0;
}
