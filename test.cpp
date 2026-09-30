#include <bits/stdc++.h>
using namespace std;

int main(){
   
   multiset<int>st;
   st.insert(1);
   st.insert(1);
   st.insert(1);
   st.insert(2);
   st.insert(5);
   st.insert(2);
   auto ed = st.lower_bound(3);
   if(st.lower_bound(0)==st.begin()||st.lower_bound(0)==st.end()){
      cout<<"bad";
   }
}
/*

   for(auto i=st.begin();i!=ed;++i){
      cout<<*i<<' ';
   }
   cout<<endl;
   cout<<st.count(1);


*/