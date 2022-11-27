#include <bits/stdc++.h>

using namespace std;
//linked list(insertion of elements,searching of element).
class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
            data=val;
            next=NULL;
    }
};
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void insertattail(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void insertathead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}
bool search(node* head,int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void deleteathead(node* &head)
{
    node* todelete=head;
    head=head->next;

    delete todelete;
}

void deletion(node* &head,int val)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        deleteathead(head);
        return;
    }


    node* temp=head;


 while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;

    delete todelete;

}



int main()
{
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    display(head);
    insertathead(head,6);
    insertathead(head,7);
    insertathead(head,8 );
    display(head);

    if(search(head,8))
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

        deletion(head,3);
        display(head);

        deleteathead(head);
        display(head);
;


    return 0;
}
