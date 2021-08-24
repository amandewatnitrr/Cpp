#include<template.h>
int max_consecutive_one(vector<int>,int);
using namespace std;
int main()
    {
        vector<int> v;
        
        int n,x,k,ans;
        cin>>n>>k;

        for(int i=0;i<n;i++)
            {
                cin>>x;
                v.push_back(x);
            }

        ans = max_consecutive_one(v,k);

        cout<<ans;

        return 0;
    }

int max_consecutive_one(vector<int> v,int k)
{

    int zeros = 0,i=0,ans=0;
    for(int j=0;j<v.size();j++)
        {
            if(v[j]==0)
                {
                    zeros++;
                }
            while(zeros>k)
                {
                    if(v[i]==0)
                        {
                            zeros--;
                        }
                    i++;
                }
           ans= max(ans,j-i+1);
        }
    return ans;

}
