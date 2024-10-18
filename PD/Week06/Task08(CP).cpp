#include <iostream>
#include <cmath>
using namespace std;
float calculateVolleyBall(string,int,int);
main()
{
    string type;
    int holidays,weekends;
    cout<<"Enter year type : ";
    cin>>type;
    cout<<"Enter the number of weekends : ";
    cin>>weekends;
    cout<<"Enter the number of holidays : ";
    cin>>holidays;
    float volleyball=calculateVolleyBall(type,weekends,holidays);
    cout<<volleyball;
}
float calculateVolleyBall(string type,int weekends,int holidays)
{
    float weekendsInSofia=48-weekends;
    float playWeekends=weekendsInSofia*0.75;
    float holidayPlays=holidays*0.66;
    float totalDays=(playWeekends)+(holidayPlays)+weekends;
    if(type=="leap")
    {
        totalDays=totalDays*1.15;
    }
    return floor(totalDays);
}
