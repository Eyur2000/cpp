#include <bits/stdc++.h>//
using namespace std;
using ll = long long;
int id=0;
int getID(long long x){
  return lower_bound(id.begin(),id.end(),x)-id.begin()+1;
}


int main(){
    vector<int> a{2,345245,54345,653,25656253,0,34};
    vector<int>b;
    sort(a.begin(),a.end());
    int input;
    cin>>input;
    id=input;


    return 0;
}
