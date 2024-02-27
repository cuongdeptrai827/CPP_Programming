#include <iostream>
#include "lab2.h"

using namespace std;

int main() {
    Dathuc f1, f2, result;
    float x;
    int choice;

    do {
        cout << "====== MENU ======" << endl;
        cout << "1. Enter the first polynomial" << endl;
        cout << "2. Enter the second polynomial" << endl;
        cout << "3. Print the first polynomial" << endl;
        cout << "4. Print the second polynomial" << endl;
        cout << "5. Access the coefficient of the first polynomial by index" << endl;
        cout << "6. Copy the content of the first polynomial to another object" << endl;
        cout << "7. Evaluate the first polynomial at a point" << endl;
        cout << "8. Calculate the sum of two polynomials" << endl;
        cout << "9. Calculate the difference of two polynomials" << endl;
        cout << "10. Calculate the product of two polynomials" << endl;
        cout << "11. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the first polynomial:" << endl;
                cin >> f1;
                break;
            case 2:
                cout << "Enter the second polynomial:" << endl;
                cin >> f2;
                break;
            case 3:
                cout << "First polynomial: " << f1 << endl;
                break;
            case 4:
                cout << "Second polynomial: " << f2 << endl;
                break;
            case 5:
                int index;
                cout << "Enter the index of the coefficient to access: ";
                cin >> index;
                cout << "The coefficient of the first polynomial at index " << index << " is: " << f1[index] << endl;
                break;
            case 6:
                result = f1;
                cout << "Copied the content of the first polynomial to another object." << endl;
                break;
            case 7:
                cout << "Enter the value of x: ";
                cin >> x;
                cout << "The value of the first polynomial at x = " << x << " is: " << f1(x) << endl;
                break;
            case 8:
                result = f1 + f2;
                cout << "The sum of two polynomials is: " << result << endl;
                break;
            case 9:
                result = f1 - f2;
                cout << "The difference of two polynomials is: " << result << endl;
                break;
            case 10:
                result = f1 * f2;
                cout << "The product of two polynomials is: " << result << endl;
                break;
            case 11:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

    } while (choice != 11);

    return 0;
}

