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

void PrintInvertedNumbersPattern(int n) {

    for (int i = 1; i <= n; i++) {

        for (int j = i; j <= n; j++) {

            cout << j << " ";

        }

        cout << endl;

    }

}

int main()
{

    PrintInvertedNumbersPattern(ReadPositiveNumber("Enter your number : "));

    return 0;
}

