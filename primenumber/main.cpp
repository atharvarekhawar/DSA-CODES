#include <iostream>
#include <cmath>
using namespace std;
//check if number is prime or not.
int main()
{
    int i,n;
    bool j=1;
    cout<<"enter number : ";
    cin>>n;

    for(i=2;i<sqrt(n);i++)
    {
        if (n%i==0)
            cout<<"not prime"<<endl;
            j=0;
        break;

    }
    if(j==1)
        cout<<"prime"<<endl;

    return 0;
}
