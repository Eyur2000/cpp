#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
   int n,tmp,mx=0,mx_num=0,ans=0;
   cin>>n;
   map<int,int>mp;
   for(int i=0;i<n;i++){
      cin>>tmp;
      if(mp.count(tmp)){
         mp.insert({tmp,1});
      }else{
         mp[tmp]++;
         if(mp[tmp]>mx){
            mx_num=tmp;
            mx++;
         }
      }
   }
   for(auto &i:mp){
      if(i.first!=mx_num){
         ans+=(abs(mx_num-i.first))*i.second;
      }
   }
   cout<<ans;

   
   
   
}
/*

   for(auto i=st.begin();i!=ed;++i){
      cout<<*i<<' ';
   }
   cout<<endl;
   cout<<st.count(1);


*/