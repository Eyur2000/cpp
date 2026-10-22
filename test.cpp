#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
   int n;
   cin>>n;
   cin.ignore();
   string in;
   vector <int>ans;
   for(int i=0;i<n;i++){
      getline(cin,in);
      stringstream str(in);
      int total=0,sz=0,num=0;
      while (str>>num){
         total+=num;
         sz++;
      }
      ans.push_back(total/sz);
   }
   for(auto &i:ans){
      cout<<i<<' ';
   }
   
   
}
/*
3
30 60 90 20
60 76 67 87 90
10 20 30



*/