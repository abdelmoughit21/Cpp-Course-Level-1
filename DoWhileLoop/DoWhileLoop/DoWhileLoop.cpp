#include <iostream>
using namespace std;

int ReadNumberInRange(int from, int to) {

    int num = 0;

    do {

        cout << "Enter your number : ";
        cin >> num;

    } while (!(num >= from && num <= to));

    return num;

}

int main()
{


    cout << ReadNumberInRange(10, 50) << endl;



    return 0;
}
