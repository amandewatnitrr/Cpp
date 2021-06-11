#include <iostream>

using namespace std;
int pallindrome(char [],int);

int main()
{
	int n;
	cout<<"\nEnter the size of the array = ";
	cin>>n;
	cout<<"\nEnter the values into the array --> \n";
	char a[n];
	cin>>a;
	a[n+1]='/0';
	pallindrome(a,n);
	return 0;
}




int pallindrome(char *a,int n)
{
	if(n%2 == 0)
		{
			int s=0,e=n-1;
			while((s<n/2)&&(e>=n/2))
				{
					if(a[s]==a[e]){}
					else
						{
							cout<<"\nNot Pallindrome\n";
							return 0;
						}
					s++;
					e--;
				}
		}
	else
		{
			int s=0, e=n-1;
			while((s<n/2)&&(e>n/2))
				{
					if(a[s]==a[e]){}
					else
						{
							cout<<"\nNot Pallindrome\n";
							return 0;
						}
					s++;
					e--;
				}
		}
	cout<<"\nPallindrome\n";
	return 0;
}

