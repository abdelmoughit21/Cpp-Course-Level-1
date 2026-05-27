#include <iostream>
using namespace std;

int MyFunction(int Num1, int Num2) {

    return Num1 + Num2;

}

void MyProcedure(int num) {

    cout << "\nMy number is " << num;

}

int main()
{

    cout << MyFunction(10, 50) << endl;

    MyProcedure(80);

    /*
    
    Function : is a block of code that performs a task and returns a value.
    Procedure : is a block of code that performs a task and doesn't return a value.
    
    */


    return 0;
}

