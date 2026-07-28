#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
bool check(ll n,ll tc, ll *stalls, ll d){
    int pc = 1;
    int cd = stalls[0];
    for(int i = 0; i<n;i++){
        int pd = stalls[i];
        if(pd-cd>=d){
            cd = pd;
            pc++;
            if(pc==tc){
                return true;
            }
        }
    }
    return false;
}
int main(){
    ll n,tc;
    cin>>n>>tc;
    ll stalls[n];
    for(int i = 0; i<n;i++){
        cin>>stalls[i];
    }
    sort(stalls,stalls+n);
    ll s = 0;
    ll e = stalls[n-1]-stalls[0];
    ll ans = 0;
    while(s<=e){
        ll mid = (s+e)/2;
        if(check(n,tc,stalls,mid)==true){
            ans = mid;
            s = mid+1;
        } 
        else{
            e = mid-1;
        }
    }
    cout<<ans;
}