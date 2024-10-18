

#include <iostream>
#include <iomanip>
#include <cmath> 
#include <string>

using namespace std;

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);

int main() {
    int examHour, examMinute, studentHour, studentMinute;

    cout << "Enter exam starting time (hour): ";
    cin >> examHour;
    cout << "Enter exam starting time (minutes): ";
    cin >> examMinute;
    cout << "Enter student hour of arrival: ";
    cin >> studentHour;
    cout << "Enter student minutes of arrival: ";
    cin >> studentMinute;

    string result = checkStudentStatus(examHour, examMinute, studentHour, studentMinute);
    cout << result << endl;

    return 0;
}

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute)
 {
    int examTimeInMinutes = examHour * 60 + examMinute;
    int studentTimeInMinutes = studentHour * 60 + studentMinute;

    int timeDifference = studentTimeInMinutes - examTimeInMinutes;

    string status;

    if (timeDifference > 0) { 
        status = "Late\n";
        if (timeDifference >= 60) {
            int hoursLate = timeDifference / 60;
            int minutesLate = timeDifference % 60;
            status += to_string(hoursLate) + ":" + (minutesLate < 10 ? "0" : "") + to_string(minutesLate) + " hours after the start";
        } else {
            status += to_string(timeDifference) + " minutes after the start";
        }
    } else if (timeDifference >= -30) { 
        status = "On time\n";
        if (timeDifference != 0) {
            status += to_string(abs(timeDifference)) + " minutes before the start";
        }
    } else { 
        status = "Early\n";
        timeDifference = abs(timeDifference);
        if (timeDifference >= 60) {
            int hoursEarly = timeDifference / 60;
            int minutesEarly = timeDifference % 60;
            status += to_string(hoursEarly) + ":" + (minutesEarly < 10 ? "0" : "") + to_string(minutesEarly) + " hours before the start";
        } else {
            status += to_string(timeDifference) + " minutes before the start";
        }
    }

    return status;
}
