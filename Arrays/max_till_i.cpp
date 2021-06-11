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
	int max = a[0];
	cout<<"\nNumbers are large in following manner:- \n";
	for(int i=0;i<n;i++)
		{
			if(a[i]>=max)
				{
					max = a[i];
				}
			cout<<max<<" largest till "<<i+1<<endl;
		}
	return 0;
}
