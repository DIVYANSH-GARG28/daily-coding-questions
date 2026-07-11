#include <iostream>
using namespace std;
void recc(int *a, int n, int target, int i){
    if(i==n){
        cout<<-1;
        return;
    }
    if(a[i]==target){
        cout<<i<<" ";
    }
    return recc(a,n,target,i+1);

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
    recc(arr,n,target,0);
}