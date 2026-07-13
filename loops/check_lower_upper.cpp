#include <iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<"Upper Case"<<endl;
    }
    else if(ch>=97 && ch<=122){
        cout<<"Lower Case"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
}