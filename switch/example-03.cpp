// ### Example 3: Weekend or Weekday
#include <iostream>
using namespace std;

int main()
{
    int day;

    cout << "Enter day number (1-7): ";
    cin >> day;

    switch (day)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Weekday";
            break;

        case 6:
        case 7:
            cout << "Weekend";
            break;

        default:
            cout << "Invalid day number";
    }

    return 0;
}

/*### Modify the code

1. Display `"Working Day"` for cases 1–5.
2. Display `"Holiday"` for cases 6–7.
3. Add a message for an invalid day number.*/