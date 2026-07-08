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