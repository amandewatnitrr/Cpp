#include <bits/stdc++.h>
#include <string>
#include <string.h>
#define MAX 50
using namespace std;

/*
 * Rat is in a maze(2d-array) at the top left side
 * The rat can only move right and down direction or backtrack in case the path chosen is wrong.
 */

int countoutmaze(int **,int , int);


int main()
    {
        int r,c;
        cin>>r>>c;

        int **arr = new int *[r];
        for(int i=0;i<r;i++)
            {
            	arr[i]=new int [c];
                for(int j=0;j<c;j++)
                    {
                        cin>>arr[i][j];
                    }
            }
        
        cout<<countoutmaze(arr,r,c);

        return 0;
    }


int countoutmaze(int **arr,int r,int c)
    {
        if(arr[0][0]== -1){return 0;} /* First cell being blocked, there's no way out. */

        for(int i=0;i<r;i++)
            {
                if(arr[i][0]==0)
                    {arr[i][0]=1;}
                    else{break;}
            }
        
        for(int j=1;j<c;j++)
            {
                if(arr[0][j]==0)
                    {arr[0][j]=1;}
                    else{break;}
            }

        for(int i=1;i<r;i++)
            {
                for(int j=1;j<c;j++)
                    {
                        if(arr[i][j]==-1){continue;}
                        if(arr[i-1][j]>0){arr[i][j]=arr[i][j]+arr[i-1][j];}
                        if(arr[i][j-1]>0){arr[i][j]=arr[i][j]+arr[i][j-1];}
                    }
            }

        if(arr[r-1][c-1]){return arr[r-1][c-1];}
        else{return 0;}
        

    }
