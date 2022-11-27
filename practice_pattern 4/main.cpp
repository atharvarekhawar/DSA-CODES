#include <iostream>

using namespace std;
//hollow butterfly pattern.
int main()
{
    int i,j,n;
    cout<<"enter n (half length of pattern) : ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if (j==1||j==i)
                cout<<"*";
            else
                cout<<" ";
        }
        for(j=1;j<=2*n-2*i;j++)
        {
           cout<<" ";
        }
         for(j=1;j<=i;j++)
        {
            if (j==1||j==i)
                cout<<"*";
            else
                cout<<" ";
        }
    cout<<endl;
    }
       for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            if (j==1||j==i)
                cout<<"*";
            else
                cout<<" ";
        }
        for(j=1;j<=2*n-2*i;j++)
        {
           cout<<" ";
        }
         for(j=1;j<=i;j++)
        {
            if (j==1||j==i)
                cout<<"*";
            else
                cout<<" ";
        }cout<<endl;
    }

    return 0;
}
