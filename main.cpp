#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    multiset<int>st;
    int tmp;
    for(int i=0;i<n;i++){
        cin>>tmp;
        st.insert(tmp);
    }
    while(m--){
        int x;
        cin>>x;
        auto tmp = st.find(x);
        if(tmp==st.end()){
            cout<<-1<<endl;
        }else{
            cout<<*tmp<<endl;
            st.erase(tmp);
        }
    }
   
}