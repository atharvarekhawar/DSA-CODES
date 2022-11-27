#include <iostream>

using namespace std;
//binary to decimal.
int btd(int n)
{
   int sum=0;
   int x=1;
   while(n>0)
   {
       int y=n%10;
       sum+=x*y;
       x*=2;
       n/=10;
   }
   return sum;
}
int main()
{
      int n;
      cout<<"enter binary number :";
      cin>>n;

      cout<<"decimal number : "<<btd(n)<<endl;




    return 0;
}
