#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    int hours, minutes;
    cin >> a >> b >> c >> d;
    hours = c - a;
    minutes = d - b;
    if ( minutes >= 0 ) {
        cout << hours << ' ' << minutes << endl;
    }
    else {
        hours -= 1;
        minutes += 60;
        cout << hours << ' ' << minutes << endl;
    }
    return 0;
}
