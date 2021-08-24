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

node* reverse(node* &head, int k)
    {
        if(!head){return NULL;}
        node* prev = NULL;
        node* curr = head;
        node* nxt = NULL;
        int count = 0;

        while(curr!=NULL && count<k)
            {
                nxt = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nxt;
                count++;
            }

        if(nxt != NULL){head->next = reverse(nxt,k);}
        return prev;
         
    }

void display(node* head)
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
        int i,val,k;
        cin>>i>>k;
        
        while(i--)
            {
                cin>>val;
                insertattail(head,val);
            }

        display(head);
        cout<<endl;
        head = reverse(head,k);
        display(head);

        return 0;
    }
