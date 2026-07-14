#include <iostream>
using namespace std;
bool checkprime(int n){
	for(int i = 2; i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	int ans = 0;
	int temp = n;
	for(int i = 2; i<=n;){
		if(n%i==0){
			if(checkprime(i)){
				int t = i;
				while(t>0){
					int digit = t%10;
					ans+=digit;
					t=t/10;
				}
				n=n/i;
			}
		}
		else{
			i++;
		}
	}
	int res = 0;
	while(temp>0){
		int digit = temp%10;
		res+=digit;
		temp=temp/10;
	}
	cout<<(res==ans)?1:0;
	return 0;
}