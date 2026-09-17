#include <bits/stdc++.h>//
using namespace std;
using ll = long long;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>vt(n);
    vector<int>q(m);
    for(int i=0;i<n;i++){
        cin>>vt[i];
    }
    for(int i=0;i<m;i++){
        cin>>q[i];
    }
    int now=0,stp=0;
    for(int i=0;i<m;i++){
        while (now<=q[i])
        {
            now+=vt[stp];
            stp=(stp+1)%n;
        }
        if(i==m-1){
            cout<<stp;
        }else{
            
            stp=(stp+1)%n;
            now=0;
        }
        
    }
    
}
//1000000000