#include <iostream>

using namespace std;
struct student
{
     int roll;
     string name;
     float sgpa;
     char grade;

 public:
     student(int r,string n,float s,char g)
     {
           roll=r;
           name=n;
           sgpa=s;
           grade=g;

     }

    void display()
    {
        cout<<"Name : "<<name<<endl;
         cout<<"Roll No : "<<roll<<endl;
          cout<<"SGPA : "<<sgpa<<endl;
           cout<<"Grade : "<<grade<<endl;

    }

};
int main()
{
  struct student s={141,"Shreyash",9.95,'A'};
  s.display();
  cout<<endl;
  s={155,"Atharva",9.86,'A'};
  s.display();
  cout<<endl;
  s={146,"Chirag",10,'A'};
  s.display();
  cout<<endl;
  s={126,"Yash",9.9,'A'};
  s.display();

  cout<<endl;


    return 0;
}
