#include <bits/stdc++.h>//
using namespace std;
using ll = long long;
int main(){
    int n,m,k,ans=0;
    cin>>n>>m>>k;
    int arr[n];
    vector<int>brr(m);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    sort(arr,arr+n);
    sort(brr.begin(),brr.end());
    
        for(int j=0;j<brr.size();j++){
            if(arr[i]+k>=brr[j]&&arr[i]-k<=brr[j]){
                brr.erase(brr.begin()+j);
                ans++;
                break;
            }
        }
    
    cout<<ans;
}
//run 20*20 
