#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int>vt(n+1);
    vector<int>S(n+1);
    for(auto &i:vt){
        cin>>i;
    }
    S[0]=vt[0];
    
    for(int i=1;i<n;i++){
        S[i]=S[i-1]+vt[i];
    }
    while (m--)
    {
        int l,r,a,b,k,ans;
        cin>>l>>r>>a>>b;
        int left=l-1,right=r-1;
        k=left;
        while (true){
            if((S[k]-S[l-1])*(a+b)<(S[r]-S[l-1])*a){
                ans=k;
                k++;
            }else{
                cout<<k<<endl;
                break;
            }
            
        }
        
        
    }
    
}
//Mental Abuse To Human
/*
    4 7
    1 2 3 4
*/