#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    int count = 0;
    while(n>0){
        if(n%10==target){
            count++;
        }
        n=n/10;
    }
    cout<<count;
    return 0;
}