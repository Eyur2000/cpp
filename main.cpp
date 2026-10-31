#include <bits/stdc++.h>
using namespace std;
using ll=long long;
//Mental Abuse To Human
struct music{
    int ni;
    int l;
    int r;
    int i;
};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,m,ct,x;
    cin>>n>>m;
    vector<music>vt(n);
    for(int i=0;i<n;i++){
        cin>>vt[i].ni>>vt[i].l>>vt[i].r;
        vt[i].i=i+1;
    }
    sort(vt.begin(),vt.end(),[](music a,music b){
        return a.ni<b.ni;
    });
    for(int i=0;i<m;i++){
        cin>>ct>>x;
        if(x<vt[i].l||x>vt[i].r){
            if(i==m-1){
                cout<<"Miss";
            }else{
                cout<<"Miss"<<'\n';
            }
        }else{
            if(abs(ct-vt[i].ni)<=40){
                cout<<vt[i].i<<' '<<"Perfect";
            }else if(abs(ct-vt[i].ni)<=75){
                cout<<vt[i].i<<' '<<"Good";
            }else if(abs(ct-vt[i].ni)<=90){
                cout<<vt[i].i<<' '<<"Bad";
            }
            if(i<=m-2){
                cout<<'\n';
            }
        }
    }
}
/*

*/