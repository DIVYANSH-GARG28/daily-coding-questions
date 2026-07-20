#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n;i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
	int flag = 0;
	for(int i = 0; i<n;i++){
		if(arr[i]==target){
			flag = 1;
			cout<<i;
			break;
		}
	}
	if(flag==0){
		cout<<-1;
	}
	return 0;
}