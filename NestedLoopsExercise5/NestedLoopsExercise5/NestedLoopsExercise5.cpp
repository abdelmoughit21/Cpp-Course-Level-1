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

void PrintInvertedLettersPattern(int n) {

    for (int i = 65; i <= 65 + n - 1; i++) {

        for (int j = 65; j <= i; j++) {

            cout << char(j) << " ";

        }

        cout << endl;

    }

}

int main()
{

    PrintInvertedLettersPattern(ReadPositiveNumber("Enter your number : "));

    return 0;
}

