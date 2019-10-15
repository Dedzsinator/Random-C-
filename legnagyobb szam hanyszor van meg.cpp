#include <iostream> 
using namespace std;

int n, max = 0, rem;

int frecvent(int n, int d)
{
	int c = 0;

	while (n > 0) {

		if (n % 10 == d)
			c++;
		n = n / 10;
	}

	return c;
}

int main() {


	cout << "Adj meg egy szamot: ";
	cin >> n;
	int nold = n;

	while (n != 0)
	{
		rem = n % 10;
		if (rem > max)
		{
			max = rem;
		}
		n = n / 10;
	}

	cout << "a legnagyobb szamjegy a "<< nold <<"-ban: " << max << endl;
	cout << " " << endl;
	cout << nold << "-ben" << " a legnagyobb szam " <<  frecvent(nold, max) << "-szor van benne" << endl;

	return 0;
}