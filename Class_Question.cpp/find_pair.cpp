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
    for(int i = 0; i<n;i++){
        int k = target-arr[i];
        for(int j = i+1; j<n;j++){
            if(arr[j]==k){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
            else{
                continue;
            }
        }
    }
}