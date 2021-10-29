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
    float rez;
    for (int i = 1; i < 6; i++)
    {
        y += i;
    }
    y += 2*x;
	//xyz
    rez = tan(y);
    cout << "Y=" << rez << endl;

    return 0;
}
