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
	int sum=0,dsum;
	cout<<"\nEnter the desired Sum you are looking for = ";
	cin>>dsum;
	for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				sum = a[i]+a[j];
				if(sum == dsum)
					{
						cout<<"\nYes, it's present a = "<<a[i]<<" and b = "<<a[j]<<endl;
						return 0;
					}
				else{sum = 0;}
			}
		}
	
	return 0;
}
