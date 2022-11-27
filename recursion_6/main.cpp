#include <iostream>

using namespace std;
//print numbers till n with recursion in increasing as well as decreasing order.(starting and ending with 1)
void dec(int n)
{
    if(n==1)
    {
        cout<<"1"<<" ";
        return;
    }
    cout<<n<<" ";
    dec(n-1);
}
void inc(int n)
{
    if(n==1)
    {
        cout<<"1"<<" ";
        return;
    }
    inc(n-1);
    cout<<n<<" ";
}
int main()
{
    int n;
    cout<<"enter number : ";
    cin>>n;
    dec(n);
    cout<<endl;
    inc(n);
    return 0;
}
