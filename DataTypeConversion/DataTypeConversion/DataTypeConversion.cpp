#include <iostream>
#include <string>
using namespace std;

int main()
{

    /*
    
    Important :

    From Higher Data type to Lower data type you will loose data

    From Lower Data type to Hight Data type : No Data Loss.

    There are two types of conversion Implicit and Explicit.
    
    */

    int Num1 = 13;

    //int to float
    cout << float(Num1) << endl; // Explicit Conversion
    cout << (float)Num1 << endl; // Explicit Conversion

    cout << endl << endl;

    //int to double
    cout << double(Num1) << endl;
    cout << (double)(Num1) << endl;

    cout << endl << endl;

    float Num2 = 3.6;
    double Num3 = 3.564;

    // float to int
    cout << int(Num2) << endl;
    cout << (int)Num2 << endl;

    cout << endl << endl;

    // double to int
    cout << int(Num3) << endl;
    cout << (int)Num3 << endl;

    cout << endl << endl;

    // Int , float or double to string 
    cout << to_string(Num1) << endl;
    cout << to_string(Num2) << endl;
    cout << to_string(Num3) << endl;

    cout << endl << endl;

    string S1 = "10.3";

    //string to int
    cout << stoi(S1) << endl;

    //string to float 
    cout << stof(S1) << endl;

    //string to double
    cout << stod(S1) << endl;


    return 0;
}


