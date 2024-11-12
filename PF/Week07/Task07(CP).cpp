#include<iostream>
#include<iomanip>
using namespace std;

main()
{
   float p1 = 0,p2 = 0,p3 = 0,p4 = 0,p5 = 0;
   float count,number;
   cout<<"Enter the number of count: ";
   cin>>count;

   for (int i = 1; i <= count; i++)
   {
    cout<<"Enter the number: ";
    cin>>number;

    if (number<200)
    {
        p1++;
    }
    if (number>=200 && number<=399)
    {
        p2++;
    }
    if (number>=400 && number<=599)
    {
        p3++;
    }
    if (number>=600 && number<=799)
    {
        p4++;
    }
    if (number>=800)
    {
        p5++;
    }
    }
   
   cout<<fixed<<setprecision(2);
   
   cout<<(p1*100.0)/count<<"%"<<endl;
   cout<<(p2*100.0)/count<<"%"<<endl;
   cout<<(p3*100.0)/count<<"%"<<endl;
   cout<<(p4*100.0)/count<<"%"<<endl;
   cout<<(p5*100.0)/count<<"%"<<endl;

}