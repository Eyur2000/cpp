#include <bits/stdc++.h>//
using namespace std;
using ll = long long;
int main(){
    int n,m;
    cin>>n>>m;
    multiset<int>st;
    vector<int>people(m);
    int tmp;
    for(int i=0;i<n;i++){
        cin>>tmp;
        st.insert(tmp);
    }
    for(int i=0;i<m;i++){
        cin>>people[i];
    }
    for(int i=0;i<m;i++){
        auto it = st.lower_bound(people[i]);
        
    }
    
}
/*
5 3
5 3 7 8 5
4 8 3
*/
