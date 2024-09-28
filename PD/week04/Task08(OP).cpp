#include<iostream>
using namespace std;

void calculateAggregate(string , float,float,float);
void compareMarks(string, float, string, float);

main()
{  system("cls");
  string nameStd1,nameStd2;
  float matricMarksStd1,interMarksStd1,ecatMarksStd1,matricMarksStd2,interMarksStd2,ecatMarksStd2;

   cout<<"Enter Your Name: ";
   cin>>nameStd1;
   cout<<"Enter your matric marks(out of 1100): ";
   cin>>matricMarksStd1; 
   cout<<"Enter your inter marks(out of 550): ";
   cin>>interMarksStd1; 
   cout<<"Enter your ecat marks(out of 400): ";
   cin>>ecatMarksStd1;
   calculateAggregate(nameStd1, matricMarksStd1, interMarksStd1, ecatMarksStd1); 
   
   cout<<"Enter Your Name: ";
   cin>>nameStd2;
   cout<<"Enter your matric marks(out of 1100): ";
   cin>>matricMarksStd2; 
   cout<<"Enter your inter marks(out of 550): ";
   cin>>interMarksStd2; 
   cout<<"Enter your ecat marks(out of 400): ";
   cin>>ecatMarksStd2;
   calculateAggregate(nameStd2, matricMarksStd2, interMarksStd2,ecatMarksStd2); 

   compareMarks(nameStd1, ecatMarksStd1, nameStd2, ecatMarksStd2); 

}

void calculateAggregate(string name,float matricMarks,float interMarks,float ecatMarks)
{
  float aggregate=((matricMarks/1100)*30)+((interMarks/550)*30)+((ecatMarks/400)*40);
  cout<<name<<"'s Aggregate is: "<<aggregate<<"%"<<endl;
}

void compareMarks(string nameStd1,float ecatMarksStd1,string nameStd2,float ecatMarksStd2)
{
     if(ecatMarksStd1>ecatMarksStd2)
        cout<<nameStd1<<" has roll number 1. ";
     if(ecatMarksStd1<ecatMarksStd2)
        cout<<nameStd2<<" has roll number 1. ";



}