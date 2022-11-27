#include <iostream>

using namespace std;
//decimal to binary.
int dtb(int n)
{
    int ans=0;
    int x=1;
    while(x<=n)
    {
        x*=2;
    }
    x/=2;
    while(x>0)
    {
        int lastdigit=n/x;
        n-=lastdigit*x;
        x/=2;
        ans=ans*10+lastdigit;
    }
    return ans;


}
int main()
{
   int n;
   cout<<"enter number : ";
   cin>>n;

   cout<<"binary number : "<<dtb(n)<<endl;

    return 0;
}
