#include <bits/stdc++.h>//
using namespace std;
using ll = long long;
int main(){

    int x;
    cin>>x;
    
    vector<int>vt={1,5,4,6,9,7};
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
