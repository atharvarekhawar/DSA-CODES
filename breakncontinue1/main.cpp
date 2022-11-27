#include <iostream>

using namespace std;
//print all prime numbers between two numbers given by user.(including those two numbers).
int main()
{
   int a,b,num,i;
   cout<<"enter number 1 : ";
   cin>>a;
   cout<<"enter number 2 : ";
   cin>>b;

   for (num=a;num<=b;num++)
   {
       for(i=2;i<num;i++)
       {
         if (num%i==0)
            break;
       }
       if (i==num)
        cout<<i<<endl;
   }



    return 0;
}
