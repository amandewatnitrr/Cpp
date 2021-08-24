#include<iostream>
#include<string>
using namespace std;

void permutate(string,string);

int main()
{
	string s;
	getline(cin,s);
	permutate(s,"");
	return 0;
}

void permutate(string s,string ans)
{
	if(s.length()==0){cout<<ans<<endl;return ;}
	
	for(int i=0;i<s.length();i++)
		{
			char ch = s[i];
			string ros = s.substr(0,i)+s.substr(i+1);
			
			permutate(ros,ans+ch);
		}
}
