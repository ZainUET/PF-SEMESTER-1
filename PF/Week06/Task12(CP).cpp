#include <iostream>
using namespace std;
float totalIncome(string,int,int);
main()
{
    string screenType;
    int rows,columns;
    cout<<"Enter the type (premiere/normal/discount) : ";
    cin>>screenType;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    cout<<"Enter the number of columns : ";
    cin>>columns;
    float income=totalIncome(screenType,rows,columns);
    cout<<income;
}
float totalIncome(string screenType,int rows,int columns)
{
    float total=rows*columns;
    if(screenType=="premiere")
    {
        total=total*12;
    } 
    else if(screenType=="normal")
    {
        total=total*7.5;
    }  
    else if(screenType=="discount")
    {
        total=total*5;
    }     
    return total;  
}