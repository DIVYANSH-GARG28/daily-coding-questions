#include <iostream>
#include <math.h>
using namespace std;
int digitsum(int n){
    int sum = 0;
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
bool checkprime(int n){
    for(int i = 2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int res1 = digitsum(n);
    cout<<"Res1  value: "<<res1<<endl;
    int temp = n;
    int c = 2;
    int res2 = 0;
    while(temp>1){
        // cout<<temp<<endl;
        if(checkprime(c)){
            if(temp%c==0){
                res2+=digitsum(c);
                temp=temp/c; //189 63  21 7 
            }
            else{
                c++;
            }
        }
        else{
            c++;
        }
    }
    if(res1==res2){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}