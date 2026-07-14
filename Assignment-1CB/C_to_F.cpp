#include <iostream>
using namespace std;
int main(){
    int initialv;
    int finalv;
    int stepv;
    cin>>initialv>>finalv>>stepv;
    for(int i = initialv;i<=finalv;i+=stepv){
        int ans = ((5/9.0)*(i-32));
        cout<<i<<"\t"<<ans<<endl;
    }
    return 0;
}