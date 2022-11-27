#include <iostream>

using namespace std;

int main()
{
   int num;
   int i=0,sum=0;

   cout<<"enter your number : ";
   cin>>num;

   while (i<=num)
   {
      i++;
      sum=sum+i;
   }
   cout<<"your sum : " ;
   cout<< sum<<endl;
    return 0;
}
