#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    vector<long long>vt(n),add(n);
    for(auto &i:vt){
        cin>>i;
    }
    add[0]=vt[0];
    long long mx=add[0];
    for(int i=1;i<n;i++){
        if(add[i-1]<0){
            add[i] = 0 + vt[i];
            mx=max(mx,add[i]);

        }else{
            add[i]=add[i-1]+vt[i];
            mx=max(mx,add[i]);
        }
    }
    cout<<mx;
    
    
    
    

    
    


    return 0; 
    
    
}
//Mental Abuse To Human
/*
    4 7
    1 2 3 4
*/