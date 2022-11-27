#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

template<typename T>

class node
{
public:
    string key;
    T value;
    node *next;

    node(string key,T value)
    {
        this->key=key;
        this->value=value;
        next=NULL;
    }

    ~node()
    {
        if(next!=NULL)
        {
            delete next;
        }
    }
};

template<typename T>

class hashtable//hashtable in stl in c++ is called unordered_map which needs to be included in header file.
{
    node<T>**table;
    int cs;//total entries till now
    int ts;//size of the table


    int hashfn(string key)
        {
            int idx=0;
            int power=1;

            for(auto ch : key)
            {
                idx=(idx+ch*power)%ts;
                power=(power*29)%ts;
            }

            return idx;
        }

        void rehash()
        {
            node<T>**oldtable=table;
            int oldts=ts;
            cs=0;
            ts=(2*ts) + 1;

            table=new node<T>*[ts];

            for(int i=0;i<ts;i++)
            {
                table[i]=NULL;
            }

            for(int i=0;i<oldts;i++)
            {
               node<T>*temp=oldtable[i];

                    while(temp!=NULL)
                    {
                        string key=temp->key;
                        T value=temp->value;
                        insertt(key,value);
                        temp=temp->next;
                    }

                    if(oldtable[i]!=NULL)
                    {
                        delete oldtable[i];
                    }
            }

            delete [] oldtable;
        }

    public:

    hashtable(int default_size=7)
    {
        cs=0;
        ts=default_size;
        table=new node<T>*[ts];

        for(int i=0;i<ts;i++)
        {
            table[i]=NULL;
        }
    }

    void insertt(string key,T val)
    {
        int idx=hashfn(key);

        node<T>*n=new node<T>(key,val);

        n->next=table[idx];//insertion at head
        table[idx]=n;

        cs++;

        float load_factor=cs/float(ts);

        if(load_factor>0.7)
        {
            rehash();
        }
    }

    T* searchh(string key)
    {
        int idx=hashfn(key);

        node<T>*temp=table[idx];

        while(temp!=NULL)
        {
            if(temp->key == key)
            {
                return &temp->value;
            }
            temp=temp->next;
        }
        return NULL;
    }

   /* void removee(string key)//not completed yet.
    {
         int idx=hashfn(key);

        node<T>*temp=table[idx];
        node<T>*prev=NULL;
        prev->next=table[idx];

        while(temp!=NULL)
        {
            if(temp->key == key)
            {
                node<T>*n;
                n=temp->next;
                temp->next=NULL;
                prev=n;
                delete temp;
                return;

            }
            temp=temp->next;
            prev=prev->next;
        }

    }*/

    void print()
    {
        for(int i=0;i<ts;i++)
        {
            cout<<"Bucket "<<i<<"->";

            node<T>*temp=table[i];
            while(temp!=NULL)
            {
                cout<<temp->key<<"->";
                temp=temp->next;
            }
            cout<<endl;
        }
    }
};
int main()
{
    hashtable<int> h;


    h.insertt("mango",100);
     h.insertt("apple",110);
      h.insertt("guava",120);
       h.insertt("lichi",130);
       h.insertt("orange",140);
        h.insertt("kiwi",150);
         h.insertt("papaya",160);
          h.insertt("banana",170);

         // h.removee("mango");

          h.print();

          cout<<endl;

          string fruit;
          cout<<"Which fruit do you want : ";
          cin>>fruit;

          if(h.searchh(fruit)!=NULL)
          {
            cout<<"price of "<<fruit<<" :"<<*h.searchh(fruit)<<endl;
          }
          else{
            cout<<"friut is not present"<<endl;
          }






    return 0;
}
