#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i = 0; i<n;i++){
		for(int j = 0; j<=i;j++){
			int m = 1;
			int p = 1;
			int q = 1;
			for(int k = 2; k<=i;k++){
				m*=k;
			}
			for(int l = 2; l<=j;l++){
				p *= l;
			}
			for(int s = 2; s<=i-j;s++){
				q *= s;
			}
			cout<<m/(p*q)<<" ";
		}
		cout<<endl;
	}
	return 0;
}