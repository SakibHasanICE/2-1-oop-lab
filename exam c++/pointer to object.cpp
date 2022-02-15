#include <iostream.h>
 #include<conio.h>
 class myclass
 {
           int i;
           public:
                  void read(int j)
               {
                      i= j;
               }
                  int getint()
            {
                      return i;
            }
 };
               void main()
            {
                clrscr();
                myclass ob, *objectPointer;
                objectPointer = &ob; // get address of ob
                objectPointer->read(10);
                cout<<objectPointer->getint();       // use -> to call getlnt()
                getch();
           }
