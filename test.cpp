#include <bits/stdc++.h>
using namespace std;
int main(){
   int n=5;
   vector<int> vt;
   vector<int> pvt(n+1,0);
   for(int i=0;i<n;i++){
      vt.push_back(1);
      vt.push_back(2);
      vt.push_back(3);
      vt.push_back(4);
      vt.push_back(5);
   }
   for(int i=0;i<n;++i){
      pvt[i+1] = pvt[i] + vt[i];
   }
   for(auto i:pvt){
      cout<<i<<' ';
   }
   
}/*




*/