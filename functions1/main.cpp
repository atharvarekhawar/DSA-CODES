#include <iostream>
#include<cmath>
using namespace std;
//take two numbers from user and print all prime number between them using function.
bool isprime(int num)
{
    int i;
    for(i=2;i<=sqrt(num);i++)
    {
       if(num%i==0)
            return false;
    }
    return true;
}
int main()
{
    int a,b,i;
    cout<<"enter number 1 : ";
    cin>>a;
    cout<<"enter number 2 : ";
    cin>>b;

    for(i=a;i<=b;i++)
    {
        if(isprime(i)==true)
            cout<<i<<" ";

    }cout<<endl;
    return 0;
}
