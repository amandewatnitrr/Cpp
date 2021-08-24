#include<bits/stdc++.h>
using namespace std;

bool balanced(string s);

int main()
    {
        string s;
        cin>>s;

        if(balanced(s))
            {
                cout<<"balanced";
            }
        else{cout<<"unbalanced";}

        return 0;
    }

bool balanced(string s)
    {
        stack<char> st;
        
        for(int i=0;i<s.length();i++)
            {
                if(s[i]=='(' || s[i]=='{' || s[i]=='[' )
                    {
                        st.push(s[i]);
                        continue;
                    }

                if(st.empty()){return false;}

                else if(s[i]==')')
                    {
                        if(st.top()=='('){st.pop();}
                        else{return false;}
                    }
                else if(s[i]==']')
                    {
                        if(st.top()=='['){st.pop();}
                        else{return false;}
                    }
                else if(s[i]=='}')
                    {
                        if(st.top()=='{'){st.pop();}
                        else{return false;}
                    }
            }

        if(!st.empty())
            {
                return false;
            }

        return true;
    }
