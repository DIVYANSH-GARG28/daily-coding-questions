#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    long long prod = 1;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
        prod*=arr[i];
    }
    for(int i = 0; i<n;i++){
        cout<<prod/arr[i]<<" ";
    }
    return 0;
}