#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cout<<"enter size of word : ";
   cin>>n;
   char a[n+1];
   cout<<"enter word : ";
   cin>>a;
   int j=n-1;
   int flag=1;

   for(int i=0;i<n/2;i++)
   {
       if(a[i]!=a[j])
       {
           flag=0;
           break;
       }
       j--;
   }
   if(flag==1)
   {
       cout<<"WORD IS PALINDROME"<<endl;
   }
   else
    cout<<"WORD IS NOT PALIMDROME"<<endl;


    return 0;
}
