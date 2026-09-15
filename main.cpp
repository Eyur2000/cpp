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
    sort(house.begin(),house.end());
    for(int i=0;i<n;i++){
        int left=0,right=house.size()-1;
        while(left<=right){
            int mid = left+right/2;
            if(house[mid]>vt[i])right=mid-1;
            else if(house[mid]<vt[i])left=mid+1;
            else {
                ans++;
                house.erase(house.begin()+mid);
            }
        }
    }
    cout<<ans;
}
//1000000000