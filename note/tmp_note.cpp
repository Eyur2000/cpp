#include <bits/stdc++.h>
using namespace std;

int main(){
    string str="Apple,letter,Sorry";
    stringstream ss(str);
    string it;
    while (getline(ss,it,','))
    {
        cout<<it<<' ';
    }
    string str="Hello";
   do
   {
      for(auto i:str)cout<<i;
      cout<<endl;
   } while (next_permutation(str.begin(),str.end()));
    
}
/*
類型      符號	    說明
整數       %d	   10 進位整數
           %x,%X   16 進位（小寫/大寫）
           %o	   8 進位
字元        %c	   單一字元
字串        %s	   字元陣列
浮點數      %f	   十進位浮點數
           %.nf	   保留 n 位小數
           %e,%E   科學記號表示法
指標	   %p	   地址指標輸出
百分比符號	%%	    輸出 % 本身



#include <cstdio>

using namespace std;

int main(){
    float a = 0.12345;
    printf("%.2f", a); // 0.12345 只取小數點後兩位, 輸出即 0.12
    return 0;
}
*/