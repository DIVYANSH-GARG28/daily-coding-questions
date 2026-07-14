#include<iostream>
using namespace std;
long long reverser(long long n){
	long long ans = 0;
	while(n!=0){
		ans=ans*10 + n%10;
		n=n/10;
	}
	return ans;

}
int main () {
	int n;
	cin>>n;
	for(int i = 0; i<n;i++){
		long long a,b;
		cin>>a>>b;
		cout<<reverser(reverser(a)+reverser(b))<<endl;
	}
	return 0;
}