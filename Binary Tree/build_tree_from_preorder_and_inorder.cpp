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
node* buildtree(vector<int>,vector<int>,int,int);
int search(vector<int>,int,int,int);

using namespace std;
int main()
    {
        vector<int>in;
        vector<int>pre;
        
        int n,x;
        cin>>n;

        for(int i=0;i<n;i++)
            {
               cin>>x;
               in.push_back(x);
            }

        for(int i=0;i<n;i++)
            {
               cin>>x;
               pre.push_back(x);
            }

        node* ans = buildtree(in,pre,0,n-1);
        inorder(ans);

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

node* buildtree(vector<int> in,vector<int> pre,int s,int e)
    {
        static int idx=0;
        if(s>e)
            {
                return NULL;
            }
        int curr=pre[idx];

        idx++;
        node* n = new node(curr);

        if(s == e)
            {
                return n;
            }

        int pos = search(in,s,e,curr);
        n->left = buildtree(in,pre,s,pos-1);
        n->right = buildtree(in,pre,pos+1,e);

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
