#include <bits/stdc++.h>
#include <string>
#include <string.h>
using namespace std;

/*
 * Rat is in a maze(2d-array) at the top left side
 * The rat can only move right and down direction or backtrack in case the path chosen is wrong.
 */

bool issafe(int, int, int, int **);
bool ratinmaze(int, int, int, int **,int **);

int main()
    {
        int n;
        cin>>n;

        int **arr= new int*[n];  /*Dynamic memory allocation of 2D-Array*/
        for(int i=0;i<n;i++)
            {
                arr[i]=new int[n];
            }

        int **sol= new int*[n];
        
        for(int i=0;i<n;i++)
            {
                sol[i]=new int[n];
                for(int j=0;j<n;j++)
                    {
                        sol[i][j]=0;
                        cin>>arr[i][j];
                    }
            }

        if(ratinmaze(0,0,n,arr,sol))
            {
                for(int i=0;i<n;i++)
                    {
                        for(int j=0;j<n;j++)
                            {
                                cout<<sol[i][j]<<" ";
                            }
                        cout<<endl;
                    }
            }


        return 0;
    }


bool issafe(int x, int y, int n, int **arr) /*This function checks if using this path we can move ahead or is it blocked.*/
    {
        if(x<n && y<n && arr[x][y]==1){return true;}
        return false;
    }

bool ratinmaze(int x, int y, int n, int **arr, int **sol)/*This function tells the path to be followed and works recursively.*/
    {
        if(x==n-1 && y==n-1){sol[x][y]=1; return true;}

        if(issafe(x,y,n,arr))
            {
                sol[x][y]=1;
                if(ratinmaze(x+1,y,n,arr,sol)){return true;}
                if(ratinmaze(x,y+1,n,arr,sol)){return true;}
                sol[x][y]=0;
                return false;
            }

        return false;
    }