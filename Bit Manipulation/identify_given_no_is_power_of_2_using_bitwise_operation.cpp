#include <iostream>
#include <string.h>
#include <ctype.h>
#include <math.h>

using namespace std;

void powerof2(int);

int main()
{
	cout<<"\nEnter the number you want to check if it's power of 2 = ";
	int n;
	cin>>n;
	powerof2(n);
	cout<<endl;
	return 0;
}

void powerof2(int n)
{
	if((n & (n-1))!= 0)
		{cout<<"\nNo, the given number is not power of 2.";}
	else
		{cout<<"\nThe given number is power of 2.";}
}


