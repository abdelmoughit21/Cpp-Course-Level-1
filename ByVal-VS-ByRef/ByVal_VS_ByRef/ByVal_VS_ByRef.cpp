#include <iostream>
using namespace std;

void MyProcedure(int &Num) {

    Num = 6000;

    cout << "\nMy number inside function became : " << Num << endl;

}

int main()
{

    int Num;

    Num = 1000;

    MyProcedure(Num);

    cout << "\nMy number after calling the function became : " << Num << endl;

    cout << "\nThe number refrence is " << &Num << endl;


    return 0;
}

