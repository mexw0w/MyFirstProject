#include <iostream>
using namespace std;

int main()
{
    char continueWork = 'y';

    while (continueWork == 'y' || continueWork == 'Y')
    {
        double firstNumber;
        double secondNumber;
        char operation;

        cout << "enter first number; " << endl;
        cin >> firstNumber;

        if (cin.fail())
        {
            cout << "You have to write a number!" << endl;
            return 0;
        }
        cout << "enter operation; " << endl;
        cin >> operation;

        if (cin.fail())
        {
            cout << " You have to write an operation!" << endl;
            return 0;
        }
        cout << "enter second number; " << endl;
        cin >> secondNumber;

        if (cin.fail())
        {
            cout << "You have to write a number!" << endl;
            return 0;
        }


        if (operation == '+')
        {
            cout << "Result: " << firstNumber + secondNumber << endl;// сложение
        }
        else if (operation == '-')
        {
            cout << "Result: " << firstNumber - secondNumber << endl; // вычитание
        }
        else if (operation == '*')
        {
            cout << "Result: " << firstNumber * secondNumber << endl; // умножение
        }
        else if (operation == '/' && secondNumber != 0) // поверяем есть ли ноль во втором числе
        {
            cout << "Result: " << firstNumber / secondNumber << endl;
        }
        else if (operation == '/' && secondNumber == 0) // деление
        {
            cout << "You can't divide by zero!" << endl;
        }
        else
        {
            cout << "Write correct operation!" << endl;
        }

        do
        {
            cout << "Do you want to continue? (y/n):" << endl;
            cin >> continueWork;

            if (continueWork != 'y' &&
                continueWork != 'Y' &&
                continueWork != 'n' &&
                continueWork != 'N')
            {
                cout << "Pls enter only 'y' or 'n'!" << endl;
            }
        } while (continueWork != 'y' &&
            continueWork != 'Y' &&
            continueWork != 'n' &&
            continueWork != 'N');
    }

    cout << "calculator finished." << endl;

    return 0;
}