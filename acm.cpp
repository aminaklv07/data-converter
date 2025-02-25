#include <iostream>  // is a header file library that lets us work with input and output objects, such as cout and cin
using namespace std;  // allows use names for objects and variables from the standard library.

// Functions for length conversion
// 'return' returns the computed result back to the caller
double kmToM(double km) { return km * 1000; } // Converts kilometers to meters
double mToKm(double m) { return m / 1000; }   // Converts meters to kilometers
double mToCm(double m) { return m * 100; }    // Converts meters to centimeters
double cmToM(double cm) { return cm / 100; }   // Converts centimeters to meters
double cmToMm(double cm) { return cm * 10; }   // Converts centimeters to millimeters
double mmToCm(double mm) { return mm / 10; }   // Converts millimeters to centimeters

// Functions for weight conversion
double kgToG(double kg) { return kg * 1000; }   // Converts kilograms to grams
double gToKg(double g) { return g / 1000; }     // Converts grams to kilograms
double gToMg(double g) { return g * 1000; }    // Converts grams to milligrams
double mgToG(double mg) { return mg / 1000; }  // Converts milligrams to grams
double kgToNewton(double kg) { return kg * 9.81; } // Converts kilograms to Newtons (force)

// Functions for temperature conversion
double cToF(double c) { return (c * 9/5) + 32; }  // Converts Celsius to Fahrenheit
double fToC(double f) { return (f - 32) * 5/9; }  // Converts Fahrenheit to Celsius
double cToK(double c) { return c + 273.15; }  // Converts Celsius to Kelvin
double kToC(double k) { return k - 273.15; }  // Converts Kelvin to Celsius

// Functions for energy conversion
double jouleToCal(double j) { return j / 4.184; }  // Converts Joules to Calories
double calToJoule(double cal) { return cal * 4.184; }  // Converts Calories to Joules
double jouleToKWh(double j) { return j / 3.6e6; }  // Converts Joules to kilowatt-hours
double kWhToJoule(double kWh) { return kWh * 3.6e6; }  // Converts kilowatt-hours to Joules

// Functions for speed conversion
double mpsToKmph(double mps) { return mps * 3.6; }  // Converts meters per second to kilometers per hour
double kmphToMps(double kmph) { return kmph / 3.6; }  // Converts kilometers per hour to meters per second
double kmphToMph(double kmph) { return kmph * 0.621371; }  // Converts kilometers per hour to miles per hour
double mphToKmph(double mph) { return mph / 0.621371; }  // Converts miles per hour to kilometers per hour

// Everything inside {} is the function’s body
// Without {}, the compiler wouldn’t know where the function’s logic begins or ends.

// Functions to display menus for user selection and handle input

// Menu for length conversion
void lengthMenu() {  // 'void' means this function does not return any value
    int choice;  // 'int' is used for whole number inputs from the user
    double value; // 'double' allows decimal values for conversions
    cout << "\n=== Length Converter ===\n";
    cout << "1. Km to M\n2. M to Km\n3. M to Cm\n4. Cm to M\n5. Cm to Mm\n6. Mm to Cm\n"; // displays 6 types of converters in length
    cout << "Enter choice: "; // displays message
    cin >> choice; // enter choice
    cout << "Enter value: "; // displays message
    cin >> value; // enter value

    // 'void' only display menus and take user input and do not return any computed value, instead, they directly print the results inside the function
    
    switch(choice) { // 'switch' is used to handle multiple cases based on user input
        case 1: cout << value << " km = " << kmToM(value) << " m\n"; break;  
        case 2: cout << value << " m = " << mToKm(value) << " km\n"; break;
        case 3: cout << value << " m = " << mToCm(value) << " cm\n"; break;
        case 4: cout << value << " cm = " << cmToM(value) << " m\n"; break;
        case 5: cout << value << " cm = " << cmToMm(value) << " mm\n"; break;
        case 6: cout << value << " mm = " << mmToCm(value) << " cm\n"; break;
        default: cout << "Invalid choice!\n";  // Default case handles invalid inputs
    }
}
// switch(choice) means we are telling the program to evaluate the value of choice and then execute the matching case
// kmToM(value) calls the function kmToM, passing the user-provided value as an argument and computed result is returned to where the function was called
// same concept with others
// we use break in each case inside a switch statement to prevent fall-through behavior, meaning execution stops after a match instead of continuing to the next case

