#include<template.h>

struct node{
    int data;
    node* left;
    node* right;

    node(int val)
        {
            data = val;
            left = NULL;
            right = NULL;
        }
};

void preorder(node*);
void inorder(node*);
void postorder(node*);
void levelorder(node*);
int sumatk(node*,int);
node* buildtree(vector<int>,vector<int>,int,int);
int search(vector<int>,int,int,int);

using namespace std;
int main()
    {
        vector<int>in;
        vector<int>post;
        
        int n,x,l;
        cin>>n>>l;

        for(int i=0;i<n;i++)
            {
               cin>>x;
               in.push_back(x);
            }

        for(int i=0;i<n;i++)
            {
               cin>>x;
              post .push_back(x);
            }

        node* ans = buildtree(in,post,0,n-1);
        int sum = 0;
        sum = sumatk(ans,l);
        cout<<sum;

        return 0;

    }

void preorder(node* root)
    {
        if(root==NULL)
            {
                return;
            }

        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
void inorder(node* root)
    {
        if(root==NULL)
            {
                return;
            }

        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
void postorder(node* root)
    {
        if(root==NULL)
            {
                return;
            }

        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
void levelorder(node* root)
    {
        if(root == NULL)
            {
                return;
            }
        queue<node*> q;
        q.push(root);
        q.push(NULL);

        while(!q.empty())
            {
                node* n =q.front();
                q.pop();

                if(n!=NULL)
                    {
                        cout<<n->data<<" ";
                        if(n->left)
                            {
                                q.push(n->left);
                            }
                        if(n->right)
                            {
                                q.push(n->right);
                            }
                    }
                
                else if(!q.empty())
                    {
                        q.push(NULL);
                    }
            }
    }


int sumatk(node* root,int level)
    {
        if(root == NULL)
            {
                return -1;
            }
        queue<node*> q;
        q.push(root);
        q.push(NULL);
        int sum=0,k=0;

        while(!q.empty())
            {
                node* n =q.front();
                q.pop();

                if(n!=NULL)
                    {
                        if(k == level)
                            {
                                sum+=n->data;
                            }

                        if(n->left)
                            {
                                q.push(n->left);
                            }

                        if(n->right)
                            {
                                q.push(n->right);
                            }
                    }
                
                else if(!q.empty())
                    {
                        q.push(NULL);
                        k++;
                    }
            }
        return sum;
    }


node* buildtree(vector<int> in,vector<int> post,int s,int e)
    {
        static int idx=post.size()-1;
        if(s>e)
            {
                return NULL;
            }
        int curr=post[idx];

        idx--;
        node* n = new node(curr);

        if(s == e)
            {
                return n;
            }

        int pos = search(in,s,e,curr);
        n->right = buildtree(in,post,pos+1,e);
        n->left = buildtree(in,post,s,pos-1);

        return n;

    }
int search(vector<int> inorder,int s,int e,int curr)
    {
        for(int i=s;i<=e;i++)
            {
                if(inorder[i]==curr)
                    {
                        return i;
                    }
            }
        return -1;
    }
