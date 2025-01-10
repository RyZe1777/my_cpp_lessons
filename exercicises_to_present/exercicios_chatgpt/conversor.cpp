#include <iostream>
using namespace std;

// Function to convert between miles and kilometers
void convertLength() {
    double miles, kilometers;
    int choice;

    cout << "Length Conversion:\n";
    cout << "1. Miles to Kilometers\n";
    cout << "2. Kilometers to Miles\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter length in miles: ";
        cin >> miles;
        kilometers = miles * 1.60934; // 1 mile = 1.60934 kilometers
        cout << miles << " miles is equal to " << kilometers << " kilometers.\n";
    } else if (choice == 2) {
        cout << "Enter length in kilometers: ";
        cin >> kilometers;
        miles = kilometers / 1.60934; // 1 kilometer = 0.621371 miles
        cout << kilometers << " kilometers is equal to " << miles << " miles.\n";
    } else {
        cout << "Invalid choice.\n";
    }
}

// Function to convert between pounds and kilograms
void convertWeight() {
    double pounds, kilograms;
    int choice;

    cout << "\nWeight Conversion:\n";
    cout << "1. Pounds to Kilograms\n";
    cout << "2. Kilograms to Pounds\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter weight in pounds: ";
        cin >> pounds;
        kilograms = pounds * 0.453592; // 1 pound = 0.453592 kilograms
        cout << pounds << " pounds is equal to " << kilograms << " kilograms.\n";
    } else if (choice == 2) {
        cout << "Enter weight in kilograms: ";
        cin >> kilograms;
        pounds = kilograms / 0.453592; // 1 kilogram = 2.20462 pounds
        cout << kilograms << " kilograms is equal to " << pounds << " pounds.\n";
    } else {
        cout << "Invalid choice.\n";
    }
}

// Function to convert between Celsius and Fahrenheit
void convertTemperature() {
    double celsius, fahrenheit;
    int choice;

    cout << "\nTemperature Conversion:\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
        fahrenheit = (celsius * 9/5) + 32; // Celsius to Fahrenheit formula
        cout << celsius << " Celsius is equal to " << fahrenheit << " Fahrenheit.\n";
    } else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;
        celsius = (fahrenheit - 32) * 5/9; // Fahrenheit to Celsius formula
        cout << fahrenheit << " Fahrenheit is equal to " << celsius << " Celsius.\n";
    } else {
        cout << "Invalid choice.\n";
    }
}

int main() {
    int choice;

    cout << "Welcome to the Unit Converter!\n";
    cout << "Select the type of conversion:\n";
    cout << "1. Length (Miles/Kilometers)\n";
    cout << "2. Weight (Pounds/Kilograms)\n";
    cout << "3. Temperature (Celsius/Fahrenheit)\n";
    cout << "Enter your choice (1/2/3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            convertLength();
            break;
        case 2:
            convertWeight();
            break;
        case 3:
            convertTemperature();
            break;
        default:
            cout << "Invalid choice! Please choose 1, 2, or 3.\n";
    }

    return 0;
}