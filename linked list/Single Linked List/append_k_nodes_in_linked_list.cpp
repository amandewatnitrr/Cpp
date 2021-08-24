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
        node* prev;

        node(int val)
            {
                data = val;
                next = NULL;
            }
    };

void kappend(node* &head,int k,int n)
    {
        if((!head) || (k>n)){return;}
        node* temp = head;
        int count = 1;
        node* newhead;
        node* newtail;
        
        while(temp->next != NULL)
            {
                if(count == k)
                    {
                        newhead = temp->next;
                        newtail = temp;
                    }
                temp = temp->next;
                count++;
            }
        
        temp->next = head;
        head = newhead;
        newtail->next = NULL;
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
        while((temp->next->data != val) || (temp->next != NULL))
            {
                temp = temp->next;
            }
        node* todelete = temp->next;
        temp->next = temp->next->next;

        delete todelete;
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
        int i,j,n;
        cin>>i;
        n=i;
        int val;
        while(i)
            {
                cin>>val;
                insertattail(head,val);
                i--;
            }
            
        cin>>j;
        kappend(head,j,n);
        display(head);

        return 0; 
    }
