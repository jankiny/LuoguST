#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a;
    float Money = 0;
    cin >> a;
    if ( a <= 150 ) {
        Money = a * 0.4463;
    }
    else if ( a <= 400 ) {
        Money = 150*0.4463 + (a-150)*0.4663;
    }
    else {
        Money = 150*0.4463 + 250*0.4663 + (a-400)*0.5663;
    }
    cout.setf(ios::fixed);
    cout << setprecision(1) << Money << endl;
    return 0;
}
