#include <iostream>

using namespace std;
//hollow rectangle.
int main()
{
      int row,coloumn,i,j;
    cout<<"enter no. of rows : ";
    cin>>row;
    cout<<"enter no. of coloumn : ";
    cin>>coloumn;

    for (i=1;i<=row;i++)
    {
        for (j=1;j<=coloumn;j++)
        {
            if (i==1||i==row||j==1||j==coloumn)
                cout<<"*";
            else
                cout<<" ";
        }cout<<endl;
    }

    return 0;
}
