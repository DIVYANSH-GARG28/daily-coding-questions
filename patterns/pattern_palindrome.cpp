#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0; i<n;i++){
        for(char ch = 'A'; ch<65+n-i;ch++){
            cout<<ch;
        }
        for(char c = 'A'+n-i-1; c>=65;c--){
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}