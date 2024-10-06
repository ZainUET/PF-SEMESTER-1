#include <iostream>
using namespace std;
void NumberInEnglish(int,int,int);
int main()
{
  int number,digit1,digit2;
  cout<<"Enter a number : ";
  cin>>number;
  digit2=number%10;
  digit1=(number/10)%10;
  NumberInEnglish(number,digit1,digit2);
}

void NumberInEnglish(int number,int digit1,int digit2)
{
  if(number==10)
  	cout<< "Ten";
  if(number==11)
  	cout<< "Eleven";
  if(number==12)
  	cout<< "Twelve";
  if(number==13)
  	cout<< "Thirteen";
  if(number==14)
  	cout<< "Fourteen";
  if(number==15)
  	cout<< "Fifteen";
  if(number==16)
  	cout<< "Sixteen";
  if(number==17)
  	cout<< "seventeen";
  if(number==18)
  	cout<< "Eighteen";
  if(number==19)
  	cout<< "Nineteen";
  if(digit1==2)
  	cout<< "Twenty";
  if(digit1==3)
  	cout<< "Thirty";
  if(digit1==4)
  	cout<< "Forty";
  if(digit1==5)
  	cout<< "Fifty";
  if(digit1==6)
  	cout<< "Sixty";
  if(digit1==7)
     cout<< "Seventy";
  if(digit1==8)
     cout<< "Eighty";
  if(digit1==9)
     cout<< "Ninety";
if(number>19)
 {
  if(digit2==1)
      cout<< "one";
  if(digit2==2)
      cout<< "Two";
  if(digit2==3)
      cout<< "Three";
  if(digit2==4)
      cout<< "Four";
  if(digit2==5)
      cout<< "Five";
  if(digit2==6)
      cout<< "Six";
  if(digit2==7)
      cout<< "Seven";
  if(digit2==8)
      cout<< "Eight";
  if(digit2==9)
     cout<< "Nine";
 }

}

  