#include <iostream>
using namespace std;

// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main()
{
    float num1, num2;
    int choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "\n--- Arithmetic Operations Menu ---\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Result = " << add(num1, num2);
            break;

        case 2:
            cout << "Result = " << subtract(num1, num2);
            break;

        case 3:
            cout << "Result = " << multiply(num1, num2);
            break;

        case 4:
            if (num2 != 0)
                cout << "Result = " << divide(num1, num2);
            else
                cout << "Error: Division by zero is not allowed.";
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}

// Function definitions
float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}


