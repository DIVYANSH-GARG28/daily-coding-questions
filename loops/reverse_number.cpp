#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev = 0;
    for(int i = n; i>0; i/=10){
        rev = rev*10 + i%10;
    }
    cout<<rev;
    return 0;
}