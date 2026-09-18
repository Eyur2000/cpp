#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int>vt(n);
   vector<int>vt2(n);
   for(int i=0;i<n;i++){
      cin>>vt[i];
   }
   vt2[0]=vt[0];
   for(int i=1;i<n;i++){
      vt2[i]=vt[i]+vt2[i-1];
   }
   for(int i=0;i<n;i++){
      cout<<vt2[i]<<' ';
   }
   
   
}/*
https://cses.fi/problemset/task/1643



*/