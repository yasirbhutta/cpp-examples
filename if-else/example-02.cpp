// ### Example 2: Pass or Fail

#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 50)
    {
        cout << "Congratulations! You passed.";
    }
    else
    {
        cout << "You failed. Work harder.";
    }

    return 0;
}

/*
### Modify the code

1. Change the passing marks from 50 to 40.
2. Replace the messages with `"Pass"` and `"Fail"`.
3. Change the program to check whether a number is positive or not positive.
*/