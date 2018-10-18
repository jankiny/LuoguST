#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ifstream cin("input.txt");
    int apple[10], h, i;
    int get = 0;
    for ( i = 0; i < 10; i++ ) {
        cin >> apple[i];
    }
    cin >> h;
    h += 30;
    for ( i = 0; i < 10; i++ ) {
        if ( h >= apple[i] ) {
            get++;
        }
    }
    cout << get << endl;
    return 0;
}
