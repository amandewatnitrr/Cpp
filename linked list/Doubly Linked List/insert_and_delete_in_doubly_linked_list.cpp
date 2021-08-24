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
                prev = NULL;
            }
    };

void insertathead(node* &head, int val)
    {
        node* n = new node(val);
        n->next = head;
        if(head != NULL)
            {
                head->prev = n;
                return;
            }
        head = n;
    }

void insertattail(node* &head, int val)
    {
        /* The head is passed by reference because we have to modify our Linked List. 
         * This causes insertion from the end of doubly linked list. 
         */
        if(head == NULL)
            {
                insertathead(head,val);
                return;
            }

        node* n = new node(val);
        node* temp =  head;
        
        while(temp->next!=NULL)
            {
                temp = temp->next;
            }
        temp->next = n;
        n->prev = temp;
    }

void deleteathead(node* &head)
    {
        node* todelete = head;
        head = head->next;
        head->prev = NULL;
        delete head;
    }

void deletee(node* &head, int pos)
    {
        if(!head){return;}
        if(pos==1)
            {
                deleteathead(head);
                return;
            }
        node* temp = head;
        int count =1;
        while((count != pos) && (temp != NULL))
            {
                temp = temp->next;
                count++;
            }
        
        temp->prev->next = temp->next;
        if(temp->next != NULL)
            {
                temp->next->prev = temp->prev;
            }
        delete temp;
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
        int i,j;
        cin>>i>>j;
        int val;
        while(i--)
            {
                cin>>val;
                insertattail(head,val);
            }
        deletee(head,j);
        display(head);

        return 0; 
    }
