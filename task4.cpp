#include <iostream>
#include <iomanip> 
using namespace std;

int main() 
{
    char serviceCode, timeOfDay;
    double billAmount = 0.0;
    int minutesUsed, dayMinutes, nightMinutes;

    cout << "Enter service code (r for regular, p for premium): ";
    cin >> serviceCode;

    if (serviceCode == 'r' || serviceCode == 'R') 
       {
        cout << "Enter the number of minutes used: ";
        cin >> minutesUsed;

        billAmount = 10.00;  
        if (minutesUsed > 50) 
        {
            billAmount += (minutesUsed - 50) * 0.20;
        }

        cout << "Service type: Regular" << endl;
        cout << "Minutes used: " << minutesUsed << endl;
        cout << fixed << setprecision(2) << "Amount due: $" << billAmount << endl;

        } 
     else if (serviceCode == 'p' || serviceCode == 'P') 
       {
        cout << "Enter the number of minutes used during the day: ";
        cin >> dayMinutes;
        cout << "Enter the number of minutes used during the night: ";
        cin >> nightMinutes;

        billAmount = 25.00; 
        if (dayMinutes > 75) 
        {
            billAmount += (dayMinutes - 75) * 0.10;
        }

        if (nightMinutes > 100) 
        {
            billAmount += (nightMinutes - 100) * 0.05;
        }

        cout << "Service type: Premium" << endl;
        cout << "Day minutes used: " << dayMinutes << endl;
        cout << "Night minutes used: " << nightMinutes << endl;
        cout << fixed << setprecision(2) << "Amount due: $" << billAmount << endl;

      } 
    else 
    {
        cout << "Error: Invalid service code entered!" << endl;
    }

    return 0;
}
