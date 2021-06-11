#include <iostream>
#include <string.h>
#include <ctype.h>
#include <math.h>

using namespace std;

int onescomplement(int);
int briankernighan_algo(int n);
int count0s1s(int);
/*
 * Brian Kernighan Algo counts the no. of bits in binary representation of a number.
 * In order to count the no. of 0s for that we need to perform neagtion of the number and than apply the same algo again.
 * This time it will count the no. of ones in it's complement which is equal to no. of zeros in the binary format of the given no.
 * Time Complexity is O(log(n)).
 * */

int main()
{
	int n;
	cout<<"\nEnter the no. = ";
	cin>>n;
	count0s1s(n);
	return 0;
}

int count0s1s(int n)
{
	int count1=0,count0=0;
	count1= briankernighan_algo(n);
	n = onescomplement(n);
	count0 = briankernighan_algo(n);
	cout<<"\nTotal no. of 1s = "<<count1<<"\nTotal no. of 0s = "<<count0<<endl;
	return 0;
}

int onescomplement(int n)
{
	int n_bits = floor(log2(n))+1;
	return ((1<<n_bits)-1)^n;
}

int briankernighan_algo(int n)
{
	int count=0;
	while(n)
		{
			n = n & (n-1);
			count++;
		}
	return count;
}
