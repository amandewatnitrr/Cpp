#include<iostream>
#include<stack>

using namespace std;
void reverse(stack<int> &st);
void insertatbottom(stack<int> &st, int);


int main()
    {
        int n,x;
        stack<int>st;
        cin>>n;
        for(int i=0; i<n; i++)
            {
                cin>>x;
                st.push(x);
            }

        reverse(st);

        while(!st.empty())
            {
                cout<<st.top()<<" ";
                st.pop();
            }

        return 0;
    }

void reverse(stack<int> &st)
    {
        if(st.empty())
            {return;}
        
        int ele = st.top();
        st.pop();
        reverse(st);
        insertatbottom(st,ele);
    }

void insertatbottom(stack<int> &st, int ele)
    {
        if(st.empty())
            {
                st.push(ele);
                return;
            }

        int topele=st.top();
        st.pop();
        insertatbottom(st,ele);

        st.push(topele);
    }
