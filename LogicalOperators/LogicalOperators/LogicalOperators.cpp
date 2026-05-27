#include <iostream>
using namespace std;



int main()
{

    /*
     
     && : Logical AND Operator
     || : Logical OR Operator
     !  : Logical NOT Operator
    
    */

    bool A = 1, B = 0;

    cout << (A && B) << endl;
    cout << !(A && B) << endl;
    cout << (A || B) << endl;
    cout << !(A || B) << endl;
    cout << !A << endl;
    cout << !B << endl;


    return 0;
}


