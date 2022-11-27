#include <iostream>

using namespace std;

int main()
{
    int i,j,n;

    cout<<"enter n: ";
    cin>>n;

     int coef=1;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }

        for(j=0;j<=i;j++)
        {
            if(j==0||i==0)
            {
                coef=1;
            }
            else
               {
                   coef=coef*(i-j+1)/j;
               }

            cout<<coef<<" ";
        }
        cout<<endl;
    }
    return 0;
}
