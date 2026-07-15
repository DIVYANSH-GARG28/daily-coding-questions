#include <iostream>
using namespace std;
int main(){
    int x = 0, y = 0;
    char ch;
    ch = cin.get();
    while(ch!='\n'){
        if(ch=='N'){
            y++;
        }
        else if(ch=='S'){
            y--;
        }
        else if(ch=='E'){
            x++;
        }
        else if(ch=='W'){
            x--;
        }
        else{
            cout<<"INVALID-DIRECTION";
            break;
        }
        ch = cin.get();
    }
    if(x>0){
        for(int i = 0; i<x;i++){
            cout<<'E';
        }
    }
    if(y>0){
        for(int i = 0; i<y;i++){
            cout<<'N';
        }
    }
    if(y<0){
        y = -y;
        for(int i = 0; i<y;i++){
            cout<<'S';
        }
    }
    if(x<0){
        x = -x;
        for(int i = 0; i<x;i++){
            cout<<'W';
        }
    }
    return 0;
}