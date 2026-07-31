#include<iostream>
using namespace std;
int main() {
	string s;
	getline(cin,s);
	for(int i = 0; i<s.size();i++){
		if(s[i]>=65 && s[i]<=90  && i!=0){
			cout<<"\n"<<s[i];
		}
		else{
			cout<<s[i];
		}
	}
	return 0;
}