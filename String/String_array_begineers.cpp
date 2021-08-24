#include<iostream>
#include<conio.h>
#define max 3
using namespace std;

int main()
{
	string name[3];
	cout<<"\nEnter your name --> ";
	for(int i=0;i<max;i++)
		{
			cin>>name[i];
		}
	cout<<"\nThe Programmers name is --> "	;
	for(int i=0;i<max;i++)
		{
			cout<<name[i];
		}	
	return 0;
}
