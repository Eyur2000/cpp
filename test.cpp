#include <bits/stdc++.h>
using namespace std;

int main(){
   
   multiset<int>st;
   st.insert(1);
   st.insert(1);
   st.insert(1);
   st.insert(2);
   st.insert(6);
   st.insert(2);
   auto tmp =st.lower_bound(7);
   if(tmp==st.end()){
      cout<<"bad";
   }
   for(auto i:st){
      cout<<i<<' ';
   }
}
