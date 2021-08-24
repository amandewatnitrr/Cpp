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

node* mergesortedll(node* head1,node* head2)
    {
        node* ptr1 = head1;
        node* ptr2 = head2;
        node* dummynode = new node(-1);
        node* ptr3 = dummynode;

        while((ptr1 !=NULL) && (ptr2!=NULL))
            {
                if(ptr1->data < ptr2->data)
                    {
                        ptr3->next = ptr1;
                        ptr1 = ptr1->next;
                    }
                else
                    {
                        ptr3->next = ptr2;
                        ptr2 = ptr2->next;
                    }
                ptr3 = ptr3->next;
            }
        
        while(ptr1!=NULL)
            {
                ptr3->next = ptr1;
                ptr1 = ptr1->next;
                ptr3 = ptr3->next;
            }

        while(ptr2!=NULL)
            {
                ptr3->next = ptr2;
                ptr2 = ptr2->next;
                ptr3 = ptr3->next;
            }
        
        return dummynode->next;

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
        node* head1 = NULL;
        node* head2 = NULL;
        int i,j,size1,size2;

        cin>>i;
        int val;

        size1 = i;
        while(i--)
            {
                cin>>val;
                insertattail(head1,val);
            }

        cin>>j;
        size2 = j;
        while(j--)
            {
                cin>>val;
                insertattail(head2,val);
            }

        display(head1);
        display(head2);
        node* head3 = mergesortedll(head1,head2);
        display(head3);

        return 0; 
    }
