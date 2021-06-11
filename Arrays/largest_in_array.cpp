#include <iostream>
#include <conio.h>

using namespace std;

int largest(int [],int);

int main()
{
	int n;
	cout<<"\nEnter the size of Array = ";
	cin>>n;
	int a[n];
	cout<<"\nEnter "<<n<<" numbers into the array --> ";
	for(int i=0;i<n;i++){cin>>a[i];}
	int large;
    large = largest(a,n);
	cout<<"\nLargest No. is "<<large;
	cout<<"\nThe Position at which the no. was found is replaced by 0, so new array is --> ";
	for(int i=0;i<n;i++){cout<<a[i]<<" ";}
	cout<<endl;
	return 0;
}

int largest(int *a,int n)
{
	int k=0,max=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>=max)
			{
				max=a[i];
				k=i;
			}
	}
	a[k]=0;
	return max;
}
