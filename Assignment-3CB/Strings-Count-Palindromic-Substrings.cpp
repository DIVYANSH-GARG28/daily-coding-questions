#include<iostream>
#include <algorithm>
using namespace std;
int c = 0;
void palindrome(string s){
	string rev = s;
	reverse(rev.begin(),rev.end());
	if(s==rev){
		c++;
	}
}
int main() {
	string s;
	getline(cin,s);
	for(int i = 0;i<s.size();i++){
		for(int j = i; j<s.size();j++){
			string p = "";
			for(int k = i; k<=j;k++){
				p+=s[k];
			}
			palindrome(p);
			p  = "";
		}
	}
	cout<<c;
	return 0;
}