#include<iostream>
using namespace std;

void stickers(int side_length);

main()
{ system("cls");
  int side_length;
  cout<<"Enter the side length of Rubik's Cube: ";
  cin>>side_length;
  
  stickers(side_length);
}

void stickers(int side_length)
{
 int stickers=(side_length*side_length)*6;
 cout<<"Number Of Stickers Needed: "<<stickers;
}