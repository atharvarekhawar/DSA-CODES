#include <bits/stdc++.h>


using namespace std;
//print the alphabet that repeats the most in the given string.
int main()
{
    string s="opejouyerbcrtyuiefeofjicuo";

    int frequency[26];

    for(int i=0;i<26;i++)
    {
        frequency[i]=0;
    }

    for(int i=0;i<s.size();i++)
    {
        frequency[s[i]-'a']++;
    }

    char ans='a';
    int maxf=0;

    for(int i=0;i<26;i++)
    {
        if(frequency[i]>maxf)
        {
            maxf=frequency[i];
            ans=i+'a';
        }
    }


    cout<<"max repeatition : "<<maxf<<endl;
    cout<<"max repeated letter : "<<ans<<endl;

    return 0;
}
