#include <bits/stdc++.h>
#include <iostream>
#include <math.h>

using namespace std;


int main() {


    vector<int>a{3,4,5,6,7,8};

a.erase(a.begin()+3,a.begin()+4);
int n=a.size();
for(int i=0;i<n;i++){
     cout<<a[i]<<endl;
}
    
    




  

return 0;
}