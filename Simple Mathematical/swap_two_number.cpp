#include<iostream>
#include<conio.h>
void swap(int, int);
using namespace std;

int a,b,t;

int main()
{
	cout<<"Swapping 2 no. :)";
	cout<<"\nEnter value of A = ";
	cin>>a;
	cout<<"\nEnter value of B = ";
	cin>>b;
	swap(a,b);
	return 0;
}
void swap(int a, int b)
{
	t=a;
	a=b;
	b=t;
	cout<<"\nThe Value of A is --> "<<a<<" and The Value of B is --> "<<b;
}
