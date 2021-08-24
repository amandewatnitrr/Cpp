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
    int sum=0,b,l;
    vector<int> ans;

    sort(v.begin(),v.end());
    
    for(int i=0;i<v.size();i++)
        {
            b = i+1;
            l=v.size()-1;
            while(b<l)
                {
                    sum = v[b]+v[l];

                    if(dsum - v[i]== sum)
                    {
                        ans.push_back(v[i]);
                        ans.push_back(v[b]);
                        ans.push_back(v[l]);

                        return ans;
                    }

                    if(sum < dsum - v[i])
                        {
                            b++;
                        }

                    else
                        {
                            l--;
                        }

                }
        } 

    return ans;
}
