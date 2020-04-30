#include<iostream>
using namespace std;
int main()
{
	int n,a,b,d[10000];
	cin>>n;
	for(int i=0;i<n;i++)
	   {
		   cin>>a;
		   cin>>b;
		   d[i]=a+b;
	   }
    cout<<"\n"<<n<<"\n";
	for(int i=0;i<n;i++)
   	   {
   		   cout<<d[i]<<"\n";
   	   }
   	return 0;
}
