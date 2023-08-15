#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int Number_of_Words(const string& Fname);//forward Decleration
int main() {
    string Fname;
    cout << "Enter Your file name For Word Count (Ex: abc.txt ): ";

    cin >> Fname;//Getting File Name From User

    int count = Number_of_Words(Fname);//it will store the number of word's in file and passing to the function
    if (count >= 0) 
    {
        //this instruction is execute when the word count is greater than zero (0)
        cout << "The total word in the file "<<Fname<< " is :" <<count <<endl;//It will show the total number of word count
    }

    return 0;
}

int Number_of_Words(const string& Fname) {
    ifstream data(Fname);//it will proceed the file data
    if (!data.is_open()) {
        //this instruction is execute when the file is exist or file is not open
        cout << "File Is Not Opend Or Not Exist: " << Fname <<endl;//it will display the output file is not open or Not Exist on Screen
        return -1;//it will return -1 to the function
    }
    else
    {
        string lines;
        int Count = 0;
        while (getline(data, lines)) //it will getting line from the data file
        {
            istringstream my_stream(lines);
            string no_of_words;
            while (my_stream >> no_of_words) {
                Count++;//it will increment when conditio is true
                }
        }
        data.close();//it will close the file
        return Count;//it will return Count to the function
    }
}