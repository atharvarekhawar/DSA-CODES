#include <iostream>
#include <vector>

using namespace std;
void fib(int n)
{
    vector<int>f;

    f.push_back(0);
    f.push_back(1);


    for(int i=2;i<n;i++)
    {
        f.push_back(f[i-1]+f[i-2]);

    }
     for(int i=0;i<n;i++)
     {
         cout<<f[i]<<" ";
     }


}



int main()
{
    int n;
    cin>>n;

    fib(n);
    return 0;
}
