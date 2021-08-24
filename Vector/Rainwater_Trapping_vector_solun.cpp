#include <bits/stdc++.h>
using namespace std;

int harvestedwater(vector<int> v);

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

	cout<<harvestedwater(v);

	return 0;
}

int harvestedwater(vector<int> v)
{
    int maxx,save = 0;
	vector<int> right;
    vector<int> left;

    maxx = v[0];
    for(int i = 0; i <v.size(); i++)
        {
            left.push_back(max(maxx,v[i]));
            maxx=max(maxx,v[i]);
        }

    maxx = v[v.size()-1];
    for(int i = 0; i <v.size(); i++)
        {
            right.push_back(max(maxx,v[v.size()-i-1]));
            maxx=max(maxx,v[v.size()-i-1]);
        }

    reverse(right.begin(),right.end());

    for(int i=0;i<v.size();i++)
        {
            save = save + min(left[i],right[i]) - v[i];
        }

    return save;
}
