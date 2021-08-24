#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
void power(int,int,int &);
int main()
{
	int n,p,np;
	cout<<"\nEnter the number --> ";
	cin>>n;
	cout<<"\n Enter the power upto which you want to raise it --> ";
	cin>>p;
	power(n,p,np);
	cout<<"\nThe "<<p<<" power of "<<n<<" is "<<np;
	return 0;
}

void power(int n,int p,int &np)
{
	np = pow(n,p);
}
