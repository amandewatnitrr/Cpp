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

vector<int> stockspan(vector<int> v)
{
    vector<int> ans;
    
    ans.push_back(1);

    for(int i=1;i<v.size();i++)
        {
            ans.push_back(1);
            for(int j=i-1;(j>=0) && (v[i]>=v[j]);j--)
                {
                    ans[i]++;
                }
        }

    return ans;
}
