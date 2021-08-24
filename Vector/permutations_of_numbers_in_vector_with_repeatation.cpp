#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <ctype.h>
#include <algorithm>
#include <math.h>
#include <utility>

using namespace std;
void permute(vector<int> ,int pos,vector< vector<int> > &ans);
vector < vector<int> >helper(vector<int>);


 int main()
 {
	 int n;
	 cin>>n;

	 vector<int> v(n);
	 for(int i=0;i<v.size();i++)
	 	{
			 cin>>v[i];
		}
    
     vector< vector<int> > ans;
	
	 ans = helper(v);
     for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<ans[i].size();j++)
                {
                    cout<<ans[i][j]<<" ";
                }
            cout<<endl;
        }

	 return 0;
 }

 void permute(vector<int> a,int pos,vector< vector<int> > &ans)
	{
        if(pos==a.size())
            {
                ans.push_back(a);
                return;
            }
        for(int i=pos;i<a.size();i++)
            {
                if(i!=pos && (a[i] == a[pos])){continue;}
                swap(a[i],a[pos]);
                permute(a,pos+1,ans);
            }
        return;
	}

vector < vector<int> >helper(vector<int> a)
    {
        sort(a.begin(),a.end());
        vector<vector<int>> ans;
        permute(a,0,ans);
        return ans;
    }