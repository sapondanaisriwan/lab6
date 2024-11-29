#include <iostream>
using namespace std;

int main()
{
    int even, odd = 0;
    int number;
    while (true)
    {

        cout << "Enter an integer: ";
        cin >> number;

        if (number == 0)
        {
            cout << "#Even numbers = " << even << endl;
            cout << "#Odd numbers = " << odd;
            break;
        }

        if (number % 2 == 0)
        {
            even = even + 1;
        }
        else
        {
            odd += 1;
        }
    }
    return 0;
}
