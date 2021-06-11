#include<iostream>
using namespace std;
 int main()
 {
 	int n;
 	cout<<"Lower Left triangle --> ";
 	cin>>n;
 	cout<<"\n";
 	for(int i=0;i<n;i++)
 		{
 			for(int j=0;j<=i;j++)
 				{
 					cout<<"* ";
				 }
				 cout<<"\n";
		 }

	cout<<"Lower Right triangle --> ";
 	cin>>n;
 	cout<<"\n";
 	for(int i=1;i<=n;i++)
 		{
 			for(int j=n;j>i;j--)
 				{
 					cout<<" ";
				 }
			for(int j=1;j<=i;j++)
				{
					cout<<"*";
				}
				 cout<<"\n";
		 }

	cout<<"Central triangle --> ";
 	cin>>n;
 	cout<<"\n";
 	for(int i=1;i<=n;i++)
 		{
 			for(int j=n;j>i;j--)
 				{
 					cout<<" ";
				 }
			for(int j=1;j<=i;j++)
				{
					cout<<" *";
				}
				 cout<<"\n";
		 }

	int l,b;
	cout<<"\nEnter Dimensions of rectangle l*b as l b--> ";
	cin>>l>>b;
	for(int i=0;i<l;i++)
		{
			for(int j=0;j<b;j++)
				{
					cout<<"* ";
				}
				cout<<"\n";
		}

	cout<<"\nEnter Dimensions of Hollow rectangle l*b as l b--> ";
	cin>>l>>b;
	for(int i=0;i<l;i++)
		{
			for(int j=0;j<b;j++)
				{
					if(i==0 || j==0 || i==l-1 || j==b-1 )
						{
							cout<<"*";
						}
					else
						{
							cout<<" ";
						}
				}
				cout<<"\n";
		}

	cout<<"Upper Right triangle --> ";
 	cin>>n;
 	cout<<"\n";
 	for(int i=n;i>0;i--)
 		{
 			for(int j=i;j>0;j--)
 				{
 					cout<<"* ";
				 }
				 cout<<"\n";
		}

	cout<<"Floyd triangle --> ";
 	cin>>n;
 	int c=1;
 	cout<<"\n";
 	for(int i=0;i<n;i++)
 		{
 			for(int j=0;j<=i;j++)
 				{
 					cout<<c++<<" ";
				 }
				 cout<<"\n";
		}

	cout<<"\nButterfly Pattern = ";
	cin>>n;
	for(int i=1;i<=n;i++)
		{
			for(int j=0;j<i;j++)
				{
					cout<<"*";
				}
			for(int j=0;j< 2*(n-i);j++)
			{
				cout<<" ";
			}
			for(int j=0;j<i;j++)
				{
					cout<<"*";
				}
			cout<<endl;
		}
	for(int i=n;i>0;i--)
		{
			for(int j=i;j>0;j--)
				{
					cout<<"*";
				}
			for(int j=2*(n-i);j>0;j--)
				{
					cout<<" ";
				}
			for(int j=i;j>0;j--)
				{
					cout<<"*";
				}
			cout<<endl;
		}
	cout<<endl;
 	return 0;
 }
