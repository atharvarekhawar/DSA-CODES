#include <iostream
using namespace std;
int binarysearch(int arr[],int n,int key)
{

    int s=0;
    int e=n-1;

    while(s<=e){
        int mid=(s+e)/2;

        if (arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e=mid;
        }
        else if(arr[mid]<key)
        {
            s=mid   ;
        }

    }
        return -1;

}
int main()
{
    int n;

    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cout<<"enter"<<" "<<i+1<<" "<<"number : ";
        cin>>arr[i];
    }
    int key;
    cout<<"enter key : ";
    cin>>key;

    if (binarysearch(arr,n,key)==-1)
    {
        cout<<"YOUR KEY IS NOT PRESENT IN ARRAY"<<endl;
    }
    else{

    cout<<"THE INDEX NUMBER OF ASKED KEY IS "<<binarysearch(arr,n,key)<<endl;
    }


    return 0;
}
