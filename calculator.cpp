#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    // Declare Variables

    double num1, num2, result;
    char operation;

    // Get user input

    cout << "First Number : ";
    cin >> num1;

    cout << "Second Number : ";
    cin >> num2;

    cout << "Operation( + ,  - ,  * ,  / ,  ^ , % ): ";
    cin >> operation;

    // Perform the calculation based on the operation

    switch (operation)
    {
    case '+':
        result = num1 + num2;
        cout << "The result is, " << result << "\n";
        break;

    case '-':
        result = num1 - num2;
        cout << "The result is, " << result << "\n";
        break;

    case '*':
        result = num1 * num2;
        cout << "The result is, " << result << "\n";
        break;

    case '/':
        result = num1 / num2;

        if (num1 > 0 && num2 == 0)
        {
            cout << "Error!, A Real Number is not divisible by 0 \n";
        }
        else
        {
            cout << "The result is, " << result << "\n";
        };
        break;

    case '^':
        result = pow(num1,num2);
        cout << "The result is, " << result << "\n";
        break;
    
    case '%':

        result = fmod(num1,  num2);

        if (num1 > 0 && num2 <= 0) {
            cout << "A Modulus can not be 0, use a greater number \n";

        } else{
            cout << "The result is, " << result << "\n";
        }
        break;


    default:
        break;
    }
}