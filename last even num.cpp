#include <iostream>
using namespace std;

int n, lastDigit,lastDigit2, dig, rev;


int main() {

	cin >> n;
	while (n > 0) {

		lastDigit = n % 10;
		rev = rev * 10 + lastDigit;

		n /= 10;
	}
	while(rev > 0) {
		lastDigit2 = rev % 10;
		if (lastDigit2 % 2 == 0) {

			dig = lastDigit2;
		}

		rev /= 10;
	}

	cout << dig;
	return 0;
}
