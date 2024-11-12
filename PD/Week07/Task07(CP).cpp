#include <iostream>
using namespace std;

int main() {
    int period;
    cout << "Enter the period (number of days): ";
    cin >> period;

    int doctors = 7;
    int treated_patients = 0;
    int untreated_patients = 0;

    for (int day = 1; day <= period; ++day) {
        int patients;
        cout << "Enter the number of patients for day " << day << ": ";
        cin >> patients;

        // Every third day, evaluate if an additional doctor is needed
        if (day % 3 == 0 && untreated_patients > treated_patients) {
            doctors++;
        }

        // Calculate treated and untreated patients for the day
        if (patients <= doctors) {
            treated_patients += patients;
        } else {
            treated_patients += doctors;
            untreated_patients += (patients - doctors);
        }
    }

    // Output the results
    cout << "Treated patients: " << treated_patients << endl;
    cout << "Untreated patients: " << untreated_patients << endl;

    return 0;
}
