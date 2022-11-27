#include <iostream>

using namespace std;
//max sum of sub array using kadane's algorithm
int max_subarray_sum (int arr[],int n)
{
    int cs=0;//current sum
    int ls=0;//largest sum

    for(int i=0;i<n;i++)
    {
        cs=cs+arr[i];
        if(cs<0)
        {
            cs=0;
        }
        ls=max(ls,cs);
    }
    return ls;

}
int main()
{
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);

    int result =max_subarray_sum(arr,n);

    cout<<result<<endl;
    return 0;
}
