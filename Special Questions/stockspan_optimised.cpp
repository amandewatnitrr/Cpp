#include <template.h>
vector<int> stockspan(vector<int>);
using namespace std;
int main()
    {
        vector<int> v;
        
        int n,x;
        cin>>n;

        for(int i=0;i<n;i++)
            {
                cin>>x;
                v.push_back(x);
            }

        vector<int> ans = stockspan(v);


        for(int i=0;i<n;i++)
            {
                cout<<ans[i]<<" ";
            }


        return 0;
    }

vector<int> stockspan(vector<int> prices)
{
    int days;
    stack<pair<int,int>> s;
    vector<int> ans;

    for(auto price:prices)
       {
           days = 1;
           while(!s.empty()&& (s.top().first<=price))
            {
                days = days + s.top().second;
                s.pop();
            }

            s.push({price,days});
            ans.push_back(days);
       } 

    return ans;
}
