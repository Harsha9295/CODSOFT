#include <iostream>
using namespace std;
int main()
{
    char opration;//this char variable contail which operation is perform
    int FirstNum, SecondNum;//it store the first and second number for opration
    cout << "Enter the First Number :" << endl;//this instruction is echo or display the strings etc;
    cin >> FirstNum;//it will get the input from the user and store the value of first number
    cout << "Select which operation you perform ('+','-','/','*')" << endl;
    cin >> opration;//it will getting input from user which opration is perform user!
    cout << "Enter the Second Number for :" << endl;
    cin >> SecondNum;//this will get an input a second number from user for opration
    switch (opration)
    {
    case '+':
    {
        cout << "You Perform Addition :" << (FirstNum + SecondNum) << endl;//this instruction is add two numbers and Display the ADDITION
        break;
    }
    case '-':
    {
        cout << "You Perform Substraction :" << (FirstNum - SecondNum) << endl;//this instruction is sub two numbers and Display the SUBSTRACTION
        break;
    }
    case '/':
    {
        cout << "You Perform Division :" << (FirstNum / SecondNum) << endl;//this instruction is and divide numbers and Display the Division
        break;
    }
    case '*':
    {
        cout << "You Perform Multiplication :" << (FirstNum * SecondNum) << endl;//this instruction is multi two numbers and Display the Multiplicatin
        break;
    }
    default:
    {
        cout << "Please Select Write Opration Method";//this instruction is execute when user taking wrong input
        break;
    }
    }

    return 0;
}
