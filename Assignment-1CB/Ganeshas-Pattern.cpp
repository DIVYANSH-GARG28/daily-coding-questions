#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i = 0; i<n/2;i++){
		for(int j = 0; j<=(n/2);j++){
			if(j==0||j==(n/2)){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		for(int k = 0; k<n/2;k++){
			if(i==0){
				cout<<"*";
			}
		}
		cout<<endl;
	}
	for(int i = 0; i<n;i++){
		cout<<"*";
	}
	cout<<endl;
	for(int i = 0; i<n/2;i++){
		for(int j = 0; j<n;j++){
			if(i==(n/2)-1){
				if(j<=n/2 || j==n-1){
					cout<<"*";
				}
				else{
					cout<<" ";
				}
			}
			else{
				if(j==(n/2) || j==n-1){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
			}
		}
		cout<<endl;
	}
	return 0;
}