#include <bits/stdc++.h>
using namespace std;
int main(){
   string str;
   cin>>str;
   int arr[26]={};
   for(auto i:str){
      arr[i-'A']++;
   }
   int bd=0;
   for(int i=0;i<26;i++){
      if(arr[i]%2==1){
         bd++;
      }
   }
   if(bd>1){
      cout<<"NO SOLUTION";
      return 0;
   }
   int tmp=-1;
   for(int i=0,left=0,right=str.size()-1;i<26;){
      if(arr[i]%2==1){
         tmp=i;
         arr[i]--;
      }else{
         while (arr[i]>0){
            str[left]='A'+i;
            str[right]='A'+i;
            arr[i]-=2;
            left++,right--;
         }
         i++;
      }
   }
   if(tmp!=-1){
      str[str.size()/2]='A'+tmp;
   }
   
   cout<<str;
}/*
AAAACACBA
AAAAAACCB

   

*/