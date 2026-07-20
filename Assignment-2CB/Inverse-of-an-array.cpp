#include <iostream>
using namespace std;
void recc(int n, int *arr, int t){
    if(n==t){
        return;
    }
    for(int i = 0; i<n;i++){
        if(arr[i]==t){
            cout<<i<<" ";
        }
    }
    recc(n,arr,t+1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    recc(n,arr,0);
}