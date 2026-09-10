#include <bits/stdc++.h>//
using namespace std;
using ll = long long;
int main(){
    int x=6;
    vector<int>vt;
    //輸入數字
    vt.push_back(5);
    vt.push_back(9);
    vt.push_back(1);
    vt.push_back(7);
    vt.push_back(6);
    vt.push_back(4);
    
    sort(vt.begin(),vt.end());//排一遍

    int left=0,right=vt.size()-1;
    while (left<=right){
        int mid=(left+right)/2;
        if(vt[mid]>x)right=mid-1;
        else left=mid+1;
    }
    cout<<right;
    

    

}

