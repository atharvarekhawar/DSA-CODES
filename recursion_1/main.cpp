#include <iostream>

using namespace std;
int sum(int n)
{
    if (n==0)
    {
        return 0;
    }
    int prevsum=sum(n-1);
    return n+prevsum;
}
int main()
{
    int n,ans=0;
    cout<<"enter number : ";
    cin>>n;
    ans=sum(n);

    cout<<ans<<endl;

    return 0;
}
