#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

int main()
{
	string str;
	cout<<"\nEnter the numeric string --> ";
	getline(cin,str);
	int n = stoi(str);
	int l = str.length();
	cout<<"\nThe extracted no. is "<<n<<" with "<<l<<" length.";
	int m[l];
	cout<<endl;
	for(int i=0;i<l;i++)
		{
			m[i]=n%10;
			n=n/10;
		}
	int t;
	for(int i=0;i<l;i++)
		{
			for(int j=0;j<l-1-i;j++)
				{
					if(m[j]>m[j+1])
						{
							t = m[j];
							m[j] = m[j+1];
							m[j+1]=t;
						}
					}
		}
	/*The above thing could also have been done using 
	 * sor(str.begin(),str.end(),str.begin(),greater<int>());
	 * */
	cout<<"\nLargest no. that can be formed is = ";
	for(int i =l-1;i>=0;i--)
		{
			cout<<m[i];
		}
	
	return 0;
}

