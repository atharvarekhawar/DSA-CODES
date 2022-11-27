#include <iostream>

using namespace std;
int pow(int n,int p)
{
     if(p==0)
     {
         return 1;
     }

         int prevpow=pow(n,p-1);
         return n*prevpow;

}
int main()
{
    int n,p,ans=0;
    cout<<"enter number : ";
    cin>>n;
    cout<<"enter power : ";
    cin>>p;
    ans=pow(n,p);
    cout<<endl<<ans<<endl;

    return 0;
}
