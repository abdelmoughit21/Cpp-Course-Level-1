#include <iostream>
#include <string>
using namespace std;


int main()
{

    string text1 = "United";

    cout << "Text Length : " << text1.length() << endl;
    cout << "character at index zero : " << text1[0] << endl;
    cout << "character at position 5 : " << text1[4] << endl;

    string text2 = "States";

    //Concatenation of two strings 
    string Country = text1 + text2;

    cout << "Country is " << Country << endl;

    string S1 = "55";

    //Convert string to integer

    cout << stoi(S1) << endl;



    /*
    
    A string variable contains a collection of characters surounded by double quotes.

    is an array of characters.
    
    */

    return 0;
}
