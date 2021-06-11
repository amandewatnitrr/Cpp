#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

int briankernighan_algo(int);
/*
 * Brian Kernighan Algo counts the no. of bits in binary representation of a number.
 * In order to count the no. of 0s for that we need to perform neagtion of the number and than apply the same algo again.
 * This time it will count the no. of ones in it's complement which is equal to no. of zeros in the binary format of the given no.
 * It has time complexity O(log(n)).
 * */

int main()
{
	int n;
	cout<<"\nEnter the no. = ";
	cin>>n;
	briankernighan_algo(n);
	return 0;
}

int briankernighan_algo(int n)
{
	int count=0;
	while(n)
		{
			n = n & (n-1);
			count++;
		}
	cout<<"\nTotal no. of set bits = "<<count<<endl;
	return 0;
}
