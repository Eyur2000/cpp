#include <bits/stdc++.h>//
using namespace std;
using ll = long long;
int main(){
    int n,m;
    cin>>n>>m;
    vector<ll>arr(n),people(m),ans;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>people[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<people.size();i++){
        int left=0,right=arr.size()-1,tmp=-1;
        while (left<=right){
            int mid =(left+right)/2;
            if(arr[mid]>people[i]){
                right=mid-1;
            }else if(arr[mid]<people[i]){
                tmp=mid;
                left=mid+1;
            }else{
                tmp=mid;
                break;
            }
        }
        if(tmp!=-1){
            cout<<arr[tmp]<<endl;
            arr[tmp]=100000000;
        }else{
            cout<<-1<<endl;
        }
        sort(arr.begin(),arr.end());
    }
    
}
    
    

/*
5 3
5 3 7 8 5
4 8 3
*/
/*

    AAAACACBA
    AAAAAABCC
    vector<int>vt={1,1,2,3,4,2,3,1};
    sort(vt.begin(),vt.end());
    vt.erase(unique(vt.begin(),vt.end()),vt.end());//刪陣列重複的
    for(auto i:vt){
        cout<<i<<' ';
    }
    */