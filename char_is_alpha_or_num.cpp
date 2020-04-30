#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;

void check(char c);

int main()
{
	char c;
	cout<<"\nEnter a character or an alphabet = ";
	cin>>c;
	check(c);
	return 0;
}

void check(char c)
{
	if(isalnum(c))
		{
			if(isalpha(c))
				{cout<<"\nThe given input ->"<<c<<"<- is an alphabet.";}
			else if(isdigit(c))
				{cout<<"\nThe given input ->"<<c<<"<- is a digit.";}
		}
	else{cout<<"\nThe given input ->"<<c<<"<- is a special character.";}		
}
