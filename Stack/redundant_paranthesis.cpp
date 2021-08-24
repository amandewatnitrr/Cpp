#include <bits/stdc++.h>
using namespace std;

bool redundant(string s);

int main()
{
	string str;
    getline(cin,str);

    cout<<redundant(str);
	return 0;
}

bool redundant(string s)
{
    stack<int> st;
    
    for(int i=0;i<s.length();i++)
        {
            if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
                {
                    st.push(s[i]);
                }
            
            else if(s[i]=='(')
                {
                    st.push(s[i]);
                }

            else if(s[i]==')')
                {
                    if(st.top()=='(')
                        {
                            return true;
                        }
                    
                    while(st.top()=='+' || st.top()=='-' || st.top()=='*' || st.top()=='/')
                        {
                            st.pop();
                        }

                    st.pop();
                }
        }
    return false;
}
