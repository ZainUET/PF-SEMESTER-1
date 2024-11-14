#include<iostream>
using namespace std;

int Calculate_time(string colors[],int n);
main()
{
    
    int n;
    cout<<"Enter the numbers of colors: ";
    cin>>n;
    string colors[n];
    cout<<"Enter the colors: "<<endl;
    for (int idx = 0; idx < n; idx++)
    {
        cin>>colors[idx];
    }

    cout<<"Time to be taken: "<<Calculate_time(colors,n);
        
}

int Calculate_time(string colors[],int n)
{
    int seconds=2;
    for (int idx = 1; idx < n; idx++)
    {
        if (colors[idx]!=colors[idx-1])
        {
            seconds=seconds+3;
        }

        if (colors[idx]==colors[idx-1])
        {
            seconds=seconds+2;
        }



    }
    
    return seconds;
}