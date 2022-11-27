#include <iostream>

using namespace std;
//rhombus pattern.
int main()
{
   int i,j,n;
   cout<<"enter n: ";
   cin>>n;

   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n-i;j++)
       {
           cout<<" ";
       }
       for(j=1;j<=n;j++)
       {
           cout<<"*";
       }
       cout<<endl;
   }
    return 0;
}
