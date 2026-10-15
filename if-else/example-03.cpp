// ### Example 3: Student Grade Notification

#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 80)
    {
        cout << "Grade A - Excellent!";
    }
    else if (marks >= 70)
    {
        cout << "Grade B - Very Good!";
    }
    else if (marks >= 60)
    {
        cout << "Grade C - Good!";
    }
    else if (marks >= 50)
    {
        cout << "Grade D - Pass!";
    }
    else
    {
        cout << "Fail - Improve your performance.";
    }

    return 0;
}

/*
### Modify the code

1. Change the Grade A threshold from 80 to 85.
2. Add a new grade, `"Grade A+"`, for marks of 90 or above.
3. Change the messages to notifications suitable for university students.
4. Add a notification `"Invalid marks"` when marks are below 0 or above 100. Check invalid marks before the grade conditions.
*/