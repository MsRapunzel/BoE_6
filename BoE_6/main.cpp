#include <iostream>
#include <iomanip>
#define USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()

{

    double y=0, x;
    //this is test
    cout << "Enter x = ";
    cin >> x;
    // xyz
    for (int i = 1; i < 6; i++)
    {
        y += i;
    }
    y += 2*x;
    cout << "Y=" << y << endl;

    return 0;
}
