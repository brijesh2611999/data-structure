/******************************************************************************
Zero Matrix: Write an algorithm such that if an element in an MxN matrix is 0, its entire row and
column are set to 0.
*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
void rotateMatrix(vector<vector<int>>v){
    vector<bool>row(4);
    vector<bool>col(4);
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(v[i][j]==0){
                row[i]=true;
                col[j]=true;
            }
        }
    }
    // row zero
    for(int i=0; i<4; i++){
        if(!row[i]) continue;
        for(int j=0; j<4; j++){
            v[i][j]=0;
        }
    }
    // col zero
    for(int i=0; i<4; i++){
        if(!col[i]) continue;
        for(int j=0; j<4; j++){
            v[j][i]=0;
        }
    }
    
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++)  cout << v[i][j]<<" ";
        cout << endl;
    }
}
int main()
{
    vector<vector<int>>v = {{1,1,0,1},{2,2,2,2},{3,0,0,3},{4,4,4,0}};
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++)  cout << v[i][j]<<" ";
        cout << endl;
    }
    rotateMatrix(v);
    return 0;
}
