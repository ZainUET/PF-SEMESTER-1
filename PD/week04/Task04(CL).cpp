#include<iostream>
#include<windows.h>
using namespace std;

void printmaze();
void gotoxy(int x,int y);

main()
{ system("cls");
  printmaze();

  int x=3,y=5;
  while(x<21)
  {    gotoxy(x,y);
       cout<<"P";
       Sleep(500);
       gotoxy(x,y);
       cout<<" ";
       
       x=x+1;
         
   }
 
  gotoxy(0,24);

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
