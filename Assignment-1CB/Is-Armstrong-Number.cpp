#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int size = log10(n)+1;
    int temp = n;
    int ans = 0;
    while(temp>0){
        ans+=round(pow(temp%10,size));
        temp=temp/10;
    }
    if(n==ans){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}