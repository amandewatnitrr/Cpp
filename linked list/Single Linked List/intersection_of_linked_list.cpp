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

void makeintersect(node* head1,node* &head2,int pos)
    {
        node* temp1 = head1;
        node* temp2 = head2;
        int count = 1;

        while(count != pos)
            {
                temp1 = temp1->next;
                count++;
            }
        while(temp2->next != NULL){temp2 = temp2->next;}

        temp2->next = temp1;
    }

int length(node* head)
    {
        node* temp=head;
        int count =0;
        while(temp!=NULL)
            {
                temp = temp->next;
                count++;
            }
        return count;
    }

int llintersectioin(node* head1, node* head2)
    {
        int l1 = length(head1);
        int l2 = length(head2);

        int d=0,count=0;
        node* ptr1;
        node* ptr2;

        if(l1>=l2)
            {
                d = l1-l2;
                ptr1 = head1;
                ptr2 = head2;
            }

        else
            {
                d = l2-l1;
                ptr1 = head2;
                ptr2 = head1;
            }

        count +=d;

        while(d)
            {
                ptr1 = ptr1->next;
                if(ptr1 == NULL){return 0;}
                d--;
            }

        while((ptr1 != NULL) && (ptr2 != NULL))
            {
                if(ptr1==ptr2){return count;}
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
                count++;
            }
        
        return 0;

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

        while(i--)
            {
                cin>>val;
                insertattail(head1,val);
            }

        cin>>j;
        while(j--)
            {
                cin>>val;
                insertattail(head2,val);
            }
        
        int intersect;
        cin>>intersect;
        
        makeintersect(head1,head2,intersect);

        display(head1);
        display(head2);
        if(llintersectioin(head1,head2)){
        cout<<llintersectioin(head1,head2)+1;}
        else
        {
        	cout<<0;
		}

        return 0; 
    }
