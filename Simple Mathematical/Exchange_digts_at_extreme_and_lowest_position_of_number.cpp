#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
	int num,digit,rev,count=0,sd,ed,n,fnum;
	rev=0;
	cout<<"\nEnter the numbers whose MSD and LSD ar to be exchanged = ";
	cin>>num;
	n=num;
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	cout<<"\nThe number contains = "<<count<<" digits";
	sd=num/pow(10,--count);
	ed=num%10;
	num = num + (ed-sd)*pow(10,count) ;
	num = num - ed + sd;
	cout<<"The Number is = "<<num;
	return 0;
}
