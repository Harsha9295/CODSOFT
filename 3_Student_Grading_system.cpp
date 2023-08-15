#include <iostream>
using namespace std;
int Max(int Marks[],int size);//forward Decleration
int Min(int Marks[],int size);//forward Decleration
int main()
{
    int no_of_student, i, Total = 0;//it will store the integer value
    float Avg;//it will store the floatting value
    cout << "Enter the number of student:";//it will display as it is
    cin >> no_of_student;//taking input fro user
    string name[no_of_student];//it will store the name's of student,we will use the array here for store the name's 
    int Marks[no_of_student];//it will store the marks of student
    for (i = 0; i < no_of_student; i++)
    {
        //this loop is starting with 0 and end with nunmer of student(no_of_student) -1) time's 
        cout << "Enter the name of student " << i + 1 << " :";//it will display user inputting which student number marks
        cin >> name[i];//it will store the name of student into array
        cout<< "Enter the Grade's of student " << i + 1 << " :";
        cin >> Marks[i];//it will store the marks of student into array
        Total = Total + Marks[i];//it will calculate the total or marks of all student according array
    }
    
    Avg = (float(Total) /(no_of_student));//it will calculate the avg marks
    cout << "The Average Grade's Is :" << Avg <<endl;//it will dispaly the avg marks
    cout << "The Max Grade's Is :" << Max(Marks,no_of_student)<< endl;//it will display the Maximum marks from all the student
    cout << "The Min Grade's Is :" << Min(Marks,no_of_student)<< endl;//it will display the Minimum marks from all the student
    return 0;
}
int Max(int Marks[],int size)
{
    //this loop is caluculate the Maximum marks
    int i=0,Max=Marks[0];
    for (i = 1; i <size; i++)
    {
        if (Marks[i] > Max)
        {
            Max = Marks[i];
        }
    }
    return Max;//this instruction is return the maximum of to the Max Function 
}
int Min(int Marks[],int size)
{
    //this loop is calculate the Minimum marks
    int i=0,Min=Marks[0];
    for (i = 1; i <size; i++)
    {
        if (Marks[i] < Min)
        {
            Min = Marks[i];
        }
    }
    return Min;//this instruction is return the minimum of to the Min Function
}