#include <bits/stdc++.h>
using namespace std;

void printKMax(vector<int> v, int n, int k)
{
   
    std::deque<int> dq(k);
 
    int i;
    for (i = 0; i < k; ++i)
    {
     

        while ((!dq.empty()) && v[i] >= v[dq.back()])
           {
			   dq.pop_back();
		   }
 
        dq.push_back(i);
    }

    for (; i < n; ++i)
    {

        cout << v[dq.front()] << " ";
        while ((!dq.empty()) && dq.front() <= i - k)
           {
				dq.pop_front();
		   }
            

        while ((!dq.empty()) && v[i] >= v[dq.back()])
            {
				dq.pop_back();
			}

        dq.push_back(i);
    }
 

    cout << v[dq.front()];
}
 
int main()
{
	int n,k,x;
    cin>>n>>k;
	vector<int> v;

	for(int i=0;i<n;i++)
		{
			cin>>x;
			v.push_back(x);
		}

    printKMax(v, n, k);
    return 0;
}
