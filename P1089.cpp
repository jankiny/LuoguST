#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream cin("input.txt");
    int Mouth = 1;
    int Save = 0;
    int Hand = 0;
    int Spend;
    while ( Mouth <= 12 ) {
        cin >> Spend;
        Hand += 300;
        Hand -= Spend;
        if ( Hand < 0 ) {
            cout << '-' << Mouth << endl;
            return 0;
        }
        else if ( Hand/100 > 0 ) {
            Save += 100*(Hand/100);
            Hand -= 100*(Hand/100);
        }
        Mouth++;
    }
    cout << Hand+Save*1.2 << endl;
    return 0;
}
