#include <bits/stdc++.h>
using namespace std;

int main(){
    int  n,m;
    cin>>n>>m;
    multiset<int>st;
    vector<int>vt(n);
    for(int i=0;i<n;i++){
        cin>>vt[i];
        st.emplace(vt[i]);
    }
    sort(vt.begin(),vt.end());
    while(m--){
        int tmp;
        cin>>tmp;
        if(st.count(tmp)==true){
            cout<<tmp<<endl;
            int a =  st.count(st.find(2));
            

        }else{
            int left=0,right=vt.size()-1;
            while(left<=right){
                int mid=(left+right)/2;
                if(vt[mid]<tmp)left=mid+1;
                else if(vt[mid]>tmp)right=mid-1;
            }
            cout<<vt[left]<<endl;
            st.erase(vt[left]);
            vt.erase(vt.begin()+left);
        }
    }
}
//Mental Abuse To Human
/*

int n,m;
    cin>>n>>m;
    vector<int>arr(n),vt(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vt[0]=arr[0];
    for(int i=1;i<n;i++){
        vt[i]=arr[i]+vt[i-1];
    }
    int l,r,a,b;
    while(m--){
        cin>>l>>r>>a>>b;
        if(l>r){ 
            cout<<0<<'\n';
        }
        else{
            int left=l-1,right=r-1;
            while(left<=right){
                int mid = (left+right)/2;
                if((vt[mid]-vt[left])/(vt[right]-vt[left])<a/(a+b))left=mid+1;
                else if((vt[mid]-vt[left])/(vt[right]-vt[left])>a/(a+b))right=mid-1;
                else {
                    cout<<mid+1<<endl;
                    break;
                }
            }
        }
    }

*/