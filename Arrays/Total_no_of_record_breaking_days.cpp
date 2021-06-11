#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/*
 * The Problem stated is as follows : 
 * There's a person who is given no. of visitors  at her local theme park on N consecutive days. The number of visitors on the i-th day is Vi.
 * A day is record breaking if it satisfies both the mentioned conditions:
 * 1. The number of visitors  on the is strictly larger than the no. of visitors on each previous days.
 * 2. Either it is the last day, or the number of visitors on the day is strictly larger than the no. of visitors on the following day.
 * ! Note that 1st day can also be a record breaking day.
 * */
int main()
{	
	int n;
	cout<<"\nEnter size of array = ";
	cin>>n;
	int a[n];
	cout<<"\nEnter values into array = ";
	for(int i=0;i<n;i++){cin>>a[i];}
	cout<<endl;
	int rcb=0,max=0;
	for(int i =0;i<n;i++)
		{
			max =0;
			for(int j =0;j<i;j++)
				{
					if(max<a[j])
					{
						max=a[j];
					}
				}
			if(i==0 && a[i]>a[i+1]){rcb++;}
			//Condition starts here
			if(a[i]>max && a[i]>a[i+1] && a[i]>a[i-1]){rcb++;}
			if(a[i]>max && i == n-1){rcb++;}
		}
	cout<<"\nTotal no. of record breaking days = "<<rcb<<endl;
	return 0;
}
