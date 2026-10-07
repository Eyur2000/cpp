#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int>vt(n+1);
    vector<long long>S(n+1);
    S[0]=0;
    for(int i=0;i<n;i++){
        cin>>vt[i];
        S[i+1]+=vt[i]+S[i];
    }
    while (m--){
        int l,r,a,b,k,ans=0;
        cin>>l>>r>>a>>b;
        int left=l,right=r;
        while (left<=right){
            k=(left+right)/2;
            if((S[k-1]-S[l-1])*(a+b)<(S[r]-S[l-1])*a){
                left=k+1;
            }
            else if((S[k]-S[l-1])*(a+b)>=(S[r]-S[l-1])*a){
                right=k-1;
                
            }
            
        }
        cout<<right<<endl;
    }
    
    
}
//Mental Abuse To Human
//lower_bod