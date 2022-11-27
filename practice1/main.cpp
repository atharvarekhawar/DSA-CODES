#include <iostream>

using namespace std;

int main()
{
   int i,n,total=1;
   cout<<"enter n : ";
   cin>>n;

   for(i=2;i<=n;i++)
   {
       total=total*i;
   }
   cout<<"factorial : "<<total<<endl;
    return 0;
}
