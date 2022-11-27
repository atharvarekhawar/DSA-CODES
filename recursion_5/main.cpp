#include <iostream>

using namespace std;
//using recursion check if an array is sorted or not.
bool sorted(int arr[],int n)
{
    if (n==1)
    {
        return true;
    }
     int restarray=sorted(arr+1,n-1);

     return (arr[0]<arr[1] && restarray);
}
int main()
{
    int arr[]={1,2,3,4,5};
    int ans=sorted(arr,5);

    if(ans==1)
    {
        cout<<"ARRAY IS SORTED"<<endl;
    }
    else
        cout<<"ARRAY IS NOT SORTED"<<endl;


    return 0;
}
