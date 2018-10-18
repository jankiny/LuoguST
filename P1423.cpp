#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float g;
    int step = 0;
    cin >> g;
    while ( g > 0 ) {
        g -= 2 * pow(0.98,step);
        step++;
    }
    cout << step << endl;
    return 0;
}
