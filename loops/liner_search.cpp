#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int idx = -1;
    for(int i = 0; i<n;i++){
        if(arr[i]==target){
            cout<<i;
            idx = 0;
            break;
        }
    }
    if(idx==-1){
        cout<<-1;
    }
}