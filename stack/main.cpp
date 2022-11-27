#include <bits/stdc++.h>
#include <iostream>
#include <stack>

using namespace std;

/*template<typename T>
class Stack;

template <typename T>
class node
{
    public:
    T data;
    node<T> *next;

    node(T d)
    {
        data=d;
    }
};
template<typename T>
class Stack  //using linked list
{
    node<T> *head;

public:

    Stack()
    {
        head=NULL;
    }

    void push(T data)
    {
        node<T> *n=new node<T>(data);
        n->next=head;
        head=n;
    }
    bool empty()
    {
        return head==NULL;
    }

    T top()
    {
        return head->data;
    }

    void pop()
    {
        node<T> *temp=head;
        head=head->next;
        delete temp;
    }

};*/

/*template<typename T>

class Stack  //using vector
{
    vector<T>arr;
public:

    void push(T data)
    {
        arr.push_back(data);
    }
    void pop()
    {
        arr.pop_back();
    }
    T top()
    {
        int lastind=arr.size()-1;
        return arr[lastind];
    }

    bool empty()
    {
        return arr.size()==0;
    }
};*/

void insertatbottom(stack<int>&s,int data)//adding element at bottom of stack.
{
    if(s.empty())
       {
         s.push(data);
            return;
       }
       int temp=s.top();
       s.pop();

    insertatbottom(s,data);
    s.push(temp);

}


void reversee(stack<int>&s)
{
    if(s.empty())
    {
         return;
    }
    int t=s.top();
    s.pop();
    reversee(s);
    insertatbottom(s,t);
}

/*stack <int> s;
	int n = a.size();
	s.push(0);
	vector<int> arr(n, 1);
	for (int i = 1; i < n; i++) {
		while (!s.empty() and a[s.top()] <= a[i]) {
			s.pop();
		}
		if (!s.empty()) {
			arr[i] = i - s.top();
		} else arr[i] = i + 1;
		s.push(i);
	}
	return arr;*/


int main()
{
    stack<int>s;

    s.push(5);
     s.push(4);
      s.push(3);
       s.push(2);
        s.push(1);
        insertatbottom(s,6);
        reversee(s);

        while (!s.empty())
        {
            cout<<s.top()<<" ";
            s.pop();
        }
        cout<<endl;


return 0;
}
