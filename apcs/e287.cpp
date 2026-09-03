#include <bits/stdc++.h>//4ms, 3.6MB
using namespace std;
using ll = long long;
int main(){
    int n,m,mn=1000001 ,y=0,x=0,ans=0;
    cin>>n>>m;
    int arr[n][m];
    bool bd[n][m];
    for(int i=0;i<n;i++){
        for(int k=0;k<m;k++){
            cin>>arr[i][k];
            bd[i][k]=0;
            if(mn>arr[i][k]){
                y=i;x=k;
                mn=arr[i][k];
            }
       }
    }
    ans+=arr[y][x];bd[y][x]=1;
    while(true){
        mn=1000001;
        int tmpy=y,tmpx=x;
        if(y!=0){//up
            if(bd[y-1][x]==0&&arr[y-1][x]<mn){
                tmpy=y-1;tmpx=x;
                mn=arr[y-1][x];
            }
        }
        if(y!=n-1){//down
            if(bd[y+1][x]==0&&arr[y+1][x]<mn){
                tmpy=y+1;tmpx=x;
                mn=arr[y+1][x];
            }
        }   
        if(x!=0){//left
            if(bd[y][x-1]==0&&arr[y][x-1]<mn){
                tmpy=y;tmpx=x-1;
                mn=arr[y][x-1];
            }
        }
        if(x!=m-1){//right
            if(bd[y][x+1]==0&&arr[y][x+1]<mn){
                tmpy=y;tmpx=x+1;
                mn=arr[y][x+1];
            }
        }
        if(mn==1000001){
            cout<<ans;
            return 0;
        }else{
            y=tmpy;x=tmpx;
            bd[y][x]=1;
            ans+=arr[y][x];
        }
    }
}
//n*m