#include <iostream>
#include <string>
using namespace std;

int main()
{

    int Number;
    string Name;
    string Country;

    cout << "Enter your number : ";
    cin >> Number;

    // this is what fix the problem it removes the \n that cin left it before in the buffer
    cin.ignore(1, '\n');

    cout << "Enter your name : ";
    getline(cin, Name);

    cout << "Enter your country : ";
    getline(cin, Country);


    return 0;
}