void weightMenu() {
    int choice;
    double value;
    cout << "\n=== Weight Converter ===\n";
    cout << "1. Kg to G\n2. G to Kg\n3. G to Mg\n4. Mg to G\n5. Kg to Newton\n";
    cout << "Enter choice: ";
    cin >> choice;
    cout << "Enter value: ";
    cin >> value;
    
    switch(choice) {
        case 1: cout << value << " kg = " << kgToG(value) << " g\n"; break;
        case 2: cout << value << " g = " << gToKg(value) << " kg\n"; break;
        case 3: cout << value << " g = " << gToMg(value) << " mg\n"; break;
        case 4: cout << value << " mg = " << mgToG(value) << " g\n"; break;
        case 5: cout << value << " kg = " << kgToNewton(value) << " N\n"; break;
        default: cout << "Invalid choice!\n";
    }
}

void temperatureMenu() {
    int choice;
    double value;
    cout << "\n=== Temperature Converter ===\n";
    cout << "1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n3. Celsius to Kelvin\n4. Kelvin to Celsius\n";
    cout << "Enter choice: ";
    cin >> choice;
    cout << "Enter value: ";
    cin >> value;
    
    switch(choice) {
        case 1: cout << value << " °C = " << cToF(value) << " °F\n"; break;
        case 2: cout << value << " °F = " << fToC(value) << " °C\n"; break;
        case 3: cout << value << " °C = " << cToK(value) << " K\n"; break;
        case 4: cout << value << " K = " << kToC(value) << " °C\n"; break;
        default: cout << "Invalid choice!\n";
    }
}

void energyMenu() {
    int choice;
    double value;
    cout << "\n=== Energy Converter ===\n";
    cout << "1. Joules to Calories\n2. Calories to Joules\n3.Joules to kWh\n4. kWh to Joules\n";
    cout << "Enter choice: ";
    cin >> choice;
    cout << "Enter value: ";
    cin >> value;
    
    switch(choice) {
        case 1: cout << value << " J = " << jouleToCal(value) << " cal\n"; break;
        case 2: cout << value << " cal = " << calToJoule(value) << " J\n"; break;
        case 3: cout << value << " J = " << jouleToKWh(value) << " kWh\n"; break;
        case 4: cout << value << " kWh = " << kWhToJoule(value) << " J\n"; break;
        default: cout << "Invalid choice!\n";
    }
}

void speedMenu() {
    int choice;
    double value;
    cout << "\n=== Speed Converter ===\n";
    cout << "1. m/s to km/h\n2. km/h to m/s\n3. km/h to mph\n4. mph to km/h\n";
    cout << "Enter choice: ";
    cin >> choice;
    cout << "Enter value: ";
    cin >> value;
    
    switch(choice) {
        case 1: cout << value << " m/s = " << mpsToKmph(value) << " km/h\n"; break;
        case 2: cout << value << " km/h = " << kmphToMps(value) << " m/s\n"; break;
        case 3: cout << value << " km/h = " << kmphToMph(value) << " mph\n"; break;
        case 4: cout << value << " mph = " << mphToKmph(value) << " km/h\n"; break;
        default: cout << "Invalid choice!\n";
    }
}

// Similarly, functions weightMenu(), temperatureMenu(), energyMenu(), speedMenu() are created
// These provide user options and call the corresponding conversion function


int main() { // entry point of main function
    int choice; // Used to store user menu selection
    
    do {  // 'do' ensures that the menu runs at least once before checking the condition
        cout << "\n=== Unit Converter ===\n";
        cout << "1. Length\n2. Weight\n3. Temperature\n4. Energy\n5. Speed\n6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) { // Handles different menu options
            case 1: lengthMenu(); break; // if choice == 1, the lengthMenu() function is called to handle length conversions
            case 2: weightMenu(); break;  // if choice == 2, the weightMenu() function is called to handle weight conversions
            case 3: temperatureMenu(); break; // if choice == 3, the temperatureMenu() function is called to handle temperature conversions
            case 4: energyMenu(); break; // if choice == 4, the energyMenu() function is called to handle energy conversions
            case 5: speedMenu(); break;  // if choice == 5, the speedMenu() function is called to handle speed conversions
            case 6: cout << "Exiting...\n"; break; // if choice is 6, displays message and then exits the switch statement
            default: cout << "Invalid choice!\n";  // if none of the cases match, this executes, warning the user of an invalid input.
        }
    } while(choice != 6); // 'while' ensures the loop continues until the user selects 'Exit'
    
    return 0; // signals successful execution of the program
}