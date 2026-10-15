// ### Example 4: University Registration Notification

#include <iostream>
using namespace std;

int main()
{
    int admitted, feePaid;

    cout << "Are you admitted? Enter 1 for Yes, 0 for No: ";
    cin >> admitted;

    cout << "Have you paid the fee? Enter 1 for Yes, 0 for No: ";
    cin >> feePaid;

    if (admitted == 1)
    {
        if (feePaid == 1)
        {
            cout << "You can register for courses.";
        }
        else
        {
            cout << "Please pay your semester fee.";
        }
    }
    else
    {
        cout << "Your admission is not confirmed.";
    }

    return 0;
}
