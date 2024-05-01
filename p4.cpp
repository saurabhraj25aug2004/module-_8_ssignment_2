#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int start = 4, d = 3;
	while (n--) {
		cout << start << " ";
		start += 3;
	}
}

/*  ******************OUPTUT*********************

Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
    10
4 7 10 13 16 19 22 25 28 31
Press any key to continue . . .
*/