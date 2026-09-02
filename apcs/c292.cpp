#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	int n,a;
	int dx[4]={-1,0,1,0},dy[4]={0,-1,0,1};
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
	vt.push_back(arr[y][x]);
	while(true){
		for(int i=0;i<add;i++){
			y+=dy[a];x+=dx[a];
			vt.push_back(arr[y][x]);
			total--;
			if(total==0){
				for(auto d:vt){
					cout<<d;
				}
				return 0;
			}
		}
		if(a==3)a=0;else a++;
		for(int i=0;i<add;i++){
			y+=dy[a];x+=dx[a];
			vt.push_back(arr[y][x]);
			total--;
			if(total==0){
				for(auto d:vt){
					cout<<d;
				}
				return 0;
			}
		}
		add++;
		if(a==3)a=0;else a++;
	}
}
/*
	0向左
	1向上
	2向右
	3向下
*/