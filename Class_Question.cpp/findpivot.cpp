#include <iostream>
#define ll long long
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    ll s = 0;
    ll e = n-1;
    while(s<=e){
        ll mid = (s+e)/2;
        if (arr[mid] > arr[e]) {
            s = mid + 1;
        } 
        else if (arr[mid] < arr[e]) {
            e = mid;
        } 
        else {
            e--;
        }
    }
    cout<<s<<endl;

}