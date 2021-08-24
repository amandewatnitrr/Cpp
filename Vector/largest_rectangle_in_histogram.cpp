#include <bits/stdc++.h>
using namespace std;

int maxAreaHistogram(vector<int> v, int);

int main()
{
	int n,x;
	cin>>n;

	vector<int> v;

	for(int i=0;i<n;i++)
		{
			cin>>x;
			v.push_back(x);
		}

	cout<<maxAreaHistogram(v,n);

	return 0;
}

int maxAreaHistogram(vector<int> v, int n)
{
	int maxarea = 0,minh = 0, area = 0;

	for(int i=0;i<n;i++)
		{
			minh = v[i];
			for(int j=i;j<n;j++)
				{
					minh = min(minh,v[j]);
					area = (j-i+1)*minh;
					maxarea = max(area,maxarea);
				}
		}
	
	return maxarea;
}
