#include<iostream>
#include<windows.h>
using namespace std;

void printmaze();
void gotoxy(int x,int y);
void move_player();

main()
{ system("cls");
  printmaze();
  move_player(); 

}

void printmaze()
{    cout<<"##############################################################################"<<endl;
     cout<<"#                                                                            #"<<endl;  
     cout<<"#                                                                            #"<<endl;  
     cout<<"#                                                                            #"<<endl;  
     cout<<"#                                                                            #"<<endl;  
     cout<<"#                                                                            #"<<endl;  
     cout<<"#                                                                            #"<<endl;  
     cout<<"#                                                                            #"<<endl;  
     cout<<"#                                                                            #"<<endl;  
     cout<<"#                                                                            #"<<endl;  
     cout<<"#                                                                            #"<<endl;  
     cout<<"#                                                                            #"<<endl;  
     cout<<"#                                                                            #"<<endl;  
     cout<<"#                                                                            #"<<endl;  
     cout<<"#                                                                            #"<<endl;  
     cout<<"#                                                                            #"<<endl;  
     cout<<"#                                                                            #"<<endl;  
     cout<<"#                                                                            #"<<endl;  
     cout<<"#                                                                            #"<<endl;  
     cout<<"#                                                                            #"<<endl;  
     cout<<"#                                                                            #"<<endl;  
     cout<<"#                                                                            #"<<endl;  
     cout<<"##############################################################################"<<endl;


}


void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


void move_player()
{
   int x=3,y=5;
  while(y<21)
  {    gotoxy(x,y);
       cout<<"P";
       Sleep(500);
       gotoxy(x,y);
       cout<<" ";
       y=y+1;

    if(y==21)
    { while(y>5)
      {  gotoxy(x,y);
        cout<<"P";
       Sleep(500);
       gotoxy(x,y);
       cout<<" ";
       y=y-1;}
     }  
   }
}
