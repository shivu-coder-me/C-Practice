#include <iostream>
using namespace std;

int main()
{
    int num, original, reverse = 0, remainder;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if (original == reverse)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}