
#include <bits/stdc++.h>
using namespace std;
//prefix sum approach
int printpair(int arr[],int n)
{
    int i,j;
    int largest=0;

    int prefix[n]={0};
    prefix[0]=arr[0];

    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }

    int sum=0;

        for(j=i;j<n;j++)
        {
            if (i==0)
            {
                sum=prefix[j];
            }
            else
           sum=prefix[j]+prefix[i-1];

            largest=max(largest,sum);


            cout<<endl;
       }

    return largest;



}
int main ()
{


    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int result=printpair(arr,n);

    cout<<"largest sum of all subarrays : "<<result<<endl;








	return 0;
}

