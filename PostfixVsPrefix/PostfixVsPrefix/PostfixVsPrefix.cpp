#include <iostream>
using namespace std;





int main()
{

    /*
    
      A = B++; A will get the value of B , then B will increase by one.
      A = ++B; B will increase by one , then A will get the value of B.

      A = B--; A will get the value of B , then B will decrease by one.
      A = --B; B will decrease by one , then A will get the value of B.
    
    */

    int B = 10 , A = 0;

    A = B++;
    cout << A << endl;

    A = ++B;
    cout << A << endl;

    A = --B;
    cout << A << endl;

    A = B--;
    cout << A << endl;




    return 0;
}

