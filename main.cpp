#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	int n,a;
	int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
	vector<int>vt;
	cin>>n>>a;
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int k=0;k<n;k++){
			cin>>arr[i][k];
		}
	}
	int total =n*n-1,add=1;
	int x=n/2,y=x;
	cout<<x<<y<<endl;
	vt.push_back(arr[y][x]);
	while(true){
		for(int i=0;i<add;i++){
			total--;
			y+=dy[a];x+=dx[a];
			vt.push_back(arr[y][x]);
			if(total==0){
				for(auto d:vt){
					cout<<d;
				}
			}
		}
		add++;
		if(n==3)n=0;
		else n++;
		for(int i=0;i<add;i++){
			total--;
			y+=dy[a];x+=dx[a];
			vt.push_back(arr[y][x]);
			if(total==0){
				for(auto d:vt){
					cout<<d;
				}
			}
		}
		if(n==3)n=0;
		else n++;
	}
}