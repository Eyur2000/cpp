#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,m,a,b,ans=0;
    cin>>n>>m;
    vector<long long>t(n);
    vector<pair<long long,long long>>vt(m);
    for (auto &i:t){
        cin>>i;
    }
    sort(t.begin(),t.end());
    for (auto &i:vt){
        cin>>i.first>>i.second;
    }
    sort(vt.begin(),vt.end(),[](pair<long,long>a,pair<long,long>b){
        return a.second>b.second;
    });
    
    cout<<ans;
}
//Mental Abuse To Human
//lower_bod
/*
int left=0,right=vt.size()-1,mid,tmp;
        cout<<"fd:"<<i<<' ';
        while (left<=right){
            mid=left+(right-left)/2;
            
        }

3 9
7 8
4 6
5 6
2 5
*/