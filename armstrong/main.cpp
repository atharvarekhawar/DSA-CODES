#include <iostream>
#include<math.h>
using namespace std;
//check if number is armstrong or not.
int main()
{
    int n;
    cout<<"enter number : ";
    cin>>n;
    int sum=0 ;
    int original=n;

    while(n>0)
    {
        int lastdigit=n%10;
        sum+=pow(lastdigit,3);
        n=n/10;
    }
    if(original==sum)
        cout<<"it is a armstrong number "<<endl;
    else
        cout<<"it is not a armstong number "<<endl;

    return 0;
}
