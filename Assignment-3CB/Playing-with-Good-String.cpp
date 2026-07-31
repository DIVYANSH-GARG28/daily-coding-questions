#include<iostream>
#include <climits>
using namespace std;
int main() {
	string s;
	getline(cin,s);
	long long int c = 0;
	long long int maxi = 0;
	string temp = "";
	for(int i = 0; i<s.size();i++){
		if(s[i]=='a' || s[i] == 'e' || s[i]=='i' || s[i] == 'o' || s[i]=='u'){
			temp+=s[i];
			c++;
			if(c>maxi){
				maxi = c;
			}
		}
		else{
			temp = "";
			c = 0;
		}
	}
	cout<<maxi;
	return 0;
}