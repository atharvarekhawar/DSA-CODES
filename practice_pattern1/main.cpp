#include <iostream>

using namespace std;
//solid rectangle.
int main()
{
   int i,j,row,coloumn;

   cout<<"enter rows : ";
   cin>>row;
   cout<<"enter coloumns : ";
   cin>>coloumn;

   for(i=1;i<=row;i++)
   {
       for(j=1;j<=coloumn;j++)
       {
           cout<<"*";
       }cout<<endl;
   }
    return 0;
}
