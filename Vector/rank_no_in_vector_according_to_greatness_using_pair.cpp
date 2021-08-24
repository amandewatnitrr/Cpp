#include <bits/stdc++.h>
#include <string>
#include <ctype.h>
#include <algorithm>
#include <math.h>
#include <utility>

using namespace std;
bool myCompare(pair<int,int> p1, pair<int,int>p2)
	{
		return p1.first < p2.first;
	}

 int main()
 {
	int n;
	cin>>n;
	 
	int v[n];
	vector< pair<int,int> > p;
	
	for(int i=0;i<n;i++)
		{
		 	cin>>v[i];
		 	p.push_back(make_pair(v[i],i));
		}

	sort(p.begin(),p.end(),myCompare);

	for(int i=0;i<p.size();i++)
		{
			v[p[i].second]=i;
			cout<<v[i]<<" ";
		}

		
     return 0;
 }
