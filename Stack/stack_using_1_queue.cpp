#include <bits/stdc++.h>
using namespace std;

class stackk
	{
		queue<int> q1;

		public:

		void push(int x)
			{
				q1.push(x);
				for(int i=0;i<q1.size()-1;i++)
					{
						q1.push(q1.front());
						q1.pop();
					}
			}

		void pop()
			{
				if(q1.empty())
					{
						return;
					}
				else{q1.pop();}
			}

		int top()
			{
				if(q1.empty())	{return -1;	}
				return q1.front();
			}

		bool empty()
			{ return q1.empty();}

	};

int main()
{
	stackk s;
	int n,x;
	cin>>n;

	for(int i=0;i<n;i++)
		{
			cin>>x;
			s.push(x);
		}

	while(!s.empty())
		{
			cout<<s.top()<<" ";
			s.pop();
		}

	return 0;
}
