#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int Need;
    int num, price;
    int Money;
    int MinMoney;
    int index;
    fstream cin("input.txt");
    cin >> Need;
    cin >> num >> price;
    MinMoney = price * (Need/num+1);
    while ( cin >> num >> price ) {
        index = Need/num+1;
        if ( Need == num*(index-1))
            index--;
        Money = price * index;
        if ( MinMoney > Money )
            MinMoney = Money;
    }
    cout << MinMoney << endl;
    return 0;
}
