#include <bits/stdc++.h>//
using namespace std;
using ll = long long;
int main(){

    int x;
    cin>>x;

    vector<int>vt={-1,4,5,6,7,9};
    int left=0,right=vt.size()-1;
    
    while (left<=right){
        int mid=(left+right)/2;
        if(vt[mid]>x)right=mid-1;
        else if(vt[mid]<x)left=mid+1;
        else {
            cout<< mid;
            return 0;
        }
    }
    cout<<left;
   
    return 0;
}

/*
when in arr have x it will always go 
"else {
            cout<< mid;
            return 0;
        }
"
if not we can use left because when num is negative num right will always -1 but left always +1
*/