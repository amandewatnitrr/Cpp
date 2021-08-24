#include <iostream>
#include <string>
#include <string.h>
using namespace std;

/*
 * Friends Pairing Problem on Geek For Geeks .
 * Find the no. of ways in which friends can remain in pair or single for a party.
 */

int pairfriend(int);

 int main()
 {
	 int n;
     cin>>n;
     cout<<pairfriend(n); 
     return 0;
 }


int pairfriend(int n)
    {
        double a=1,b=2,c=0;
        if(n<=2){return n;}
        for(double i=3;i<=n;i++)
            {
                c = b+(i-1)*a;
                a=b;
                b=c;
            }
        return c;
    }

/* This method doesn't work well, provided the reason that the space complexity is O(n), and hence is probable that the program fails to run for large values.


int pairfriend(int n)
{
    
    int p[n+1];
    
    for(int i=0;i<=n;i++)
        {
            if(i<=2){p[i]=i;}

            else{ p[i]=p[i-1]+(i-1)*p[i-2];   Similar to Fibonacci Series }
        }
    
    return p[n];

}

*/