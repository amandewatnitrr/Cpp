#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   
    int n1,n2,r,input;
    cin>>n1>>n2;
    vector<int>v[n1];
    for(int i=0;i<n1;i++)
        {
        	cin>>r;
            for(int j=0;j<r;j++)
            	{
            		cin>>input;
            		v[i].push_back(input);
				}
        } 
    int j[n2],t[n2];
    for(int i=0;i<n2;i++)
    	{
    		cin>>j[i];
    		cin>>t[i];
		}
	for(int i=0;i<n2;i++)
    	{
    		cout<<v[j[i]][t[i]]<<endl;
		}	
    return 0;
}
