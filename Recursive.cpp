#include <iostream>
#include <time.h>
using namespace std;

long gdc(long long x, long long y);

int main() {
	clock_t c0, c1, c2, c3;
	long long x = 12586269025, y = 1836311903;

	c0 = clock();
	cout << "\nGDC of " << x << " and " << y << " is " << gdc(x, y) << endl;
	c1 = clock();

	float time1 = (float)(c1 - c0) / CLOCKS_PER_SEC;
	cout << "\nTIME: " << time1 << endl;

	return 0;
}

long gdc(long long x, long long y) {
	if (x % y == 0) {
		cout << "GDC ( " << x << " , " << y << " )" << endl;
		return y;
	}
	else if (x > y) {
		cout << "GDC ( " << x << " , " << y << " )" << endl;
		return gdc(x % y, y);
	}
	else if (x < y) {
		cout << "GDC ( " << x << " , " << y << " )" << endl;
		return gdc(y % x, x);
	}

}