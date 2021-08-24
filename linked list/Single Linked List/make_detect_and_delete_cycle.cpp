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

bool detectcycle(node* &head)
    {
        node* fast=head;
        node* slow=head;

        while(fast!=NULL || fast->next!=NULL)
            {
                slow = slow->next;
                fast = fast->next->next;
                if(fast==slow)
                    {
                        return true;
                    }
            }
        return false;

    }

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

void deletecycle(node* &head)
    {
        node* slow = head;
        node* fast = head;
        int count = 1;

        
        do{
            fast = fast->next->next;
            slow = slow->next;
            }while(fast != slow);

        fast = head;
        while(slow->next != fast->next)
            {
                slow = slow->next;
                fast = fast->next;
            }
        slow->next = NULL;
        
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
        makeloop(head,j);
        cout<<detectcycle(head)<<endl;
        if(detectcycle(head))
            {
                deletecycle(head);
                display(head);
            }
        return 0; 
    }
