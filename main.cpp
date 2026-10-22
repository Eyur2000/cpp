#include <bits/stdc++.h>
using namespace std;
using ll=long long;
struct num{
    int math=0;
    int ch=0;
    int eng=0;
    int sc=0;
    int st=0;
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    vector<int>vt;
    for(int i=0;i<5;i++){
        int tmp;
        cin>>tmp;
        vt.push_back(tmp);
    }
    for(auto i:vt){
        cout<<i;
    }
}
/*
20 60 38 70 48
35 96 8  
86 46 37 37 


*/
//Mental Abuse To Human
//lower_bod
/*
int left=0,right=vt.size()-1,mid,tmp;
        cout<<"fd:"<<i<<' ';
        while (left<=right){
            mid=left+(right-left)/2;
            
        }

3 9
7 8
4 6
5 6
2 5
*/