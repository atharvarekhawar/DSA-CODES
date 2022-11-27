#include <bits/stdc++.h>

using namespace std;
//print string in reverse manner through recursion.
void rev(string s)
{
    if(s.length()==0)
    {
        return;
    }
    string rest =s.substr(1);//this function is to get a string after a particular index.
    rev(rest);
    cout<<s[0];
}
int main()
{
    string s;
    cout<<" enter name : ";
    cin>>s;

    rev(s);

    return 0;
}
