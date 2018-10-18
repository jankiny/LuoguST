#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string GetLine();

int main()
{
	string Word, Article;
	Word = GetLine();
	Article = GetLine(); 
	cout << Word << endl;
	cout << Article << endl;
	return 0;
}

string GetLine()
{
	string s;
	char c;
	s = "";
 	while ( cin >> c && c != '\n' )
	 	s += c;
	return s;
}