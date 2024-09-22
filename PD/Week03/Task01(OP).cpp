#include<iostream>
using namespace std;
main()
{    
  system("color 02");
  system("cls");
     cout<<"Enter The Number Of Sides Of The Polygon:";
      int n;
     cin>>n;
    
     int angle=(n-2)*180;
  
    cout<<"The sum of internal angles of a "<<n<<"-sided polygon is "<<angle;



}