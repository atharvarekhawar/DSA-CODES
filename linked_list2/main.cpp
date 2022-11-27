#include <iostream>
#include <bits/stdc++.h>
 using namespace std;


class list;

class node
  {
      int data;


  public:
      node *next;
    node (int d)
    {
        data=d;
        next=NULL;
    }


    int getdata()
    {
        return data;
    }

    ~node()
    {
        if(next!=NULL)
        {
            delete next;
        }
        cout<<"deleting node with data "<<data<<endl;
    }
    friend class listl;

  };

  class listl
  {
      node *head;
      node *tail;

      int helper(node *start,int key)
      {
          if(start==NULL)
          {
              return -1;
          }
          if(start->data==key)
          {
              return 0;
          }

          int subind=helper(start->next,key);

        if(subind==-1)
        {
            return -1;
        }
        return subind+=1;
      }

  public:
      listl()
      {
          head=NULL;
          tail=NULL;
      }

      node *begin()
      {
          return head;
      }

    void push_front(int data)
    {
        if(head==NULL)
        {
            node *n=new node(data);
            head=tail=n;
        }
        else
        {
            node *n=new node(data);
            n->next=head;
            head=n;
        }
    }
    void push_back(int data)
    {
         if(head==NULL)
        {
            node *n=new node(data);
            head=tail=n;
        }
        else
        {
            node *n=new node(data);
            tail->next=n;
            tail=n;
        }
    }
    void insertt (int data,int pos)
    {
        if(pos==0)
        {
            push_front(data);
            return;
        }

        node *temp=head;

        for(int jump=1;jump<=pos-1;jump++)
        {
            temp=temp->next;
        }

        node *n=new node (data);
        n->next=temp->next;
        temp->next=n;
    }

    int searchkey(int key)
    {
        node *temp=head;
        int i=0;

        while(temp!=NULL)
        {
            if(temp->data==key)
            {
                return i;
            }
            i++;
            temp=temp->next;
        }
        return -1;
    }

    int recursivesearch(int key)
    {
        return helper(head,key);
    }
    ~listl()
    {
        if(head!=NULL)
        {
            delete head;
            head=NULL;
        }
    }

    void pop_front()
    {
        node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;

    }
    void pop_back()
    {
        node *temp=head;


        while(temp->next->next!=NULL)
        {

            temp=temp->next;

        }
         node *n;
        n=temp->next;
        temp->next=NULL;

        delete n;



    }
    void remove(int pos)
    {
        node *temp=head;

        for(int i=1;i<=pos-1;i++)
        {
            temp=temp->next;
        }

        node *n;
        n=temp->next;
        temp->next=n->next;
        n->next=NULL;
        delete n;


    }

    void reversee()
    {
        node *c=head;
        node *p=NULL;
        node *n;

        while(c!=NULL)
        {
            n=c->next;
            c->next=p;

            p=c;
            c=n;
        }
        head=p;
    }


  };
int main()
{




    listl l;
    l.push_back(0);
    l.push_back(1);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);

    l.insertt(2,2);




     // l.pop_front();
     //l.remove(2);
     l.reversee();




    node *h=l.begin();

    while(h!=NULL)
    {
        cout<<h->getdata()<<" -> ";
        h=h->next;
    }
    cout<<"NULL"<<endl;




   // cout<<l.recursivesearch(1)<<endl;




   return 0;
}

