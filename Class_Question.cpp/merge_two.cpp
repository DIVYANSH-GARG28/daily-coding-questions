#include <iostream>
using namespace std;
int main(){
    int a[7] = {1,2,4,6};
    int b[3] = {3,5,8};
    int j = 6;
    int bl = 2;
    int al = 3;
    while(j>=0){
        if(a[al]>b[bl]){
            a[j] = a[al];
            al--;
        }
        else{
            a[j] = b[bl];
            bl--;
        }
        j--;
    }
    for(int i = 0; i<7;i++){
        cout<<a[i]<<" ";
    }
}