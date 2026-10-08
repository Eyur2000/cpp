#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int>vt(n);
    set<pair<long long,int>>S;
    vector<long long>add(n);
    for(int i=0;i<n;i++){
        cin>>vt[i];
    }
    S.emplace(make_pair(vt[0],1));
    add[0]=vt[0];
    for(int i=1;i<n;i++){
        add[i]=add[i-1]+vt[i];
        S.emplace(make_pair(add[i],i+1));
    }
    while (m--){
        int l,r,a,b,k,ans=0;
        cin>>l>>r>>a>>b;
        auto it=S.lower_bound({(add[r-1]-add[l-1])*a,INT_MIN});
        if(it==S.end())cout<<"bad";
        
    }
    
    
}
//Mental Abuse To Human
//lower_bod
// 2 4 10 13 14 19