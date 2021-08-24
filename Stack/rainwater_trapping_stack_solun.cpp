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

int harvestedwater(vector<int> h)
{
    stack<int> st;
    int poph,diff,minh,ans=0;

    for(int i=0;i<h.size();i++)
        {
            while(!st.empty()&&h[st.top()]<h[i])
                {
                    poph = h[st.top()];
                    st.pop();

                    if(st.empty())
                        {
                            break;
                        }

                    diff = i - st.top() -1;
                    minh = min(h[i],h[st.top()]) - poph;

                    ans += diff*minh;
                }
            st.push(i);
        }
    return ans;
}
