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

void PrintNumbersReversePattern(int n) {

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i + 1; j++) {

            cout << j << " ";

        }

        cout << endl;

    }

}

int main()
{

    PrintNumbersReversePattern(ReadPositiveNumber("Enter your number : "));



    return 0;
}

