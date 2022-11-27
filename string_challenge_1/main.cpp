#include <bits/stdc++.h>

using namespace std;
//convert a string of lower case alphabets into upper case alphabets and again in lower case alphabets.
int main()
{
   string str="ahdifgrootj";
   //idea of cases is 'a'-'A'=32.

   for(int i=0;i<str.size();i++)
   {
       if(str[i]>='a'&&str[i]<='z')
       {
           str[i]-=32;
       }
   }
   cout<<str<<endl;

   for(int i=0;i<str.size();i++)
   {
       if(str[i]>='A'&&str[i]<='Z')
       {
           str[i]+=32;
       }
   }
   cout<<str<<endl;


}
