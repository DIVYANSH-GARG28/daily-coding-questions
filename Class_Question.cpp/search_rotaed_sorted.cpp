#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==key){
            cout<<mid<<endl;
            break;
        }
        else if(arr[mid]>=arr[n-1]){
            if(arr[low]<=key && key<=arr[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else{
            if(arr[mid]<=key && key<=arr[high]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
}