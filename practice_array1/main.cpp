#include <iostream>

using namespace std;
//printing max element for each iteration.
int main()
{
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];
    int i;

    for(i=0;i<n;i++)
    {
        cout<<"enter "<< i+1<<" number : ";
        cin>>arr[i];
    }
    int mx=INT_MIN;

    for(i=0;i<n;i++)
    {
        mx=max(mx,arr[i]);
        cout<<mx<<endl;
    }
    cout<<endl;
    return 0;
}
