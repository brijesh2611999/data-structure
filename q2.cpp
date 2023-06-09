#include<bits/stdc++.h>
using namespace std;

class Assignment_10{
	ifstream fin;
	public:
			Assignment_10(const string& input_file):fin(input_file){
	
			}
			void func();
			
};

void Assignment_10::func(){
	
		vector<string> s;
		string line;
        while (fin>>line) {
            s.push_back(line);
        }
		     
             int count=0;
             string str;
             cout<<"Enter word :";
             cin >> str;
          for(int i=0; i<s.size();i++){
           
            if(s[i]==str)   {
                count++;
            }
	
		}
        cout<<count;
		}
		
    
int main(){

	Assignment_10 A("input.txt");
	A.func();
	return 0;
}