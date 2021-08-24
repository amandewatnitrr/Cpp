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

void insertattail(node* &head, int val)
    {
        /* The head is passed by reference because we have to modify our Linked List. 
         * This causes insertion from the end of linked list. 
         */

        node* n = new node(val);
        node* temp =  head;
        if(head == NULL)
            {
                head = n;
                return;
            }
        
        while(temp->next!=NULL)
            {
                temp = temp->next;
            }
        temp->next = n;
    }

void insertathead(node* &head, int val)
    {
        /* The head is passed by reference because we have to modify our Linked List. 
         * This causes insertion fromt the begining of the linked list.
         */

        node* n = new node(val);
        n->next = head;
        head = n;
    }

void deleteathead(node* &head)
    {
        node* todelete = head->next;
        head = head->next;

        delete todelete;
    }

void deletee(node* &head, int val)
    {
        if(head == NULL){return;}
        if(head->next == NULL)
            {
                deleteathead(head);
                return;
            }
        node* temp = head;
        while((temp->next->data != val) && (temp->next != NULL))
            {
                temp = temp->next;
            }
        node* todelete = temp->next;
        temp->next = temp->next->next;

        delete todelete;
    }

bool search(node* head,int key)
    {
        node* temp = head;
        while(temp!=NULL)
            {
                if(temp->data ==key){return true;}
                temp = temp->next;
            }
        return false;
        
    }

void display(node* head)
    {
        node* temp = head;
        while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp=temp->next;

            }
        cout<<endl;
    }

int main()
    {
        node* head = NULL;
        int i;
        cin>>i;
        int val;
        while(i)
            {
                i--;
                cin>>val;
                insertattail(head,val);
            }
        int j,k;
        cin>>j>>k;
        deletee(head,j);
        bool state = search(head,k);
        cout<<state<<endl;
        
        display(head);
        return 0; 
    }
