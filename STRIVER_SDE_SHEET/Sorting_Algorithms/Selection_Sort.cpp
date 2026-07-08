#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n = 6;
    // cin>>n;
    vector<int> input = {1,5,194,3,23123,1};
    for(int i = 0; i<n;i++){
        int min = input[i];
        int pos = i;
        for(int j = i; j<n;j++){
            if(input[j]<min){
                min = input[j];
                pos = j;
            }
        }
        swap(input[i],input[pos]);
    }
    for(auto v: input){
        cout<<v<<" ";
    }
}