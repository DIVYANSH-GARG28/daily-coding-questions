#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0; i<n;i++){
        for(int j = n-1; j>i;j--){
            cout<<"  ";
        }
        for(int l = 1; l<i+1;l++){
            cout<<l<<" ";
        }
        for(int k = i+1; k>0;k--){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    for(int i = n-2; i>=0;i--){
        for(int j = n-1; j>i;j--){
            cout<<"  ";
        }
        for(int l = 1; l<i+1;l++){
            cout<<l<<" ";
        }
        for(int k = i+1; k>0;k--){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}