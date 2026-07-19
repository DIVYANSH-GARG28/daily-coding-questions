#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }

    int count = 0;
    int maj = arr[0];
    for(int i = 0; i<n;i++){
        if(count==0){
            maj = arr[i];
        }
        if(arr[i]==maj){
            count++;
        }
        else{
            count--;
        }
    }
    cout<<maj;
    return 0;
}