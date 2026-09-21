#include <bits/stdc++.h>
using namespace std;
int main(){
   multiset<int>st;
   st.insert(2);
   st.insert(1);
   st.insert(3);
   st.insert(1);
   auto tmp = st.find(1);
   cout<<&(*tmp)<<endl;
   tmp = st.find(1);
   cout<<&(*tmp)<<endl;
   tmp = lower_bound(st.begin(),st.end(),4);
   if(tmp==st.end())cout<<"BAD";
}/*


multiset

*/