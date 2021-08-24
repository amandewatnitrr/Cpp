#include <template.h>

vector<int> two_pointer_three_sum(vector<int>,int);
using namespace std;
int main()
    {
        vector<int> v;
        
        int n,x,dsum;
        cin>>n>>dsum;

        for(int i=0;i<n;i++)
            {
                cin>>x;
                v.push_back(x);
            }

        vector<int> ans = two_pointer_three_sum(v,dsum);


        for(int i=0;i<ans.size();i++)
            {
                cout<<ans[i]<<" ";
            }


        return 0;
    }

vector<int> two_pointer_three_sum(vector<int> v,int dsum)
{
    int sum=0;
    vector<int> ans;

    for(int i=0;i<v.size()-2;i++)
        {
            for(int j=i+1;j<v.size()-1;j++)
                {
                    for(int k=j+1;k<v.size();k++)
                        {
                            sum = v[i]+v[j]+v[k];

                            if(sum == dsum)
                                {
                                    ans.push_back(v[i]);
                                    ans.push_back(v[j]);
                                    ans.push_back(v[k]);

                                    return ans;
                                }
                        }
                }
        } 

    return ans;
}
