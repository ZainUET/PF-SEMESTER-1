#include<iostream>
using namespace std;

void Oddish_Evenish(int);

main()
{  int num;
  cout<<"Enter a five digit number : ";
  cin>>num;
  

 Oddish_Evenish(num);
  
  }

  void Oddish_Evenish(int num)
  {
  int digit1=num%10;
      num=num/10;
  int digit2=num%10;
      num=num/10;
  int digit3=num%10;
      num=num/10;
  int digit4=num%10;
      num=num/10;
  int digit5=num;

  int sum=digit1+digit2+digit3+digit4+digit5;


    if (sum%2==0)
  {
    cout<<"EVENISH!";
  }
    if (sum%2!=0)
    {
        cout<<"ODDISH!";
    }
    
  }
