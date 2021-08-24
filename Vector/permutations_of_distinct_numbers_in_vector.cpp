#include <bits/stdc++.h>
#include <string>
#include <ctype.h>
#include <algorithm>
#include <math.h>
#include <utility>

using namespace std;
void permute(vector<int> &,int pos,vector< vector<int> > ans);


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
	
	 permute(v,0,ans);

	 return 0;
 }

 void permute(vector<int> &v,int pos,vector< vector<int> > ans)
	{
        if(pos==v.size())
            {
                ans.push_back(v);
                for(int i=0;i<v.size();i++)
                    {
                        cout<<v[i]<<" ";
                    }
                cout<<endl;
                return;
            }
        for(int i=pos;i<v.size();i++)
            {
                swap(v[i],v[pos]);
                permute(v,pos+1,ans);
                swap(v[i],v[pos]);
            }
        return;
	}
