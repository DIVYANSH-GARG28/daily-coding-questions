#include <iostream>
using namespace std;
int main(){
    char ch;
    cin.get();
    int count = 0;
    while(ch!='$'){
        cin>>ch;
        count++;
    }
    cout<<count;
    return 0;
}