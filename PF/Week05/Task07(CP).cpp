#include<iostream>
using namespace std;

void IsSymmetrical(int);

main()
{  int num;
  cout<<"Enter a three digit number : ";
  cin>>num;
  

 IsSymmetrical(num);
  
  }

  void IsSymmetrical(int num)
  {
  int rev1=num%10;
      num=num/10;
  int rev2=num%10;
      num=num/10;
  int rev3=num%10;

    if (rev1==rev3)
  {
    cout<<"The Number Is SYMETRICAL";
  }
    if (rev1!=rev3)
    {
        cout<<"The Number Is NOT SYMETRICAL";
    }
    
  }
