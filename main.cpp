#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	int n,a,strat=0;
	cin>>n>>a;
	int arr[n+2][n+2];
	for(int i=0;i<n+2;i++){
		for(int k=0;k<n+2;k++){
			if((i==0||i==n+1)||(k==0||k==n+1)){
				arr[i][k]=-1;
			}
		}
	}
	for(int i=1;i<n+1;i++){
		for(int k=1;k<n+1;k++){
			cin>>arr[i][k];
		}
	}
	switch (a){
	case 0:
		
		break;
	case 1:
		
		break;
	case 2:
	
		break;
	default:
		break;
	}
}
