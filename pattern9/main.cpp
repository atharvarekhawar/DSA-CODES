#include <iostream>

using namespace std;
// 1-0 pattern.
int main()
{
   int n,i,j;
   cout<<"enter n : ";
   cin>>n;

   for(i=1;i<=n;i++)
   {
       for(j=1;j<=i;j++)
       {
           if((i+j)%2!=0)
          cout<<" 0";
          else
            cout<<" 1";
       }cout<<endl;
   }
    return 0;
}
