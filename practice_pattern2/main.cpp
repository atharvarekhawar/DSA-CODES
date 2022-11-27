#include <iostream>

using namespace std;
//hollow-rectangle.
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
            if(i==1||i==row||j==1||j==coloumn)
                cout<<"*";
            else
                cout<<" ";
        }cout<<endl;
    }
    return 0;
}
