#include <iostream>
#include <string>
using namespace std;

struct stInfo {

    string FirstName;
    string LastName;
    short Age;
    string Phone;

};

string ReadString(string message) {

    string text = "";

    cout << message;
    getline(cin, text);

    return text;

}

stInfo ReadInfo() {

    stInfo Info;

    Info.FirstName = ReadString("Enter your first name : ");
    Info.LastName = ReadString("\nEnter your last name : ");
    Info.Age = stoi(ReadString("\nEnter your age : "));
    Info.Phone = ReadString("\nEnter your phone number : ");

    return Info;

}

void PrintInfo(stInfo Info) {

    cout << "****************************************";
    cout << "\nPerson Info : ";
    cout << "\n****************************************";
    cout << "\nFirst Name  : " << Info.FirstName;
    cout << "\nLast Name   : " << Info.LastName;
    cout << "\nAge         : " << Info.Age;
    cout << "\nPhone       : " << Info.Phone;
    cout << "\n****************************************";

}


int main()
{

    PrintInfo(ReadInfo());


    return 0;
}

