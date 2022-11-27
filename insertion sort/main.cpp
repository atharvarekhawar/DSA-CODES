#include "iostream"
#include <vector>
using namespace std;


int main(){

  vector<int>nums{1,10,0,1,0,5};
  int index=0;
        
        for(int j=0;j<nums.size();j++){
            if(nums[j]==0){
                index=j;
                 for(int k=j;k<nums.size();k++){
                  if(nums[k]!=0){
                      swap(nums[index],nums[k]);
                      index=k;
                  }
              }
            }
        }

        for(int i=0;i<nums.size();i++){
          cout<<nums[i]<<" ";
        }

        return 0;
      }
