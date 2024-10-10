#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printEnemy();
void eraseEnemy();
void erasePlayer();
void printPlayer();
void movePlayerLeft();
void movePlayerRight();
void moveEnemy();
void printMaze();

int eX = 2, eY = 2;
int pX = 20, pY = 20;

main()
{   
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
        moveEnemy();
        Sleep(200);
        
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
    cout << "|#######|  ";
    gotoxy(eX,eY+1);
    cout << "|  E-1  |   ";
    gotoxy(eX,eY+2);
    cout << "|__ _ __|  ";
    gotoxy(eX,eY+3);
    cout << "   | |         ";
    gotoxy(eX,eY+4);
    cout << "   |O|   ";
    
}


void eraseEnemy()
{
    gotoxy(eX,eY);
    cout << "           ";
    gotoxy(eX,eY+1);
    cout << "           ";
    gotoxy(eX,eY+2);
    cout << "           ";
    gotoxy(eX,eY+3);
    cout << "           ";
    gotoxy(eX,eY+4);
    cout << "           ";
}

void moveEnemy()
{
   
    eraseEnemy();
    eX = eX + 1;
    if(eX == 90)
    {
        eX = 2;
    }
    printEnemy();
   
}


void erasePlayer()
{
    gotoxy(pX,pY);
    cout << "               ";
    gotoxy(pX, pY+1);
    cout << "               ";
    gotoxy(pX, pY+2);
    cout << "               ";
    gotoxy(pX, pY+3);
    cout << "               ";
    gotoxy(pX, pY+4);
    cout << "               ";
}
void printPlayer()
{
    gotoxy(pX,pY);
    cout << "      |O|           ";
    gotoxy(pX, pY+1);
    cout << "    __|_|__         ";
    gotoxy(pX, pY+2);
    cout << "   |*******|        ";
    gotoxy(pX, pY+3);
    cout << "   | T-14  |         ";
    gotoxy(pX, pY+4);
    cout << "   |*_____*|        ";
}


void movePlayerLeft()
{
    erasePlayer();
    pX = pX - 1;
    printPlayer();
}

void movePlayerRight()
{
    erasePlayer();
    pX = pX + 1;
    printPlayer();
}

