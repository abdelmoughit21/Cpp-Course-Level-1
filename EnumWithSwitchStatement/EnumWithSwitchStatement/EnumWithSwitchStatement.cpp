#include <iostream>
using namespace std;

enum enColors { Red = 1, Blue = 2, Green = 3, Yellow = 4 };

void Header() {

    cout << "\n************************************";
    cout << "\nPlease choose the number of your color : ";
    cout << "\n(1) Red";
    cout << "\n(2) Blue";
    cout << "\n(3) Green";
    cout << "\n(4) Yellow";
    cout << "\n************************************\n";

}

enColors ReadColor(string message) {

    short int num = 0;

    do {

        cout << message;
        cin >> num;

    } while (num < 1 || num > 4);

    return (enColors)num;

}

void GetYourColor(enColors Color) {

    switch (Color) {

    case enColors::Red:
        system("color 4f");
        break;
    case enColors::Blue:
        system("color 1f");
        break;
    case enColors::Green:
        system("color 2f");
        break;
    case enColors::Yellow:
        system("color 6f");
        break;
    default:
        system("color 4f");

    }

}

int main()
{

    Header();
    GetYourColor(ReadColor("\nYour Choice : "));

    return 0;
}
