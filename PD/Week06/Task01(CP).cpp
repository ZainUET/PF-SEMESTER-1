#include<iostream>
using namespace std;

string decideActivity(string,string);
main()
{   string temperature,humidity;
    cout<<"Enter Temperature(warm or cold): ";
    cin>>temperature;
    cout<<"Enter Humidity(dry or humid): ";
    cin>>humidity;
    
    cout<<decideActivity(temperature,humidity);
}

string decideActivity(string temperature,string humidity)
{
    string activity;
    if (temperature=="warm")
    {
        if (humidity=="dry")
            activity="Play Tennis";
        else if(humidity=="humid")
        activity="Swim";
    }
    else if (temperature=="cold")
    {
        if (humidity=="dry")
            activity="Play Basketball";
        else if(humidity=="humid")
        activity="Watch TV";
    }
    
    return "Recommended Activity: " + activity;

}