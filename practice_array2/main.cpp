#include <iostream>

using namespace std;
//sum of all sub-arrays.
int main()
{
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];
    int i,j;

    for(i=0;i<n;i++)
    {
        cout<<"enter "<< i+1<<" number : ";
        cin>>arr[i];
    }
    int sum=0;


    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            sum=sum+arr[j];
            cout<<sum<<endl;
        }
    }
    return 0;
}
