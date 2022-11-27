#include <iostream>

using namespace std;
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    int prevsum=fact(n-1);
    return n*prevsum;
}

int main()
{
    int n,ans=0;
    cout<<"enter number : ";
    cin>>n;
    ans=fact(n);
    cout<<ans<<endl;
    return 0;
}
