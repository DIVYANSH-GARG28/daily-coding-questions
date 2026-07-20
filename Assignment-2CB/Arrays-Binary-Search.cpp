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
    int i = 0;
    int j = n-1;
    int flag = 0;
    while(i<=j){
        int mid = (i+j)/2;
        if(arr[mid]==target){
            flag = 1;
            cout<<mid;
            break;
        }
        else if(arr[mid]<target){
            i = mid+1;
        }
        else{
            j = mid-1;
        }
    }
    if(flag==0){
        cout<<-1;
    }
    return 0;
}