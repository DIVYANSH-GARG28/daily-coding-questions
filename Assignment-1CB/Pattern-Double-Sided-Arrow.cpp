#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i = 0; i<(n/2)+1;i++){
		for(int j = n-2; j>=2*i;j--){
			cout<<"  ";
		}
		for(int k = i+1; k>=1;k--){
			cout<<k<<" ";
		}
		for(int l = 0; l<(2*i)-1;l++){
			cout<<"  ";
		}
		for(int m = 1; m<=i+1;m++){
			if(i==0){
				continue;
			}
			cout<<m<<" ";
		}
		cout<<endl;
	}
	for(int i = (n/2)-1; i>=0;i--){
		for(int j = n-2; j>=2*i;j--){
			cout<<"  ";
		}
		for(int k = i+1; k>=1;k--){
			cout<<k<<" ";
		}
		for(int l = 0; l<(2*i)-1;l++){
			cout<<"  ";
		}
		for(int m = 1; m<=i+1;m++){
			if(i==0){
				continue;
			}
			cout<<m<<" ";
		}
		cout<<endl;
	}
	return 0;
}