#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
	fstream f;
	f.open("input.txt", ios::in);
	string text;
	getline(f, text);
	f.close();
	string a = " abcdefghijklmnopqrstuvwxyz";
	

	int s = text.length();
	string ntext;

	for (int i = 0; i <= s-1; i++) {
		if (text[i] != char(32)) {
			ntext += string(1, a[27 - a.find(tolower(text[i]))]);
		}
		else {
			ntext += text[i];
		}
	}
	f.open("input.txt", ios::out);
	f << ntext;
	f.close();
	
}