#include <bits/stdc++.h>//3ms, 3.6MB
using namespace std;
using ll = long long;
int main() {
	int R,C,K,M,mx=-1,mn=101;
	cin>>R>>C>>K>>M;
	int arr[R+2][C+2];
	int move[R+2][C+2];

	for(int i=0;i<R+2;i++){
		for(int k=0;k<C+2;k++){
			if((i==0||i==R+1)||(k==0||k==C+1)){
				arr[i][k]=-1;
			}else{
				cin>>arr[i][k];
			}
		}
	}

	for(int t=0;t<M;t++){
		for(int i=0;i<R+2;i++){
			for(int k=0;k<C+2;k++){
				if(arr[i][k]==-1){
					move[i][k]=0;
				}else{
					move[i][k]=arr[i][k]/K;
				}
			}
		}
		for(int i=1;i<R+1;i++){
			for(int k=1;k<C+1;k++){
				if(arr[i][k]!=-1){
					if(move[i][k-1]!=0){
						arr[i][k]+=move[i][k-1];
						arr[i][k-1]-=move[i][k-1];
					}
					if(move[i][k+1]!=0){
						arr[i][k]+=move[i][k+1];
						arr[i][k+1]-=move[i][k+1];
					}
					if(move[i-1][k]!=0){
						arr[i][k]+=move[i-1][k];
						arr[i-1][k]-=move[i-1][k];
					}
					if(move[i+1][k]!=0){
						arr[i][k]+=move[i+1][k];
						arr[i+1][k]-=move[i+1][k];
					}
				}
			}
		}
	}

	for(int i=1;i<R+1;i++){
		for(int k=1;k<C+1;k++){
			if(arr[i][k]!=-1){
				mx=max(mx,arr[i][k]);
				mn=min(mn,arr[i][k]);
			}
		}
	}
	cout<<mn<<endl<<mx;
}
