#include <iostream>
using namespace std;
int Judge( int n, int use[] );
int main()
{
    // 102-333
    int a, b, c;
    int i;
    int use[10];
    for ( a = 102; a <= 333; a++ ) {
        use[0] = 1;
        for ( i = 1; i < 10; i++ ) {
            use[i] = 0;
        }
        if ( Judge( a, use ) ) {
            b = a * 2;
            if ( Judge( b, use ) ) {
                c = a * 3;
                if ( Judge( c, use ) ) {
                    cout << a << ' ' << b << ' ' << c << endl;
                }
            }
        }
    }
    return 0;
}

int Judge( int n, int use[] ) {
    while ( n ) {
        if ( use[n%10] == 0 ) {
            use[n%10]++;
        }
        else {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

