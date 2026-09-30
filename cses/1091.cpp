#include <bits/stdc++.h>
using namespace std;

int main(){
    int  n,m;
    cin>>n>>m;
    multiset<int>st;
    for(int i=0;i<n;i++){
        int tmp;cin>>tmp;
        st.emplace(tmp);
    }
    while(m--){
        int tmp;cin>>tmp;
        if(st.count(tmp)>0){
            cout<<tmp<<'\n';
            st.erase(st.find(tmp));
        }else{
            auto it = st.lower_bound(tmp);
            if(it==st.begin()){
                cout<<-1<<'\n';
            }else{
                --it;
                cout<<*it<<endl;
                st.erase(st.find(*it));
            }
        }
    }
}