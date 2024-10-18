#include<iostream>
using namespace std;

float calculatePercentage(float,float,float,float,float);
string calculateGrade(float);
main()
{
  string stdname;
  float English,maths,chemistry,socialSciences,Biology,percentage;

  cout<<"Enter Student Name: ";
  cin>>stdname;
  cout<<"Enter Marks For English: ";
  cin>>English;
  cout<<"Enter Marks For Maths: ";
  cin>>maths;
  cout<<"Enter Marks For Chemistry: ";
  cin>>chemistry;
  cout<<"Enter Marks For Social Science: ";
  cin>>socialSciences;
  cout<<"Enter Marks For Biology: ";
  cin>>Biology;
 
   percentage=calculatePercentage(English,maths,chemistry,socialSciences,Biology);
   cout<<"Percentage: "<<percentage<<"%"<<endl;
   cout<<"Student Name: "<<stdname<<endl;
   cout<< calculateGrade(percentage);



}

float calculatePercentage(float English,float maths,float chemistry,float socialscience,float biology)
{
    float percentage=((English+maths+chemistry+socialscience+biology)/500)*100;
    return percentage;
}

string calculateGrade(float percentage)
{   string grade;
    if(percentage<=100 && percentage>=90)
    grade="A+";
    else if(percentage<=89 && percentage>=80)
    grade="A";
    else if(percentage<=79 && percentage>=70)
    grade="B+";
    else if(percentage<=69 && percentage>=60)
    grade="B";
    else if(percentage<=59 && percentage>=50)
    grade="C";
    else if(percentage<=49 && percentage>=40)
    grade="D";
    else if(percentage<40)
    grade="F";

   return "Grade:"+grade;

}