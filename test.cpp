#include <bits/stdc++.h>//
using namespace std;
using ll = long long;
int main(){
    int arr[3]={2,1,3};
    sort(arr,arr+3,[](int a,int b){
        return a>b;
    });
    cout<<arr[0];
    
}
/*

*/
/*
     AAAACACBA
    vector<int>vt={1,1,2,3,4,2,3,1};
    sort(vt.begin(),vt.end());
    vt.erase(unique(vt.begin(),vt.end()),vt.end());//刪陣列重複的
    for(auto i:vt){
        cout<<i<<' ';
    }
    */