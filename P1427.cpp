#include <iostream>
#include <stack>
#include <fstream>
using namespace std;
int main()
{
    ifstream cin("input.txt");
    stack<int> s;
    int a;
    while ( cin >> a ) {
        if ( a != 0 ) {
            s.push(a);
        }
    }
    while ( s.empty() != true ) {
        cout << s.top() << ' ';
        s.pop();
    }
    cout << endl;
    return 0;
}
