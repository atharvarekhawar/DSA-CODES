#include <iostream>

using namespace std;
//bubble sort : IN this sorting technique, we iterate over whole array and repeatedly swap two adjacent elements if they are in
//wrong order. we do this till we do not get sorted array.
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

   int counter=1;
   while (counter<n)
   {
       for(int i=0;i<n-counter;i++)
       {
           if (arr[i]>arr[i+1])
            {

            int temp;
            temp =arr[i];
           arr[i]=arr[i+1];
           arr[i+1]=temp;
            }
       }
       counter++;
   }
cout<<"sorted array : ";
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }cout<<endl;

        return 0;
}
