//Calculator using only if/else/elsif conditional statements.

 #include <iostream>
 using namespace std;


 int main()
 {
     cout << "Welcome to the 4-function calculator.\n";
     cout << "Choose a function to use.\n";
     cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
     int choice;
     cin >> choice; // The user will enter a number 1 through 4.

     float n1;
     float n2;
     cout << "Enter the first number: ";
     cin >> n1;
     cout << "Enter the second number: ";
     cin >> n2;
     float result;

    
     if (choice == 1) { // Addition
        result = n1 + n2;
     }
     else if (choice == 2) {
         result = n1 - n2;
     }
     else if (choice == 3) {
         result = n1 * n2;
     }
     else if (choice == 4) {
         result = n1 / n2;
     }

    cout << "The answer is: " << result;
 }