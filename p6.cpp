#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 0;
	while (i < 26) {
		cout << "ASCII value of " << (char)(i + 'A') << " is " << (int)(i + 'A') << endl;
		i++;
	}
}

/*  ******************OUPTUT*********************
    
Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.
15
ASCII value of A is 65
ASCII value of B is 66
ASCII value of C is 67
ASCII value of D is 68
ASCII value of E is 69
ASCII value of F is 70
ASCII value of G is 71
ASCII value of H is 72
ASCII value of I is 73
ASCII value of J is 74
ASCII value of K is 75
ASCII value of L is 76
ASCII value of M is 77
ASCII value of N is 78
ASCII value of O is 79
ASCII value of P is 80
ASCII value of Q is 81
ASCII value of R is 82
ASCII value of S is 83
ASCII value of T is 84
ASCII value of U is 85
ASCII value of V is 86
ASCII value of W is 87
ASCII value of X is 88
ASCII value of Y is 89
ASCII value of Z is 90

Press any key to continue . . .
*/