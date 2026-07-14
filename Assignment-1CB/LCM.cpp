#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int smaller,larger;
    if(a>b){
        larger = a;
        smaller = b;
    }
    else{
        larger = b;
        smaller = a;
    }
    for(int i = smaller; i<=smaller*larger;i+=smaller){
        if(i%larger==0){
            cout<<i;
            break;
        }
    }
    return 0;
}