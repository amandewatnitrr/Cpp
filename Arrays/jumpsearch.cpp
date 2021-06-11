#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <string.h>
#include <ctype.h>

using namespace std;

int jumpsearch(int [],int,int);

int main()
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }
        int x;
        cin>>x;
        int s = jumpsearch(arr,n,x);
        if(s<=0)
            {
                cout<<"Element not found";
                return 0;
            }
        cout<<"Element found at "<<s+1;
        return 0;
    }

int jumpsearch(int arr[],int n,int x)
    {
        int step = sqrt(n);

        int prev =0;
        while(arr[min(step,n)-1]<x)
            {
                prev = step;
                step += sqrt(n);
                if(prev>=n)
                    {
                        return -1;
                    }
            }
        
        while(arr[prev]<x)
            {
                prev++;
                if(prev == min(step,n))
                    {
                        return -1;
                    }
            }
        
        if(arr[prev]==x)
            {
                return prev;
            }
        
        return -1;

    }

