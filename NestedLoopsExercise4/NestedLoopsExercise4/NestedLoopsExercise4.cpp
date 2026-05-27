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

void PrintNumbersPattern(int n) {

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {

            cout << j << " ";

        }

        cout << endl;

    }

}

int main()
{

    PrintNumbersPattern(ReadPositiveNumber("Enter your number : "));



    return 0;
}

