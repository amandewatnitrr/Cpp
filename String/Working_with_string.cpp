#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	string text1 = "Hello ";
	string text2 = "World";
	string text3;
	text3 = text1 + text2;
	cout<<text3<<endl;
	cout<<"\nEnter Your name --> ";
	string name;
	cin>>name;
	cout<<"\nThe Programmer's name is "<<name;
	return 0;
}
