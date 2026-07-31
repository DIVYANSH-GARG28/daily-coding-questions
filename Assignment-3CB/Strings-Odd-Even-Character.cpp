#include<iostream>
using namespace std;
string updater(string s, int n){
	for(int i = 0; i<n;i++){
		if(i%2==0){
			s[i]++;
		}
		else{
			s[i]--;
		}
	}
	return s;
}
int main() {
	string s;
	getline(cin,s);
	cout<<updater(s,s.size());
	return 0;
}