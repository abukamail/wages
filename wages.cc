/*
 *      Author: Nasseef Abukamail
 *   Date: 2018-09-05
 * Description: This program calculates wages for a single employee using hours and hourly rate.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
//function prototypes

int main() {
    //0 variable declarationssss
    double hours = 0, rate, wages;
    //1 get the hours
    cout << "Enter the hours: ";
    cin >> hours;
    if (hours < 0) {
        cout << "Invalid number of hours" << endl;
        exit(1);
    }
    //2 get the rate
    cout << "Enter the rate: ";
    cin >> rate;

    //5 Calculate the wages
    if (hours > 40) { //calculate with overtime
        wages = (hours - 40) * 1.5 * rate + 40 * rate;
    }
    else {//calculate without overtime
        wages = hours * rate;
    }
    //4 output the results
    cout << "Employee wages" << endl;
    cout << "Hours:  " << hours << endl;
    cout << "Rate:   " << rate << endl;
    cout << "Wages: $" << wages << endl;

    return 0;
}
