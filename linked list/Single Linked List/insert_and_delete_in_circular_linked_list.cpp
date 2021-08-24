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

void makeloop(node* &head, int pos)
    {
        node* temp = head;
        int count=1;
        node* loop;

        while(temp->next!=NULL)
            {
                if(count == pos)
                    {
                        loop = temp;
                    }
                temp = temp->next;
                count++;
            }
        temp->next = loop;

    }

void insertathead(node* &head, int val)
    {
        node* n = new node(val);
        node* temp = head;
        
        if(head == NULL)
            {
                n->next = n;
                head = n;
                return;
            }

        while(temp->next != head)
            {
                temp = temp->next;
            }
        temp->next = n;
        n->next = head;
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
        
        while(temp->next!=head)
            {
                temp = temp->next;
            }
        temp->next = n;
        n->next = head;
    }

void deleteathead(node* &head)
    {
        node* temp = head;
        while(temp->next!=head)
            {
                temp = temp->next;
            }
        temp->next = head->next;
        node* todelete = head;
        head = head->next;

        delete todelete;
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

        while(count != pos-1)
            {
                temp = temp->next;
                count++;
            }
        node* todelete = temp->next;
        temp->next = temp->next->next;
        
        delete todelete;
    }


void display(node* head)
    {
        if(!head){return;}
        node* temp = head;
        do{
                cout<<temp->data<<" ";
                temp=temp->next;

            }while(temp!=head);
        cout<<endl;
    }



int main()
    {
        node* head = NULL;
        int i,j,size1;

        cin>>i>>j;
        int val;

        size1 = i;
        while(i--)
            {
                cin>>val;
                insertattail(head,val);
            }

        display(head);
        deletee(head,j);
        display(head);
        
        return 0; 
    }
