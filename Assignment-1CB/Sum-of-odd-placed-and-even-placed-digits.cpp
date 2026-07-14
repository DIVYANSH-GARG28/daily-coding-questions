#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum_even = 0;
    int sum_odd = 0;
    int c = 0;
    while(n>0){
        if(c%2==0){
            sum_even+=n%10;
        }
        else{
            sum_odd+=n%10;
        }
        c++;
        n=n/10;
    }
    cout<<sum_even<<endl;
    cout<<sum_odd;
    return 0;
}