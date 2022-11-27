#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cout<<"enter size of array : ";
   cin>>n;
   cin.ignore();
   char arr[n+1];


   cin.getline(arr,n);
   cin.ignore();

   int i=0;
   int currlen=0,maxlen=0;
   int st=0,maxst=0;

   while(i<=n)
   {
       if(arr[i]==' ' || arr[i]=='\0')
       {
           if(currlen>maxlen)
           {
               maxlen=currlen;
               maxst=st;
           }
           currlen=0;
           st=i+1;
       }
       else
       {
        currlen++;
       if(arr[i]=='\0')
        {
            break;
        }
       }

          i++;

   }
   cout<<"max length of any word : "<<maxlen;
   for( i=0;i<maxlen;i++)
   {
       cout<<arr[i+maxst];
   }
   cout<<endl;
    return 0;
}
