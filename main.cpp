#include <bits/stdc++.h>//
using namespace std;
using ll = long long;
int main(){
    int n,m,k,ans=0;
    cin>>n>>m>>k;
    vector<int>vt(n);
    vector<ll>house(m);
    for(int i=0;i<n;i++){
        cin>>vt[i];
    }
    for(int i=0;i<m;i++){
        cin>>house[i];
    }
    sort(vt.begin(),vt.end());
    sort(house.begin(),house.end());
    for(int i=0;i<n;i++){
        int left=0,right=house.size()-1;
        while(left<=right){
            
        }
    }
    cout<<ans<<endl;
    for(auto i:house){
        cout<<i<<' ';
    }
    cout<<endl;
    for(auto i:vt){
        cout<<i<<' ';
    }
    
}
//1000000000