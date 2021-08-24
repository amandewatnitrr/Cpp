#include <iostream>
#include <string>
#include <string.h>
using namespace std;



int tiling(int,int);

 int main()
 {
	 int n,m;
     cin>>n>>m;
     cout<<tiling(n,m); 
     return 0;
 }


int tiling(int r,int c)
{
    int count[r+1];
    count[0]=0;

    for(int i=0;i<=r;i++)
        {
            if(i>c){count[i] = count[i-1]+count[i-c];}
            else if(i<c){count[i]=1;}
            else{count[i]=2;}
        }

        return count[r];

}