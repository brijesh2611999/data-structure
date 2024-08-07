/*String Compression: Implement a method to perform basic string compression using the counts
of repeated characters. For example, the string aabcccccaaa would become a2blc5a3. If the
"compressed" string would not become smaller than the original string, your method should return
the original string. You can assume the string has only uppercase and lowercase letters (a - z). 
*/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void func(string s){
    for(int i=0; i<s.length(); i++){
        int count = 1;
        while(i<s.length() && s[i]==s[i+1]) {count++;i++;}
        cout << s[i] <<count;
    }
}

int main()
{
    string s = "aabcccccaaadAA";
    func(s);

    return 0;
}
