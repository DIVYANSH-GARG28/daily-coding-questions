#include<iostream>
using namespace std;
int main() {
	string s;
	getline(cin,s);
	for(int i = 0; s[i]!='\0';i++){
		if(s[i+1]=='\0'){
			cout<<s[i];
		}
		else{
			cout<<s[i]<<s[i+1]-s[i];
		}
	}
	return 0;
}