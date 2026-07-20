#include<iostream>
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
    int mv = 0;
    for(int i = 0; i<n;i++){
        if(arr[i]!=target){
            swap(arr[mv],arr[i]);
            mv++;
        }
    }
    for(int i = 0; i<mv;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}