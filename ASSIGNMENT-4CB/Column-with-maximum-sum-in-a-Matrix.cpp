#include <climits>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i = 0;i<n;i++){
        for(int j = 0; j<n;j++){
            cin>>arr[i][j];
        }
    }
    int max = INT_MIN;
    int pos = 0;
    for(int i = 0; i<n;i++){
        int sum = 0;
        for(int j = 0; j<n;j++){
            sum+=arr[j][i];
        }
        if(sum>max){
            max = sum;
            pos = i;
        }
    }
    cout<<pos+1<<" "<<max;
    return 0;
}