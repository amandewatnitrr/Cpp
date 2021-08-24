#include<template.h>
int longest_unique_substr(string);
using namespace std;
int main()
    {
        string s;
        
        getline(cin,s);

        int ans = longest_unique_substr(s);

        cout<<ans;

        return 0;
    }

int longest_unique_substr(string s)
{

    int ans=0;
    int start =-1;
    vector<int> dict(256,-1);

    for(int i=0;i<s.length();i++)
        {
            if(dict[s[i]]>start)
                {
                    start = dict[s[i]];
                }
            dict[s[i]]=i;
            ans = max(ans,i-start);
        }
    
    return ans;

}
