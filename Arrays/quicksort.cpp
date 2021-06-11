#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <string.h>
#include <ctype.h>

using namespace std;

void quicksort(int [],int,int);
int partition(int [],int,int);
void swap(int [],int,int);

int main()
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }
        quicksort(arr,0,n-1);
        for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
        return 0;
    }

void swap(int arr[],int x, int y)
    {
        int temp=arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
    }

int partition(int arr[], int b,int e)
    {
        int pivot = arr[e];
        int i=b-1;
        for(int j=b;j<e;j++)
            {
                if(arr[j]<pivot)
                    {
                        i++;
                        swap(arr,i,j);
                    }
            }
        swap(arr,i+1,e);
        return i+1;
    }

void quicksort(int arr[],int b, int e)
    {
        if(b<e)
            {
                int pivot  = partition(arr,b,e);

                quicksort(arr,b,pivot-1);
                quicksort(arr,pivot+1,e);
            }
    }

