#include <iostream>
#include <vector>
#include <queue>
using namespace std;
/*class heap
{
    vector<int>v;

    void heapify(int i)
    {
        int left=2*i;
        int right=2*i+1;

        int minidx=i;

        if(left<v.size() && v[left]<v[i])
        {
            minidx=left;
        }
        if(right<v.size() && v[right]<v[minidx])
        {
            minidx=right;
        }

        if(minidx!=i)
        {
            swap(v[i],v[minidx]);
            heapify(minidx);
        }
    }
    public:

        heap(int default_size=10)
        {
            v.reserve(default_size+1);
            v.push_back(-1);
        }

 void push(int data)//to access child nodes we  can use  2i and 2i+1 and to access parent from child we can use i/2.
        {
            v.push_back(data);
            int idx=v.size()-1;
            int parent=idx/2;

            while(idx>1 && v[idx]<v[parent])
            {
                swap(v[idx],v[parent]);
                idx=parent;
                parent=parent/2;
            }
        }

        int top()
        {
            return v[1];
        }

        void pop()
        {
            int idx=v.size()-1;
            swap(v[idx],v[1]);
            v.pop_back();
            heapify(1);
        }

       void print()
       {
            for(int i=1;i<v.size();i++)
         {
             cout<<v[i]<<" ";
         }
         cout<<endl;
       }
};*/
int main()
{
    int arr[]={10,15,20,13,6,90};
 // priority_queue<int>heap;//it is max heap by default
  priority_queue<int,vector<int>,greater<int>>heap;//this is used for min heap;
  for(int x:arr)
  {
      heap.push(x);
  }
  while(!heap.empty())
  {
      cout<<heap.top()<<" ";
      heap.pop();
  }





    return 0;
}
