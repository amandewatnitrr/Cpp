#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{	/*
	* The Problem is let's say we carry some amount of money and go to a shop, at shop for 1Rs. we can buy 1 choclate. 
	* For 3 wrappers of the choclate bought the person can buy another 1 choclate. So how many choclate's at maximum he can purchase.
	*/
	int m;
	cout<<"\nEnter the amount of Money you are carrying --> ";
	cin>>m;
	int c = m;
	int s,iw,dw;
	dw = c/3;
	iw = c%3;
	s = dw + iw;
	while(s>=3)
		{
			c = c + s;
			dw = s/3;
			iw = s%3;
			s = dw + iw;
		}
	cout<<"\nTotal No. of choclates = "<<c<<endl;
	return 0;
}
