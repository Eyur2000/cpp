#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,tmp;
    cin>>n;
    map<int,int>mp;
    while (n--){
        cin>>tmp;
        if(!mp.count(tmp)){
            mp.insert({tmp,1});
        }else{
            mp[tmp]++;

        }
    }
    
    for(auto i:mp){
        cout<<i.first<<' '<<i.second<<endl;
    }
    return 0; 
}
//Mental Abuse To Human
/*
    4 7
    1 2 3 4
*/