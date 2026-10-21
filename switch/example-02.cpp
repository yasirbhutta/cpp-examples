// ### Example 2: Addition, Subtraction, Multiplication and Division

#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch (op)
    {
        case '+':
            cout << "Result = " << num1 + num2;
            break;

        case '-':
            cout << "Result = " << num1 - num2;
            break;

        case '*':
            cout << "Result = " << num1 * num2;
            break;

        case '/':
            if (num2 != 0)
            {
                cout << "Result = " << num1 / num2;
            }
            else
            {
                cout << "Cannot divide by zero";
            }
            break;

        default:
            cout << "Invalid operator";
    }

    return 0;
}

/*### Modify the code

1. Add the modulus operator `%` using integer variables.
2. Add a message for an invalid operator.
3. Change the program to perform only addition and subtraction.
4. Test division with `num2 = 0`.*/