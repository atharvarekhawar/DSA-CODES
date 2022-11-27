#include <iostream>

using namespace std;
//check if given number is prime or not.
int main()
{
    int n,i,flag=0;
    cout<<"enter number : ";
    cin>>n;

    for (i=2;i<n;i++)
    {
        if (n%i==0)
        {
            flag=1;
            cout<<"not a prime number"<<endl;
            break;
        }
    }
    if (flag==0)
    {
        cout<<"it is a prime number"<<endl;
    }


    return 0;
}
