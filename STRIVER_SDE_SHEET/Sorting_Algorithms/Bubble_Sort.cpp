#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> input(n);
    for(int i = 0; i<n;i++){
        cin>>input[i];
    }
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n-1;j++){
            if(input[j]>input[j+1]){
                swap(input[j],input[j+1]);
            }
        }
    }
    for(auto v: input){
        cout<<v<<" ";
    }
}