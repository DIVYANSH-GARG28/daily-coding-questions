#include<iostream>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	int nums[n][m];
	for(int i = 0; i<n;i++){
		for(int j = 0; j<m;j++){
			cin>>nums[i][j];
		}
	}
	int key;
	cin>>key;
	int s = m-1;
	int row = 0;
	int flag = 0;
	while(row<n && s>=0){
		if(nums[row][s]==key){
			flag = 1;
			cout<<1;
			break;
		}
		else if(nums[row][s]>key){
			s--;
		}
		else{
			row++;
		}
	}
	if(flag==0){
		cout<<0;
	}

	return 0;
}