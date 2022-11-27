#include <iostream>

using namespace std;
//octal to decimal.
int otd(int n)
{
   int sum=0;
   int x=1;
   while(n>0)
   {
       int y=n%10;
       sum+=x*y;
       x*=8;
       n/=10;
   }
   return sum;
}
int main()
{
      int n;
      cout<<"enter octal number :";
      cin>>n;

      cout<<"decimal number : "<<otd(n)<<endl;




    return 0;
}


