#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void pytha_triplet(int,int, int);

int main()
{
	int x,y,z;
	cout<<"\nEnter value of x, y and z = ";
	cin>>x>>y>>z;
	pytha_triplet(x,y,z);
	return 0;
}

void pytha_triplet(int a,int b, int c)
{ 
	int k=0;
	if(a>b && a>c)
		{
			if(pow(a,2)==pow(b,2) + pow(c,2))
				{
					k=0;
					cout<<"\nIt's a pythagorian Triplet\n";
				}
			else
				{
					cout<<"\nNot a Pythagorian Triplet\n";
					k=1;
				}
		}
	else
		{
			cout<<"\nNot a Pythagorian Triplet\n";
			k=1;
		}
}
