#include <iostream>
using namespace std;
long long factorial(int n){
    long long ans = 1;
    for(int i = 2; i<=n;i++){
        ans*=i;
    }
    return ans;
}
long long ncr(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r);
}