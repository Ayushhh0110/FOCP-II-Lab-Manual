//A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a solution to 
//convert Fahrenheit temperature into Centigrade or vice versa.
#include <iostream>
using namespace std;
int main() {
    float temperature;
    char scale;
    cout << "Enter temperature followed by scale (C for Celsius, F for Fahrenheit): ";
    cin >> temperature >> scale;
    if(scale == 'C' || scale == 'c') {
        float fahrenheit = (temperature * 9/5) + 32;
        cout << "Temperature in Fahrenheit: " << fahrenheit << " F" << endl;
    } else if(scale == 'F' || scale == 'f') {
        float celsius = (temperature - 32) * 5/9;
        cout << "Temperature in Celsius: " << celsius << " C" << endl;
    } else {
        cout << "Invalid scale entered. Please use 'C' for Celsius or 'F' for Fahrenheit." << endl;
    }
    return 0;
}