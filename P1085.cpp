#include <iostream>
#include <fstream>
struct Mood {
    int moodIndex;
    int day;
};
using namespace std;
int main()
{
    ifstream cin("input.txt");
    int a, b;
    int day = 2;
    struct Mood jj;
    cin >> a >> b;
    jj.moodIndex = a + b;
    jj.day = 1;
    while ( day <= 7 ) {
        cin >> a >> b;
        if ( jj.moodIndex < a+b ) {
            jj.moodIndex = a + b;
            jj.day = day;
        }
        day++;
    }
    if ( jj.moodIndex <= 8 ) {
        cout << 0 << endl;
    }
    else
        cout << jj.day << endl;
    return 0;
}
