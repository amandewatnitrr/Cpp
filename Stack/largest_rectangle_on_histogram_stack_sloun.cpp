#include <bits/stdc++.h>
using namespace std;

int maxAreaHistogram(vector<int> v);

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

	cout<<maxAreaHistogram(v);

	return 0;
}

int maxAreaHistogram(vector<int> v)
{
	 stack<int> s;
 
    int max_area = 0;
    int tp; 
    int areatop;
	int i = 0;
	
    while (i < v.size())
    {

        if (s.empty() || v[s.top()] <= v[i])
            s.push(i++);

        else
        {
            tp = s.top();
            s.pop();

            areatop = v[tp] * (s.empty() ? i :
                                   i - s.top() - 1);
 
            if (max_area < areatop)
                max_area = areatop;
        }
    }

    while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        areatop = v[tp] * (s.empty() ? i :
                                i - s.top() - 1);
 
        if (max_area < areatop)
            max_area = areatop;
    }
 
    return max_area;
}
