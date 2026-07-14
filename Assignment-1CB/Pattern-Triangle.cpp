#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1; i<=n;i++){
        for(int j = n-1; j>=i;j--){
            cout<<"\t";
        }
        for(int k = i; k<=(2*i)-1;k++){
            cout<<k<<"\t";
        }
        for(int l = (2*i)-2; l>=i;l--){
            cout<<l<<"\t";
        }
        cout<<endl;
    }
    return 0;
}