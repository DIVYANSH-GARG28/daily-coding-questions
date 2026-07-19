#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    int largest = INT_MIN;
    for(int i = 0; i<3;i++){
        cin>>n;
        if(largest<n){
            largest = n;
        }
    }
    cout<<largest;
    return 0;
}