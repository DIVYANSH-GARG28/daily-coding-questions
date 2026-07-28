#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int a = 5;
    float b = 1.11;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<b<<endl;
    cout<<&b<<endl;
    char ch = 'A';
    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<(int*)&ch<<endl;
    char arr[3] = {'A','B','C'};
    cout<<(int*)arr<<endl;
    char ab[100];
    get(cin,ab);
    return 0;
}