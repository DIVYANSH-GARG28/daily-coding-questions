#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int arr[a];
    int brr[b];
    cout<<"First Array: ";
    for(int i = 0; i<a;i++){
        cin>>arr[i];
    }
    cout<<"Next array:  ";
    for(int i = 0; i<b;i++){
        cin>>brr[i];
    }
    int pos1 = 0;
    int pos2 = 0;
    if((a+b)%2==0){
        pos1 = (a+b)/2;
        pos2 = pos1+1;
    }
    else{
        pos1 = (a+b)/2;
    }
    int count = a+b-pos1;
    int bl = sizeof(brr)/sizeof(int);
    int al = sizeof(arr)/sizeof(int);
    while(bl>=0){
        if(count == 0 && pos2!=0){
        }
        if(al>=0 && arr[al]>brr[bl] && count>0){
            count--;
        }
    }
}