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

void FillArray(int arr[], int& length) {

    length = ReadPositiveNumber("Enter how many elements do you want : ");

    for (int i = 0; i < length; i++) {

        arr[i] = i + 1;

    }

}

void PrintArray(int arr[], int length) {

    for (int i = 0; i < length; i++) {

        cout << arr[i] << " ";

    }

}

int main()
{

    int arr[100], arrLength = 0;

    FillArray(arr, arrLength);
    PrintArray(arr, arrLength);

    /*
    
    Array is a variable that can store multiple values of the same type.

    For instance : string is an array that can store multiple characters.

    Array's index starts from zero.

    */

    return 0;
}
