#include<iostream>
using namespace std;


main()
{
    string alert="There is no 7 in array";
    int size,numbers[size];
    cout<<"Enter The size of array: ";
    cin>>size;
    
    cout<<"Enter "<<size<<" Numbers: ";
    for (int i = 0; i < size; i++)
    {
        cin>>numbers[i];
        if(numbers[i]==7)
        alert="boom!";     
     }

    cout<<alert;    
    


    }