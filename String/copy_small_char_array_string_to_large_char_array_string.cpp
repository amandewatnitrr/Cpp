#include<iostream>
#include<string.h>

using namespace std;
int main()
{
	cout<<"\nEnter string A with less than 30 char --> ";
	char a[30];
	cin.getline(a,30);
	cout<<"\nEnter string B with less than 30 char --> ";
	char b[30];
	cin.getline(b,30);
	if(strlen(a)>strlen(b))
		{
			cout<<"\n\nString B has been copied to string A. ";
			strcpy(a,b);
			cout.write(a,strlen(a));
		}
	else if(strlen(b)>strlen(a))
		{
			cout<<"\n\nString A has been copied to string B. ";
			strcpy(b,a);
			cout.write(b,strlen(b));
		}
	else
		{
			cout<<"\n\nString Length for both remain same. ";
			cout<<"\nString A --> ";
			cout.write(a,strlen(a));
			cout<<"\nString B --> ";
			cout.write(b,strlen(b));
		}		
	return 0;
}
