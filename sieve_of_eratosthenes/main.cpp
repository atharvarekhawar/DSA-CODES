#include <bits/stdc++.h>

using namespace std;
//sieve of eratosthenes is used for finding prime numbers in given 2-d array with better time complexity.
void primesieve(int n)
{
    int prime[1000]={0};//taking dynamically  large size.
    if(n==1)
    {
        cout<<"NO PRIME NUMBER FOUND"<<endl;
        return;
    }

    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)//here we are starting from i*i because numbers before square of a prime number are already
                                    //divisible by other.eg-square of 5 is 25 ,numbers before 25 which are divisible by 5 are
                                    //already divisible by 2 and 3.
            {
                prime[j]=1;
            }
        }
    }


    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            cout<<i<<" ";
        }
    }cout<<endl;


}
int main()
{
   int n;
   cout<<"enter the number till which you want to find prime numbers : ";
   cin>>n;
   cout<<"Prime numbers : ";
   primesieve(n);
    return 0;
}
