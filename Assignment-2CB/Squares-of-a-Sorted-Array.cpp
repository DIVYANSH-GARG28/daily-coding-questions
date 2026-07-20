#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
        arr[i] = arr[i]*arr[i];
    }
    for(int i = 0; i<n;i++){
        int min = INT_MAX;
        int pos = i;
        for(int j = i; j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                pos = j;
            }
        }
        swap(arr[i],arr[pos]);
    }
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }

}
