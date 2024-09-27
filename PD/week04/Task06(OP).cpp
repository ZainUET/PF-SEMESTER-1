#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y);

void print_z();
void print_a();
void print_i();
void print_n();

main()
{  system("cls");
   print_z();
   gotoxy(0,1);
 
   print_a();
   gotoxy(0,2);

   print_i();
   gotoxy(0,3);
   
   print_n();
   
  
   
}

void print_z()
{
   cout<<"Z";
}

void print_a()
{
   cout<<"A";
}

void print_i()
{
   cout<<"I";
}

void print_n()
{
   cout<<"N";
}

void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

