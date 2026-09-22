#include <bits/stdc++.h>//
using namespace std;
using ll = long long;
int main(){
    multiset<char>st;
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++){
        st.emplace(str[i]);
    }
    for(int i=0;i<str.size();i++){
        if(str[i]=='('){
            if(st.count('(')!=st.count(')')){
                cout<<"Invalid";
                return 0;
            }
        }
        else if(str[i]=='['){
            if(st.count('[')!=st.count(']')){
                cout<<"Invalid";
                return 0;
            }
        }
        else if(str[i]=='{'){
            if(st.count('{')!=st.count('}')){
                cout<<"Invalid";
                return 0;
            }
        }
    }
    cout<<"Valid";
    return 0;
}
/*

5 3
5 3 7 8 5
4 8 3
*/
