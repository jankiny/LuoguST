#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
#include <algorithm>
#define NOTFIND 4294967295
using namespace std;
long long stoi( string s ); 
int main()
{
    string s;
    char ss[1000];
    scanf("%s", ss);
    s = ss;
    int i, j;
    long long n;
    int flag = 0;
    for ( i = 0; i < s.length(); i++ ) {
        char c;
        string Sub;
        Sub = "";
        while ( i < s.length() && (c = s[i]) >= '0' && c <= '9' ) {
            Sub = Sub + c;
            i++;
        }
        if ( flag ) {
            j = 0;
            while ( Sub[j] == '0' ) {
                Sub.erase(Sub.begin());
            }
            reverse(Sub.begin(), Sub.end());
        }
        else {
            reverse(Sub.begin(), Sub.end());
            j = 0;
            while ( Sub[j] == '0' )
                Sub.erase(Sub.begin());
        }
        if ( Sub.empty() == 1 )
            cout << '0';
        else
            cout << Sub;
//        if ( Sub.length() <= 10) {
//            n = stoi( Sub );
//            cout << n;
//        }
//        else {
//            cout << Sub;
//        }
        if ( c == '.' )
            flag = 1;
        if ( i == s.length() )
            cout << endl;
        else if ( i+1 == s.length() )
            cout << c << endl;
        else
            cout << c;
    }
    return 0;
}
long long stoi( string s ) 
{
    long long n = 0;
    int i;
    i = 0;
    while ( s[i] == '0' )
        s.erase(s.begin());
    while ( s.empty() != true ) {
        n += (s[0]-'0')*pow(10,s.length()-1);
        s.erase(s.begin());
    }
    return n;
}
