#include<iostream>
#include<climits>
using namespace std;
int main () {
	int n;
	int mv = INT_MIN;
	for(int i = 0; i<5;i++){
		cin>>n;
		if(mv<n){
			mv = n;
		}
	}
	cout<<mv;
	return 0;
}