#include <iostream>

using namespace std;
int fact(int n)
{
   int i,sum=1;
   for(i=2;i<=n;i++)
   {
       sum=sum*i;
   }
   return sum;
}
int main()
{
   int n,r;
   cout<<"enter n : ";
   cin>>n;
   cout<<"enter r : ";
   cin>>r;

   int ans=fact(n);
   int ncr=fact(n)/(fact(r)*fact(n-r));
   cout<<"factorial : "<<ans<<endl;
   cout<<"nCr : "<<ncr<<endl;
    return 0;
}
