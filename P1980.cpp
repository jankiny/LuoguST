#include <iostream>
using namespace std;
void Judge( int n, int use[] );
int main()
{
    int use[10];
    int i, n;
    int x;
    cin >> n;
    cin >> x;
    for ( i = 0; i < 10; i++ ) {
        use[i] = 0;
    }
    for ( i = 1; i <= n; i++ ) {
        Judge( i, use );
    }
    cout << use[x] << endl;
    return 0;
}

void Judge( int n, int use[] ) {
    while ( n ) {
        use[n%10]++;
        n /= 10;
    }
    return;
}
