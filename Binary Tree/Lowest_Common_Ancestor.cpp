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
int sumallnodes(node*);
void sumreplace(node*);

node* buildtree(vector<int>,vector<int>,int,int);
int search(vector<int>,int,int,int);
int countnodes(node* root);

int calcheight(node*);
int calcdiameter1(node*);
int calcdiameter2(node*,int*);

void rightview(node*);
void leftview(node*);

bool isbalanced(node* root,int*);

int lca(node*,int,int);
bool getPath(node*,int,vector<int>&);

using namespace std;
int main()
    {
        vector<int>in;
        vector<int>post;
        
        int n,x,l,n1,n2;
        cin>>n>>n1>>n2;

        for(int i=0;i<n;i++)
            {
               cin>>x;
               in.push_back(x);
            }

        for(int i=0;i<n;i++)
            {
               cin>>x;
               post.push_back(x);
            }
        int h =0;
        node* ans = buildtree(in,post,0,n-1);
        int LCA = lca(ans,n1,n2);

        if(LCA == -1)
            {
                cout<<"doesn't exsist";
            }
        else{
            cout<<LCA; 
        }

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

int countnodes(node* root)
    {
        if(root ==  NULL)
            {
                return 0;
            }
        return countnodes(root->left) + countnodes(root->right) + 1;
    }

int sumallnodes(node* root)
    {
        if(root ==  NULL)
            {
                return 0;
            }
        return sumallnodes(root->left) + sumallnodes(root->right) + root->data;
    }

int calcheight(node* root)
    {
        if(root == NULL)
            {
                return 0;
            }
        int lheight = calcheight(root->left);
        int rheight = calcheight(root->right);
        
        return max(lheight,rheight) + 1;
    }

int calcdiameter1(node* root) // calcdiameter2 is more optimised as this function has a time complexity of O(n^2).
    {

        if(root == NULL)
            {
                return 0;
            }
        
        int lheight = calcheight(root->left);
        int rheight = calcheight(root->right);

        int currd = lheight + rheight + 1;

        int ldia = calcdiameter1(root->left);
        int rdia = calcdiameter1(root->right);

        return max(currd,max(ldia,rdia));
    }
int calcdiameter2(node* root,int* h) // Optimal way to calcultate Diameter with Time Complexity O(n).
    {
        if(root == NULL)
            {
                *h = 0;
                return 0;
            }
        int lh = 0, rh =0;

        int ldia = calcdiameter2(root->left,&lh);
        int rdia = calcdiameter2(root->right,&rh);

        int currd = lh + rh + 1;
        *h = max(lh,rh) + 1;
        
        return max(currd,max(ldia,rdia));
    }

void sumreplace(node* root)
    {
        if(root==NULL)
            {
                return;
            }
        
        sumreplace(root->left);
        sumreplace(root->right);

        if(root->left != NULL)
            {
                root->data += root->left->data;
            }
        
        if(root->right != NULL)
            {
                root->data += root->right->data;
            }
    }

bool isbalanced(node* root,int* h)
    {
        if(root == NULL)
            {
                return true;
            }

        int lh=0,rh=0;
        
        if(isbalanced(root->left,&lh) == false)
            {
                return false;
            }

        if(isbalanced(root->right,&rh) == false)
            {
                return false;
            } 

        *h = max(lh,rh)+1;

        if(abs(lh-rh)<=1)
            {
                return true;
            }
        return false;
    }

void rightview(node* root)
    {
        if(root==NULL)
            {
                return;
            }
        
        queue<node*>q;
        q.push(root);

        while(!q.empty())
            {
                int n = q.size();
                for(int i=0;i<n;i++)
                    {
                        node* curr = q.front();
                        q.pop();

                        if(i==n-1)
                            {
                                cout<<curr->data<<" ";
                            }

                        if(curr->left!= NULL)
                            {
                                q.push(curr->left);
                            }
                            
                        if(curr->right!= NULL)
                            {
                                q.push(curr->right);
                            }
                    }
            }
    }
void leftview(node* root)
    {
        if(root==NULL)
            {
                return;
            }
        
        queue<node*>q;
        q.push(root);

        while(!q.empty())
            {
                int n = q.size();
                for(int i=1;i<=n;i++)
                    {
                        node* curr = q.front();
                        q.pop();

                        if(i==1)
                            {
                                cout<<curr->data<<" ";
                            }

                        if(curr->left!= NULL)
                            {
                                q.push(curr->left);
                            }
                            
                        if(curr->right!= NULL)
                            {
                                q.push(curr->right);
                            }
                    }
            }
    }

int lca(node* root,int n1,int n2)
    {
        vector<int> path1,path2;

        if(!getPath(root,n1,path1) || !getPath(root,n2,path2))
            {
                return -1;
            }
        
        int pc;
        for(pc=0;pc<path1.size() && path2.size();pc++)
            {
                if(path1[pc]!=path2[pc])
                    {
                        break;
                    }
            }

        return path1[pc-1];

    }
bool getPath(node* root,int key,vector<int> &path)
    {
        if(root==NULL)
            {
                return false;
            }
        
        path.push_back(root->data);
        if(root->data==key)
            {
                return true;
            }
        
        if((root->left && getPath(root->left,key,path)) || (root->right && getPath(root->right,key,path)))
            {
                return true;
            }

        path.pop_back();
        return false;

    }
