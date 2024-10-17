#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
void gotoxy(int x, int y);
void printEnemy();
void eraseEnemy();
void erasePlayer();
void printPlayer();
void movePlayerLeft();
void movePlayerRight();
void movePlayerUp();
void movePlayerDown();
void moveEnemy();
void printMaze();
char getCharAtxy(short int x, short int y);

string direction="right";
int eX = 2, eY = 2;
int pX = 20, pY = 20;

main()
{   
    system("cls");
    printMaze();
    gotoxy(55,20);
    cout<<"PLAY";
    getch();
    
    
    system("cls");
    printMaze();
    printEnemy();
    printPlayer();

   


    while(true)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            movePlayerLeft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            movePlayerRight();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            movePlayerDown();
        }
        if (GetAsyncKeyState(VK_UP))
        {
            movePlayerUp();
        }
        
        moveEnemy();
        Sleep(100);
        }
        
}

void printMaze()
{
cout << "######################################################################################################################" << endl;
cout << "#                                                                                                                    #" << endl;
cout << "#                                                                                                                    #" << endl;
cout << "#                                                                                                                    #" << endl;
cout << "#                                                                                                                    #" << endl;
cout << "#                                                                                                                    #" << endl;
cout << "#                                                                                                                    #" << endl;
cout << "#                                                                                                                    #" << endl;
cout << "#                                                                                                                    #" << endl;
cout << "#                                                                                                                    #" << endl;
cout << "#                                                                                                                    #" << endl;
cout << "#                                                                                                                    #" << endl;
cout << "#                                                                                                                    #" << endl;
cout << "#                                                                                                                    #" << endl;
cout << "#                                                                                                                    #" << endl;
cout << "#                                                                                                                    #" << endl;
cout << "#                                                                                                                    #" << endl;
cout << "#                                                                                                                    #" << endl;
cout << "#                                                                                                                    #" << endl;
cout << "#                                                                                                                    #" << endl;
cout << "#                                                                                                                    #" << endl;
cout << "#                                                                                                                    #" << endl;
cout << "#                                                                                                                    #" << endl;
cout << "#                                                                                                                    #" << endl;
cout << "#                                                                                                                    #" << endl;
cout << "#                                                                                                                    #" << endl;
cout << "######################################################################################################################" << endl;
  



}

void gotoxy(int x, int y)

{

COORD coordinates;

coordinates.X = x;

coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}

void printEnemy()
{
    gotoxy(eX,eY);
    cout << "|#######|";
    gotoxy(eX,eY+1);
    cout << "|  E-1  |";
    gotoxy(eX,eY+2);
    cout << "|__ _ __|";
    gotoxy(eX,eY+3);
    cout << "   | |   ";
    gotoxy(eX,eY+4);
    cout << "   |O|   ";
    
}


void eraseEnemy()
{
    gotoxy(eX,eY);
    cout << "         ";
    gotoxy(eX,eY+1);
    cout << "         ";
    gotoxy(eX,eY+2);
    cout << "         ";
    gotoxy(eX,eY+3);
    cout << "         ";
    gotoxy(eX,eY+4);
    cout << "         ";
}

void moveEnemy()
{


  eraseEnemy();
        
if (direction=="right")
{
    eX = eX + 1;
    
}
else if(direction=="left")
{
    eX=eX-1;
}
if (getCharAtxy(eX+10,eY)=='#')
{
    direction="left";
}
if (getCharAtxy(eX-1,eY)=='#')
{
    direction="right";
}
printEnemy();
}


void erasePlayer()
{
    gotoxy(pX,pY);
    cout << "         ";
    gotoxy(pX, pY+1);
    cout << "         ";
    gotoxy(pX, pY+2);
    cout << "         ";
    gotoxy(pX, pY+3);
    cout << "         ";
    gotoxy(pX, pY+4);
    cout << "         ";
}
void printPlayer()
{
    gotoxy(pX,pY);
    cout << "   |O|   ";
    gotoxy(pX, pY+1);
    cout << " __|_|__ ";
    gotoxy(pX, pY+2);
    cout << "|*******|";
    gotoxy(pX, pY+3);
    cout << "| T-14  |";
    gotoxy(pX, pY+4);
    cout << "|*_____*|";
}


void movePlayerLeft()
{  if (getCharAtxy(pX-1,pY)==' ')
{
    erasePlayer();
    pX = pX - 1;
    printPlayer();
}
}

void movePlayerRight()
{
    if (getCharAtxy(pX+10,pY)==' ')
    {
    erasePlayer();
    pX = pX + 1;
    printPlayer();}
}

void movePlayerUp()
{  if (getCharAtxy(pX,pY-1)==' ')
   {
    erasePlayer();
    pY = pY - 1;
    printPlayer();
   }
}

void movePlayerDown()
{
    if (getCharAtxy(pX,pY+6)==' ')
    {erasePlayer();
    pY = pY + 1;
    printPlayer();}
}

char getCharAtxy(short int x, short int y)
{
 CHAR_INFO ci;
 COORD xy = {0, 0};
 SMALL_RECT rect = {x, y, x, y};
 COORD coordBufSize;
 coordBufSize.X = 1;
 coordBufSize.Y = 1;
 return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}

