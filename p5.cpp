#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int start = 3, r = 4;
	while (n--) {
		cout << start << " ";
		start *= r;
	}
}

/*  ******************OUPTUT*********************
    .
Display this GP - 3,12,48,.. upto ‘n’ terms.
7
3 12 48 192 768 3072 12288
Press any key to continue . . .
*/