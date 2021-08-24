#include<iostream>
#include<conio.h>
void maxdigit(int num);
using namespace std;
int max=0,num,m=0;
int main()
{
	cout<<"\nEnter any number --> ";
	cin>>num;
	maxdigit(num);
	cout<<"\nLargest digit in given number is = "<<m;
	return 0;
}

void maxdigit(int num)
{
	if(num)
		{
			if((num%10)>m)
				{
					m = num%10;
				}
			maxdigit(num/10);
		}
}

