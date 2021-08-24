#include <iostream>
#include <string>
#include <string.h>
using namespace std;



int tiling(int);
/*
 * This problem uses the concept of fibonaaci series to be solved.
 */

 int main()
 {
	 int n;
     cin>>n; /* Enter the no. of columns here. The np. of rows is fixed i.e. 2 and the tile size is 2*1. */
     cout<<tiling(n); 
     return 0;
 }


int tiling(int n)
{
    if(n==0){return 0;}
    if(n==1){return 1;}

    return tiling(n-1)+tiling(n-2);
}