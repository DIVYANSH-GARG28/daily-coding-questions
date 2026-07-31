#include <iostream>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   int count = 0;
   char ch = s[0];
   for(int i = 0; i<=s.size();i++){
       if(ch!=s[i]){
           cout<<ch<<count;
           ch = s[i];
           count = 1;
       }
       else{
           count++;
       }
   }

    return 0;
}


#include <iostream>
using namespace std;
int main()
{
   string s;
   getline(cin,s);
   int count = 0;
   char ch = s[0];
   for(int i = 0; i<=s.size();i++){
       if(ch!=s[i]){
		    if(count==1){
			   cout<<ch;
		    }
		   else{
           		cout<<ch<<count;
           		ch = s[i];
           		count = 1;
		    }
       }
       else{
           count++;
       }
   }

    return 0;
}
