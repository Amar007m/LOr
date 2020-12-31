#include <iostream>
using namespace std;

int main(void)
{
    char op;
    float num1, num2;
    cout << "Chose an operant +, -, *, /:\n";
    cin >> op;

    cout << "Give the first number\n";
    cin >> num1;
    cout << "Give the second number\n";
    cin >>num2;


    switch (op)
    {
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            cout << num1 / num2 << endl;
            break;
        default: // this if the choose operant doesn't exist 
            cout << "Error! not existing operant";
            break;

    }




    return 0;

}

