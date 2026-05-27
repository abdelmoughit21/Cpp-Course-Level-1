#include <iostream>
using namespace std;

int x = 1000;

void MyFunction() {

    int x = 600;

    cout << "The value of x inside MyFunction : " << x << endl;

}


int main()
{

    int x = 100;

    MyFunction();

    cout << "\nThe value of x inside the main function is " << x << endl;

    ::x++;

    cout << "\nThe value of the Global variable x is " << ::x << endl;


    /*
    
    Local variables :

    Exists only inside the function

    Cannot be accessed outside that function

    Created when the function starts

    Destroyed when the function ends
    
    */

    /*
    
    Global Variabls : A global variable is declared outside all functions.
    
    Can be accessed by all functions

    Exists during the whole program execution

    Created when program starts

    Destroyed when program ends
    
    */



    return 0;
}
