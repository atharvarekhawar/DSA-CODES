#include <iostream>
#include <stack>
#include <queue>
using namespace std;
/* queue have first in first out property i.e. the element that enters first into queue leaves it first.
queue can be implemented using linked list where element enters through tail and pops through head.
Array can be used to make circular queues. */


//Queue using circular array.

//template<typename T>

/*class Queue
{
    int *arr;
    int cs;
    int ms;
    int front;
    int rear;
    friend class Stack;

public:

    Queue(int default_size=5)
    {
        ms=default_size;
        arr=new T [ms];
        cs=0;
        front=0;
        rear=ms-1;

    }
    bool full()
    {
        return cs==ms;
    }
    bool empty()
    {
        return cs==0;
    }
    void push (T data)
    {
        if(!full())
        {
            rear=(rear+1)%ms;
            arr[rear]=data;
            cs++;
        }
    }

    void pop()
    {
       front=(front+1) % ms;
       cs--;
    }

    T frontt ()
    {
        return arr[front];
    }
};*/


class Stack//stack using two queues.
{
    queue<int>q1,q2;

public:
    void push(int  data)
    {
      if(!q1.empty())
      {
          q1.push(data);
      }
      else
      {
          q2.push(data);
      }
    }

    void pop()
    {
        if(q1.empty())
        {
          while (!q2.empty())
          {
              int frontt=q2.front();
              q2.pop();

              if(q2.empty())
              {
                  break;
              }
              q1.push(frontt);
          }
        }
        else
        {
           while (!q1.empty())
          {
              int frontt=q1.front();
              q1.pop();

              if(q1.empty())
              {
                  break;
              }
              q2.push(frontt);
          }
        }
    }

    int top()
    {
        if(q1.empty())
        {
          while (!q2.empty())
          {
              int frontt=q2.front();
              q2.pop();
              q1.push(frontt);

              if(q2.empty())
              {
                  return frontt;
              }

          }
        }
        else
        {
           while (!q1.empty())
          {
              int frontt=q1.front();
              q1.pop();
              q2.push(frontt);
              if(q1.empty())
              {
                  return frontt;
              }

          }
        }
    }

    bool empty()
    {
        return q1.empty() and q2.empty();
    }

};
int main()
{
  /* Queue <int> q(7);

   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);
   q.push(5);
   q.push(6);
   q.push(7);
   q.push(8);
   q.pop();
   q.push(9);

   while (!q.empty())
   {
       cout<<q.frontt()<<" ";
       q.pop();
   }*/


   Stack s;

   s.push(1);
    s.push(2);
     s.pop();
      s.push(3);
       s.push(4);


       while(!s.empty())
       {
           cout<<s.top()<<" ";
           s.pop();
       }

    return 0;
}
