#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int num,digit,rev;
	rev=0;
	cout<<"\nEnter the number to be reversed = ";
	cin>>num;
	while(num!=0)
		{
			digit = num%10;
			rev = (rev*10) + digit;
			num = num/10;
		}
	cout<<"The Reverse number is = "<<rev;
	return 0;
}
