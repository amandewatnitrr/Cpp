#include <iostream>
using namespace std;
 
void mergesort(int [],int, int);
void merge(int [],int,int,int);
 
int main()
{
    int s;
    cin>>s;
    int ar[s];
    for(int i=0;i<s;i++)
        {
            cin>>ar[i];
        }

    mergesort(ar,0,s);

    for(int i=0;i<s;i++)
        {
            cout<<ar[i]<<" ";
        }

    return 0;
}

void mergesort(int arr[],int b, int e)
    {
        int mid;
        if(b<e)
            {
                mid = (b+e)/2;
                mergesort(arr,b,mid);
                mergesort(arr,mid+1,e);

                merge(arr,b,mid,e);
            }
    }

void merge(int arr[],int b,int mid,int e)
    {
        int n1 = mid+1-b;
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
        int i=0;
        int j=0;
        int k=b;
        while(i<n1 && j<n2) 
            {
                if(x[i]<y[j])
                    {
                        arr[k]=x[i];
                        k++;i++;
                    }
                else
                    {
                        arr[k]=y[j];
                        k++;j++;
                    }
            }

        while(i<n1)
            {
                arr[k]=x[i];
                k++;i++;
            }

        while(i<n2)
            {
                arr[k]=y[j];
                k++;j++;
            }

    }
