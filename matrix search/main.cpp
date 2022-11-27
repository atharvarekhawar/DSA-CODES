#include <bits/stdc++.h>

using namespace std;
//given that the rows and coloumns of matrix are sorted.
int32_t main()
{
    int n,m;
    cin>>n>>m;
    int target ;
    cin>>target;
    int mat[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    int r=0,c=m-1;//we are starting from top right corner element.
    bool found=false;


    while(r<n && c>=0)
    {
        if(mat[r][c]==target)
        {
            found=true;
        }
        if(mat[r][c]>target)//if target is less than current element then we move in left side,as row and coloumn are sorted.
        {
            c--;
        }
        if(mat[r][c]<target)//if target is more than current element then we move downside ,as row and coloumn are sorted.
        {
            r++;
        }
    }

    if(found==true)
    {
        cout<<"ELEMENT FOUND"<<endl;
    }
    else
        cout<<"ELEMENT NOT FOUND"<<endl;


     return 0;
}
