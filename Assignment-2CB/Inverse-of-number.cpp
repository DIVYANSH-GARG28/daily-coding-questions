#include<iostream>
#include <math.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int ans = 0;
	int pos = 1;
	while(n>0){
		int digit = n%10;
		ans+=pos*(round(pow(10,digit-1)));
		n=n/10;
		pos++;
	}
	cout<<ans;
	return 0;
}