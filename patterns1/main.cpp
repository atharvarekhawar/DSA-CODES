#include <iostream>
using namespace std;
//rectangle.
int main()
{
    int row,coloumn,i,j;
    cout<<"enter no. of rows : ";
    cin>>row;
    cout<<"enter no. of coloumn : ";
    cin>>coloumn;

    for(i=0;i<row;i++)
    {
        for (j=0;j<coloumn;j++)
        {
            cout<<"*";

        }cout<<endl;
    }
    return 0;
}
