#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,ans=0;
    cin>>n;
    vector<int>vt(n);
    for(int i=0;i<n;i++){
        cin>>vt[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            if(vt[j]==i){
                if(j+1==i){
                    break;
                }else{
                    swap(vt[j],vt[i-1]);
                    ++ans;
                }
            }
        }
    }
    cout<<ans;



    return 0; 
}
//Mental Abuse To Human
/*
    4 7
    1 2 3 4
*/