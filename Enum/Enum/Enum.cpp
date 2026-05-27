#include <iostream>
using namespace std;

enum enColor{ Red  , Blue , Green , Yellow };

int main()
{
    
    /*
    
    An enumaration is a distinct type whose value is restricted to a range of values.

    it's a user defined data type.
    
    */

    enColor Color;

    Color = enColor::Green;

    cout << "Your color is " << Color << endl;

    return 0;
}

