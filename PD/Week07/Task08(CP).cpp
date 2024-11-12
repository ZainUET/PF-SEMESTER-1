#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

int main() {
    int count;
    cout << "Enter the number of cargo loads: ";
    cin >> count;

    int minibus_tons = 0, truck_tons = 0, train_tons = 0;
    int total_tons = 0;
    double total_cost = 0.0;

    // Process each cargo load
    for (int i = 0; i < count; ++i) {
        int tonnage;
        cout << "Enter the tonnage of cargo load " << i + 1 << ": ";
        cin >> tonnage;

        if (tonnage <= 3) {
            minibus_tons += tonnage;
            total_cost += tonnage * 200;
        } else if (tonnage <= 11) {
            truck_tons += tonnage;
            total_cost += tonnage * 175;
        } else {
            train_tons += tonnage;
            total_cost += tonnage * 120;
        }

        // Add to total tonnage
        total_tons += tonnage;
    }

    // Calculate the average price per ton
    double avg_price_per_ton = total_cost / total_tons;

    // Calculate the percentage of cargo by each vehicle type
    double minibus_percentage = (static_cast<double>(minibus_tons) / total_tons) * 100;
    double truck_percentage = (static_cast<double>(truck_tons) / total_tons) * 100;
    double train_percentage = (static_cast<double>(train_tons) / total_tons) * 100;

    // Output results
    cout << fixed << setprecision(2);
    cout << "Average price per ton: " << avg_price_per_ton << endl;
    cout << "Minibus: " << minibus_percentage << "%" << endl;
    cout << "Truck: " << truck_percentage << "%" << endl;
    cout << "Train: " << train_percentage << "%" << endl;

    return 0;
}
