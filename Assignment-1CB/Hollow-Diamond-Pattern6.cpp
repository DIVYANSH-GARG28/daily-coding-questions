#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i = 0; i<(n/2)+1;i++){
		for(int j = (n/2); j>=i;j--){
			cout<<"*\t";
		}
		for(int k = 0; k<(2*i)-1;k++){
			cout<<"\t";
		}
		for(int l = (n/2); l>=i;l--){
			if(l==0){
				continue;
			}
			cout<<"*\t";
		}
		cout<<endl;
	}
	for(int i = (n/2); i>0;i--){
		for(int j = (n/2); j>=i-1;j--){
			cout<<"*\t";
		}
		for(int k = 0; k<(2*i)-3;k++){
			cout<<"\t";
		}
		for(int l = (n/2); l>=i-1;l--){
			if(l==0){
				continue;
			}
			cout<<"*\t";
		}
		cout<<endl;
	}
	return 0;
}