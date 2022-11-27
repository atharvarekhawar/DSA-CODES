#include <iostream>

using namespace std;

int main()
{
   int n;
   cout<<"enter size of array : ";
   cin>>n;

    int arr[n];
    int i,j;

    for(i=0;i<n;i++)
    {
        cout<<"enter"<<" "<<i+1<<" "<<"number : ";
        cin>>arr[i];
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if(arr[j]<arr[i])
           {
               int temp;
               temp=arr[j];
               arr[j]=arr[i];
               arr[i]=temp;


           }
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
