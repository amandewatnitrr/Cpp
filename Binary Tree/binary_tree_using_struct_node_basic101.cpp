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

using namespace std;
int main()
    {
        struct node* root = new node(1);
        root->left = new node(2);
        root->right = new node(3);

        root->left->left = new node(4);
        root->left->right = new node(5);
        
        /*

                1
               / \
              /   \
             2     3
            / \
           4   5

        */
        
        return 0;
    }
