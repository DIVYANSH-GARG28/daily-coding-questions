#include <iostream>
using namespace std;
int recc(int *a, int n, int target){
    if(n==0){
        return -1;
    }
    if(a[0]==target){
        return 0;
    }
    int idx = recc(a+1,n-1,target);
    if(idx==-1){
        return -1;
    }
    else{
        return idx+1;
    }
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