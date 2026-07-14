#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0; i<n;i++){
        if(i%2==0){
            for(int j = 0; j<=i;j++){
                cout<<1;
            }
        }
        else{
            for(int j = 0; j<=i;j++){
                if(j==i || j==0){
                    cout<<1;
                }
                else{
                    cout<<0;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}