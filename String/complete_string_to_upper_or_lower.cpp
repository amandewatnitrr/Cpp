#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

int main()
{
	string str;
	cout<<"\nEnter the string --> ";
	getline(cin,str);
	string capital(str);
	string small(str);
	for(int i=0;i<str.length();i++)
		{
			small[i] = tolower(small[i]);
			capital[i] = toupper(capital[i]);
		}
	cout<<"\n"<<small<<"\n";
	cout<<"\n"<<capital<<"\n";
	return 0;
}

