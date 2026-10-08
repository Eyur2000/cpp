#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
   vector<int>vt={1,2,3,4,4,5,6};
   int left=0,right=vt.size()-1,a;
   while (left<=right){
      int mid=left+(right-left)/2;
      if(vt[mid]==4){
         a=mid;
         left=mid+1;
      }
      else if(vt[mid]<4)left=mid+1;
      else if(vt[mid]>4)right=mid-1;
      
   }
   cout<<a;
   

   
   
   
}
/*

   for(auto i=st.begin();i!=ed;++i){
      cout<<*i<<' ';
   }
   cout<<endl;
   cout<<st.count(1);


*/