#include<bits/stdc++.h>
using namespace std;

// Find Kth permutation
int main(){
    //firstly we make all permutation

    int n;
    cin >> n;
     string nums;
     for(int i=1; i<=n; i++){
        nums+=to_string(i);
     }
    for(int i=0;i<nums.length();i++)
    cout << nums[i];
    vector<string>s;
    do{
        s.push_back(nums);
    }while(next_permutation(nums.begin(),nums.end()));
    for(auto it:s)
    cout<< it << endl;
    return 0;
}