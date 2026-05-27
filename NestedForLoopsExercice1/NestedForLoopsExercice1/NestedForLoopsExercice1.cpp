#include <iostream>
using namespace std;

void PrintFromAATOZZ() {

    for (int i = 65; i <= 90; i++) {

        for (int j = 65; j <= 90; j++) {

            cout << char(i) << char(j) <<endl;

        }

    }

}

int main()
{

    PrintFromAATOZZ();

    return 0;
}

