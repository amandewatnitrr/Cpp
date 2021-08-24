#include <bits/stdc++.h> 
#include <string.h>
#include <math.h>

/* 
 * Replace pi in string with 3.14 using recursion
 * */

using namespace std; 
string s;
void replace(auto );

int main()
{
	cout<<"\nEnter the string --> ";
	getline(cin,s);
	replace(s.begin());
	cout<<endl;
	return 0;
}

void replace(auto n)
{
	if(n==s.end()){return;}
	if((*n=='p') && (*(n+1)=='i'))
		{
			cout<<3.14;
			++n;
		}
	else{cout<<*n;}
	replace(n+1);
}
