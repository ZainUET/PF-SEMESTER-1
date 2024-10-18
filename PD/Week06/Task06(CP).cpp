#include <iostream>
#include <iomanip> 
#include <string>

using namespace std;

string calculateHotelPrices(string month, int numberOfStays) ;

int main() {
    string month;
    int numberOfStays;

  
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> numberOfStays;

    
    string result = calculateHotelPrices(month, numberOfStays);
    cout << result << endl;

    return 0;
}

string calculateHotelPrices(string month, int numberOfStays) 
{
    
    double studioPrice, apartmentPrice;
    
    if (month == "May" || month == "October") {
        studioPrice = 50;
        apartmentPrice = 65;
    } else if (month == "June" || month == "September") {
        studioPrice = 75.20;
        apartmentPrice = 68.70;
    } else if (month == "July" || month == "August") {
        studioPrice = 76;
        apartmentPrice = 77;
    }
    double totalStudioPrice = studioPrice * numberOfStays;
    double totalApartmentPrice = apartmentPrice * numberOfStays;

    if (month == "May" || month == "October") {
        if (numberOfStays > 14) {
            totalStudioPrice *= 0.70; 
        } 
        else if (numberOfStays > 7) {
            totalStudioPrice *= 0.95; 
        }
    } 
    else if ((month == "June" || month == "September") && numberOfStays > 14) {
        totalStudioPrice *= 0.80; 
    }

    if (numberOfStays > 14) {
        totalApartmentPrice *= 0.90; 
    }

   
    stringstream result;
    result << fixed << setprecision(2);
    result << "Apartment: " << totalApartmentPrice << "$." << endl;
    result << "Studio: " << totalStudioPrice << "$.";

    return result.str();
}