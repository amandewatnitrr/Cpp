#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{	
	int n;
	cout<<"\nEnter size of array = ";
	cin>>n;
	int a[n];
	cout<<"\nEnter values into array = ";
	for(int i=0;i<n;i++){cin>>a[i];}
	cout<<endl;
	int sum;
	for(int i = 0;i<n;i++)
		{
			sum =0;
			for(int j =i;j<n;j++)
				{
					sum = sum + a[j];
					cout<<"Sum of "<<j+1<<" subarray is = "<<sum<<endl;
				}
		}
	return 0;
}
