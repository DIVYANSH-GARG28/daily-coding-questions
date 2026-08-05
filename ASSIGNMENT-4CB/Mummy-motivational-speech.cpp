#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	int arr[n][n];
	for(int i = 0; i<n;i++){
		for(int j = 0; j<n;j++){
			cin>>arr[i][j];
		}
	}
	int flag = 0;
	for(int i = 0; i<n;i++){
		for(int j = 0; j<n;j++){
			if(j>i && arr[i][j]!=0){
				flag = 1;
				cout<<"false";
				break;
			}
		}
		if(flag==1){
			break;
		}
	}
	if(flag==0){
		cout<<"true";
	}
	return 0;
}