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

   for(auto i=st.begin();i!=ed;++i){
      cout<<*i<<' ';
   }
   
}
