#include<iostream>
#include<string.h>
#define max 10
using namespace std;

int main()
{
	int a[max],s,b[max],flag,k=0;
	cout<<"\nEnter the size of the vector (less than 10) = ";
	cin>>s;
	if(s>10){cout<<"\nThe Limit of size of vector has not been";}
	cout<<"\nEnter the values in the vector = ";
	for(int i=0;i<s;i++)
		{
			cin>>a[i];
		}
	for(int i=0;i<s;i++)
		{	
			flag =0;
			for(int j=0;j<s;j++)
				{
					if(a[i]==a[j]){}
					else	
					{
						flag =1;
						break;
					}
			S	}
			if(flag==0)
				{
					b[i]=a[i];
					k++;
				}
		}
	cout<<"\nVector After eliminating the same elements is --> ";
	for(int i=0;i<k;i++)
		{
			cout<<b[i]<<" ";
		}	
}
