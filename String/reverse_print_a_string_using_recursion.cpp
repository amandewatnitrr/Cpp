#include <bits/stdc++.h> 
#include <string.h>
#include <math.h>

/* Reverse a string using Recursion.
 * */

using namespace std; 
void reverse(auto );
string s;

int  main()
{
	cout<<"\nEnter the sring --> ";
	getline(cin,s);
	cout<<"\nThe reversed string is as follows --> ";
	reverse(s.rbegin());
	cout<<endl;
	return 0;
}

void reverse(auto n)
{
	if(n==s.rend())
		{
			cout<<*n;
			return;
		}
	cout<<*n;
	reverse(++n);
}


