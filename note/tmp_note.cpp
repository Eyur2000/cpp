#include <bits/stdc++.h>
using namespace std;

int main(){
    string str="Apple,letter,Sorry";
    stringstream ss(str);
    string it;
    while (getline(ss,it,','))
    {
        cout<<it<<' ';
    }
    string str="Hello";
   do
   {
      for(auto i:str)cout<<i;
      cout<<endl;
   } while (next_permutation(str.begin(),str.end()));
    
}