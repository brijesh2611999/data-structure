/******************************************************************************
Rotate Matrix: Given an image represented by an NxN matrix, where each pixel in the image is 4
bytes, write a method to rotate the image by 90 degrees. Can you do this in place? 
*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
void rotateMatrix(vector<vector<int>>v){
    for(int i=0; i<4; i++){
        for(int j=i; j<4; j++)  swap(v[i][j],v[j][i]);
    }
    int col = 4-1;
    for(int i=0; i<2; i++){
        for(int row=0; row<4; row++){
            swap(v[row][i],v[row][col]);
        }
        col--;
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++)  cout << v[i][j]<<" ";
        cout << endl;
    }
}
int main()
{
    vector<vector<int>>v = {{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++)  cout << v[i][j]<<" ";
        cout << endl;
    }
    rotateMatrix(v);
    return 0;
}
