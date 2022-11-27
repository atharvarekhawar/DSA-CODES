#include <iostream>

using namespace std;
//sum of first n natural numbers.
int sum(int n)
{
    int total;
    total=n*(n+1)/2;
    return total;
}
int32_t main()
{
    int n;
    cout<<"enter n : ";
    cin>>n;

    cout<<"sum : "<<sum(n)<<endl;


    return 0;
}
