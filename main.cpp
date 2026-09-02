#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int movex[4]={0,0,-1,1},movey[4]={-1,1,0,0};
    int n,m,y=1,x=1;
    cin>>n>>m;
    int arr[n+2][m+2];
    bool bd[n][m];
    for(int i=0;i<n+2;i++){
        for(int k=0;k<m+2;k++){
            if((i==0||i==n+1)||(k==0||k==m+1)){
                arr[i][k]=1000001;
            }else{
                cin>>arr[i][k];
                if(arr[i][k]<arr[y][x]){
                    y=i;x=k;
                }
                bd[i-1][k-1]=false;
            }
        }
    }
    while(true){
        
    }
    cout<<arr[y][x];
    
    
    
    
}
