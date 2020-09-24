//Calculator using switch statements.
#include <iostream>
using namespace std;


int main()
{
    cout << "Welcome to the 4-function calculator.\n";
    cout << "Choose a function to use.\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    int choice;
    cin >> choice; // The user will enter a number 1 through 4.

    float n1; // These need to be floats so that division works properly.
    float n2;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    float result;

    switch(choice){
        case 1: // Addition
            result = n1 + n2;
            break;
        case 2: // Subtraction
            result = n1 - n2;
            break;
        case 3: // Multiplication
            result = n1 * n2;
            break;
        case 4: // Division
            result = n1 / n2;
            break;
    }
    cout << "The answer is: " << result;
}