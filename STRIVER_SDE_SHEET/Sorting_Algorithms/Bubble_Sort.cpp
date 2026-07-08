#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n = 6;
    // cin>>n;
    vector<int> input = {6,5,4,3,2,1};
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