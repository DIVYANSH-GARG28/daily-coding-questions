#include <iostream>
#include <climits>
using namespace std;
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int mv = INT_MIN;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
        if(mv<arr[i]){
            mv = arr[i];
        }
    }
    cout<<mv;
}