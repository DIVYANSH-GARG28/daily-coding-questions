#include<iostream>
#include<math.h>
using namespace std;
int main () {
	int n;
	cin>>n;
	int ans = 0;
	int c = 0;
	int temp = n;
	while(temp>0){
		int digit = temp%10;
		if(digit==0){
			n += 5*(round(pow(10,c)));
		}
		c++;
		temp= temp/10;
	}
	cout<<n;
	return 0;
}