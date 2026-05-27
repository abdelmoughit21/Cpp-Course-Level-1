#include <iostream>
using namespace std;

int ReadPositiveNumber(string message) {

    int num = 0;

    do {

        cout << message;
        cin >> num;

    } while (num <= 0);

    return num;

}

void PrintStarsPattern(int n) {

    for (int i = n; i >= 1; i--) {

        for (int j = 1; j <= i; j++) {

            cout << "*";

        }

        cout << endl;

    }

}

int main()
{

    PrintStarsPattern(ReadPositiveNumber("Enter your number : "));


    return 0;
}


