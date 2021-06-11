#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <string.h>
#include <ctype.h>

using namespace std;

long long merge(int [],int,int,int);
long long mergesort(int [],int,int);

int main()
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }
        cout<<mergesort(arr,0,n-1);
        return 0;
    }

long long mergesort(int arr[],int b,int e)
    {
        
        long long inv = 0;
        if(b<e)
            {
                int mid = (b+e)/2;
                inv +=mergesort(arr,b,mid);
                inv +=mergesort(arr,mid+1,e);
                inv +=merge(arr,b,mid,e);
            }
        return inv;
    }

long long merge(int arr[],int b,int mid,int e)
    {
        long long inv = 0;
        int n1 = mid - b + 1;
        int n2 = e - mid;

        int x[n1];
        int y[n2];

        for(int i=0;i<n1;i++)
            {
                x[i]=arr[b+i];
            }

        for(int i=0;i<n2;i++)
            {
                y[i]=arr[mid+1+i];
            }

        int i=0,j=0,k=b;
        while(i<n1 && j<n2)
            {
                if(x[i]<=y[j])
                    {
                        arr[k]=x[i];
                        k++; i++;
                    }

                else
                    {
                        arr[k]=y[j];
                        inv += n1-i; /*a[i]>b[j] , cause if a[i] is greater, than a[i+1] will be greater.*/
                        k++; j++;
                    }
            }

        while(i<n1)
            {
                arr[k]=x[i];
                k++;i++;
            }

        while(j<n2)
            {
                arr[k]=y[j];
                k++;j++;
            }

        return inv;
        
    }
