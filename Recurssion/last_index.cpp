#include <iostream>
using namespace std;
int recc(int *a, int n, int target){
    if(n==0){
        return -1;
    }
    if(a[n-1]==target){
        return n-1;
    }
    return recc(a,n-1,target);
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i  = 0; i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<recc(arr,n,target);
}