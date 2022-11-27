#include <bits/stdc++.h>

using namespace std;
class code//#1
{
   public:
       void fun()
       {
           cout<<"i am a function with no argument "<<endl;
       }
        void fun(int x)
       {
           cout<<"i am a function with "<<  x <<" argument "<<endl;
       }
        void fun(double x)
       {
           cout<<"i am a function with "<< x<<" argument "<<endl;
       }
};
class Complex//#2
{
private:
    int real,imag;
public:
    Complex(int r=0,int i=0)
    {
        real=r;
        imag=i;
    }
    Complex operator +(Complex const &obj)
    {
        Complex res;
        res.imag=imag+ obj.imag;
        res.real=real+ obj.real;
        return res;

    }
    void display()
    {
        cout<<real<<" + i"<<imag<<endl;
    }
};
class base//#3
{
public:
    virtual void print()//virtual function indicates to choose other function having same name
    {
        cout<<"this is the base class's print fuction"<<endl;
    }
    void display()
    {
        cout<<"this is the base class's display function"<<endl;

    }
};
class derived:public base
{
public:
    void print()
    {
        cout<<"this is the derived class's print fuction"<<endl;
    }
    void display()
    {
        cout<<"this is the derived class's display function"<<endl;

    }

};


int main()
{
    code ath;
    ath.fun();
    ath.fun(3);
    ath.fun(7.9);//function overloading
    cout<<endl;

    Complex c1(12,7);
    Complex c2(6,7);
    Complex c3=c1+c2;
    c3.display();//operator overloading
    cout<<endl;

    base *baseptr;
    derived d;
    baseptr=&d;

    baseptr->print();
    baseptr->display();//virtual function
    cout<<endl;


    return 0;
}
