#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <string.h>
#include <ctype.h>

using namespace std;

class node
    {
        public:
        int data;
        node* next; /*The type of pointer is same as the class, cause the pointer points to the next node.*/

        node(int val)
            {
                data = val;
                next = NULL;
            }
    };

void insertattail(node* &head,int val)
    {
        node* n = new node(val);
        node* temp = head;
        
        if(head == NULL)
            {
                head = n;
                return;
            }
        
        while(temp->next != NULL)
            {
                temp = temp->next;
            }
        temp->next = n;

    }

void reverse(node* &head)
    {
        node* prev = NULL;
        node* curr = head;
        node* nxt = NULL;

        while(curr!=NULL)
            {
                nxt = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nxt;
            }
        head = prev;
         
    }

void displauy(node* head)
    {
        node* temp = head;
        if(head == NULL)
            {
                return;
            }
        
        while(temp != NULL)
            {
                cout<<temp->data<<" ";
                temp = temp->next;
            }

    }

int main()
    {
        node* head = NULL;
        int i,val;
        cin>>i;
        
        while(i--)
            {
                cin>>val;
                insertattail(head,val);
            }

        displauy(head);
        cout<<endl;
        reverse(head);
        displauy(head);

        return 0;
    }
