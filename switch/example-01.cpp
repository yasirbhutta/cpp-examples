// ### Example 1: Display a Message Based on a Number

#include <iostream>
using namespace std;

int main()
{
    int day;

    cout << "Enter a day number (1-3): ";
    cin >> day;

    switch (day)
    {
        case 1:
            cout << "Monday";
            break;

        case 2:
            cout << "Tuesday";
            break;

        case 3:
            cout << "Wednesday";
            break;

        default:
            cout << "Invalid day number";
    }

    return 0;
}


/*### Modify the code

1. Add Thursday as case `4`.
2. Add Friday as case `5`.
3. Change the prompt to accept numbers from 1 to 5.
4. Test the program with `1`, `4`, and `8`.*/