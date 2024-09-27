#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y);

main()
{ system("cls"); 
  gotoxy(70,24);
  cout<<"Rana Zain-Ul-Abiden";
}

void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
