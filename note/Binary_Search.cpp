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
        else cout<< mid;
    }
    cout<<"nono";
}

/*
基本概念
find x=6
arr = 1 4 5 6 7 9
int l=0,r=5,mid=l+r=5/2 = 2
arr[mid=2]=5 < x so left = mid+1
mid = (3+5)/2 = 8/2 = 4
arr[mid=4] = 7 > x so r = mid-1 
mid = (3+3)/2 = 6/2 = 3 
arr[mid=3] =  6 and because we set "if(vt[mid]>x)" is not work then "left=mid+1"; 
then left was bigger right and while was break 
we cout right is was 3 same as we want num arr value same
*/