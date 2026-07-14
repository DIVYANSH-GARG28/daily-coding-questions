#include <iostream>
#include <climits>
using namespace std;
int main(){
    int a;
    int largest = INT_MIN;
    for(int i = 0; i<5;i++){
        cin>>a;
        if(a>largest){
            largest = a;
        }
    }
    cout<<largest;
    return 0;
    
}