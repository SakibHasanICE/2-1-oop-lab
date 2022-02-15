#include<iostream.h>
#include<conio.h>
using namespace std;
class simple
{
 public:
virtual void example()=0;
};
class test: public simple
{
 public:
 void example()
{
 cout<<"C is a Procedural Programming Languages";
}
};
class temp: public simple
{
 public:
 void example()
{
 cout<<"C++ is an Object-Oriented Programming language";
}
};
void main()
{
 Exforsys* arra[2];
 test t1;
 temp t2;
 arr[0]=&t1;
 arr[1]=&t2;
 arr[0]->example();
 arr[1]->example();
 getch();
}
