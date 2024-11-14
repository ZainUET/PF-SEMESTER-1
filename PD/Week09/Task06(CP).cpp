#include<iostream>
using namespace std;

void evenOdd_Transformation(int numbers[],int transform);
main()
{
   int numbers[3],transform;
   cout<<"Enter three numbers: "<<endl;

   for (int idx = 0; idx < 3; idx++)
   {
    cin>>numbers[idx];
   }

   cout<<"Enter number of times even-odd transformation need to be done:";
   cin>>transform;
   evenOdd_Transformation(numbers,transform);
     
     for (int idx = 0; idx < 3; idx++)
     {
      cout<<numbers[idx]<<"  ";
     }
     


}

void evenOdd_Transformation(int numbers[],int transform)
{
    
    int i=1;
    while(i<=transform)
    {
    for (int idx = 0; idx < 3 ; idx++)
    {
         if(numbers[idx]%2==0)
           numbers[idx]=numbers[idx]-2;      
         else 
           numbers[idx]=numbers[idx]+2;
    }
    i++;
    }  
    
}

