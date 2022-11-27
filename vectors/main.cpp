#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
   vector<int>v;
   v.push_back(1);
    v.push_back(2);
     v.push_back(3);

     for(int i=0;i<v.size();i++)
     {
         cout<<v[i]<<endl;
     }//1 2 3
     cout<<endl;

     for(auto element:v)
     {
         cout<<element<<endl;
     }//1 2 3
    v. pop_back();
     for(auto element:v)
     {
         cout<<element<<endl;
     }//1 2

     vector<int>v2 (3,10);//10 10 10
     for(auto element:v2)
     {
         cout<<element<<endl;
     }
     cout<<endl;
     v2.pop_back();
      for(auto element:v2)
     {
         cout<<element<<endl;
     }//10 10
     cout<<endl;

     swap(v,v2);//size of array do not matter while swapping values of vector.
     for(auto element:v)
     {
         cout<<element<<endl;
     }//10 10
     cout<<endl;
      for(auto element:v2)
     {
         cout<<element<<endl;
     }// 1 2
     cout<<endl;

     vector<int>v3;
     v3.push_back(5);
     v3.push_back(4);
     v3.push_back(1);
     v3.push_back(2);
     v3.push_back(3);


     for(auto element:v3)
     {
         cout<<element<<endl;
     }//5 4 1 2 3
     cout<<endl;
     sort(v3.begin(),v3.end());
      for(auto element:v3)
     {
         cout<<element<<endl;
     }//1 2 3 4 5




    return 0;
}
