#include <bits/stdc++.h>
using namespace std;
int main(){
   bitset<3>bt=0;
   bt|=1;
   cout<<bt<<endl;
   bt<<=1^0;
   cout<<bt<<endl;
   
   cout<<bt;
}/*

00
01
10
11


00
01
11
10

1011
00001
00010
00100
   int a=1;
   a=a<<1;
   a=a|1;
   cout<<a;3
   

   1101  

   11123
   11123
   11213
   11132
   


*/