// CPP code to illustrate
// the use of asin function

#include <cmath>
#include <iostream>
#include <conio.h>

/*	Source by GeeksForGeeks
	Modified for Learn by Rizky Khapidsyah
	I.D.E : VS2019
*/

using namespace std;

#define PI 3.14159265

int main() {
	double k, ret, val;

	// Take any value between [-1, 1]
	k = 0.5;
	// asin() returns value in the range of [-?/2,?/2]
	ret = asin(k);
	val = (ret * 180) / PI;
	cout << "The arcsine of " << k << " is " << ret << " radians or " << val << " degrees";

	_getch();
	return 0;
}
