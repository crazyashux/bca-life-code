#include <iostream> //sandhya program
using namespace std;

int main() {
    float temp, converted;
    int choice;

    cout << "1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\nEnter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        converted = (temp * 9 / 5) + 32;
        cout << "In Fahrenheit: " << converted;
    } else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        converted = (temp - 32) * 5 / 9;
        cout << "In Celsius: " << converted;
    } else {
        cout << "Invalid choice!";
    } return 0;
}
