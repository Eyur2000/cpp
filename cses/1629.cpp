#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,a,b,ans=1;
    cin>>n;
    vector<pair<long long,long long>>vt(n);
    for(int i=0;i<n;i++){
        cin>>vt[i].first>>vt[i].second;
    }
    sort(vt.begin(),vt.end());
    long long f1=vt[0].first,f2=vt[0].second;
    for(int i=1;i<n;i++){
        if(vt[i].first>=f2){
            f1=vt[i].first;
            f2=vt[i].second;
            ans++;
            cout<<"<-"<<endl;
        }else if(vt[i].second<f2&&vt[i].second-vt[i].first<f2-f1){
            f1=vt[i].first;
            f2=vt[i].second;
            cout<<"<->"<<endl;
        }else{
            cout<<"->"<<endl;
        }
        
    }
    cout<<ans;
}
//Mental Abuse To Human
/*
10
404 882
690 974
201 255
800 933
525 819
457 601
461 978
832 932
699 804
795 860

f1  f2
201 255 1
404 882 
457 601 2
461 978
525 819
690 974
699 804 3
795 860
800 933
832 932 4

*/