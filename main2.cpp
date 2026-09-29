#include <bits/stdc++.h>//
using namespace std;
using ll = long long;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int k=n;k>i;k--){
            cout<<'*';
        }
        cout<<endl;
    }
}
//run 20*20 
