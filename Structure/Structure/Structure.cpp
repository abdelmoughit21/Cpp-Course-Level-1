#include <iostream>
using namespace std;

struct stCar {

    string Brand;
    string Model;
    int Year;

};

int main()
{

    /*
    
    Structures (also Known as structs) are a way to group several realted variables into one place.
    Each varibale in the structure is known as a member of the structure.
    
    */

    stCar Car;

    Car.Brand = "BMW";
    Car.Model = "X5";
    Car.Year = 2000;

    cout << Car.Brand << " " << Car.Model << " " << Car.Year << endl;

    return 0;
}

