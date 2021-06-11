#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int countpath(int,int);
/*
 * 
 */

 int main()
 {
	 int s,e;
     cin>>s>>e;
     cout<<countpath(s,e);
     return 0;
 }


int countpath(int s,int e)
{
    if(s==e){return 1;}
    if(s>e){return 0;}
    int count=0;
    for(int i=1;i<=6;i++)
        {
            count+=countpath(s+i,e);
        }
    return count;
}