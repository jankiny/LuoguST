#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream cin("input.txt");
    int n;
    int MaxLink = 1;
    int Link = 1;
    int LastDay, Today;
    cin >> n;
    cin >> LastDay;
    n--;
    while ( n-- ) {
        cin >> Today;
        if ( Today > LastDay )
            Link++;
        else
            Link = 1;
        if ( Link > MaxLink )
            MaxLink = Link;
        LastDay = Today;
    }
    cout << MaxLink << endl;
    return 0;
}
