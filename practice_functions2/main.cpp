#include <iostream>

using namespace std;
//check for a pythagorian triplet.
bool check(int x,int y,int z)
{
    int a=max(x,max(y,z));
    int b,c;

    if (a==x)
    {
        b=y;
        c=z;
    }
    else if (a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        c=y;
    }
    if (a*a==b*b+c*c)
        return true;
    else
        return false;
}
int main()
{
    int x,y,z;
    cout<<"enter x : ";
    cin>>x;
     cout<<"enter y : ";
    cin>>y;
     cout<<"enter z : ";
    cin>>z;

    if (check(x,y,z))
        cout<<"PYTHAGORIAN TRIPLET"<<endl;
    else
        cout<<"NOT A PYTHAGRIAN TRIPLET"<<endl;



    return 0;
}
