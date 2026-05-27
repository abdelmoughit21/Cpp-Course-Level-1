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

    Info.FirstName = ReadString("\nEnter your first name : ");
    Info.LastName = ReadString("\nEnter your last name : ");
    Info.Age = stoi(ReadString("\nEnter your age : "));
    Info.Phone = ReadString("\nEnter your phone number : ");

    return Info;

}

void ReadArray(stInfo arr[], int& arrLength) {

    arrLength = stoi(ReadString("Enter How many persons do you : "));

    for (int i = 0; i < arrLength; i++) {

        cout << "\nEnter Person " << i + 1 << " Info :" << endl;

        arr[i] = ReadInfo();

    }

}

void PrintArray(stInfo arr[], int arrLength) {

    for (int i = 0; i < arrLength; i++) {

        cout << "\nPerson " << i + 1 << " Info : ";
        cout << "\n*************************************";
        cout << "\nFirst Name : " << arr[i].FirstName;
        cout << "\nLast Name  : " << arr[i].LastName;
        cout << "\nAge        : " << to_string(arr[i].Age);
        cout << "\nPhone      : " << arr[i].Phone;
        cout << "\n*************************************\n";

    }

}

int main()
{

    stInfo arr[100];

    int arrLength = 0;

    ReadArray(arr, arrLength);
    PrintArray(arr, arrLength);

    return 0;
}