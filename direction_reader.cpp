#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	while (cin >> s) {
		if (s == "R") {
			cout << "Right" << endl;
		}

		if (s == "L") {
			cout << "Left" << endl;
		}

		if (s == "U") {
			cout << "Up" << endl;
		}

		if (s == "D") {
			cout << "Down" << endl;
		}
	}	
}
