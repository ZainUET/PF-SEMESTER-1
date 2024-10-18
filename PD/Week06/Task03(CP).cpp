#include<iostream>
using namespace std;

string findZodaicSign(int,string);
main()
{   int day;
    string month;
    cout<<"Enter the day of birth: ";
    cin>>day;
    cout<<"Enter the month of birth:";
    cin>>month;
    cout<< findZodaicSign(day,month);
}

string findZodaicSign(int day,string month)
{
    string zodaic;
    if(month=="march" )
    {
        if(day>=21)
        zodaic="Aries";
        else if(day<=20)
        zodaic="Pisces";
    }
    else if(month=="april" )
    {
        if(day<=19)
        zodaic="Aries";
        else if(day>=20)
        zodaic="Taurus";
    }
    else if(month=="may" )
    {
        if(day<=20)
        zodaic="Taurus";
        else if(day>=21)
        zodaic="Gemini";
    }
    else if(month=="june" )
    {
        if(day<=20)
        zodaic="Gemini";
        else if(day>=21)
        zodaic="Cancer";
    }
    else if(month=="july" )
    {
        if(day<=22)
        zodaic="Cancer";
        else if(day>=23)
        zodaic="Leo";
    }
    else if(month=="august" )
    {
        if(day<=22)
        zodaic="Leo";
        else if(day>=23)
        zodaic="Virgo";
    }
    else if(month=="september" )
    {
        if(day<=22)
        zodaic="Virgo";
        else if(day>=23)
        zodaic="Libra";
    }
    else if(month=="october" )
    {
        if(day<=22)
        zodaic="Libra";
        else if(day>=23)
        zodaic="Scorpio";
    }
    else if(month=="november" )
    {
        if(day<=21)
        zodaic="Scorpio";
        else if(day>=22)
        zodaic="Sagittarius";
    }
    else if(month=="december" )
    {
        if(day<=21)
        zodaic="Sagittarius";
        else if(day>=22)
        zodaic="Capricon";
    }
    else if(month=="january" )
    {
        if(day<=19)
        zodaic="Capricon";
        else if(day>=20)
        zodaic="Aquarius";
    }
    else if(month=="february" )
    {
        if(day<=18)
        zodaic="Aquarius";
        else if(day>=19)
        zodaic="Pisces";
    }

    return "Zodaic Sign: "+zodaic;

}