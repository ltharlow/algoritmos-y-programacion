// Leonardo Torres Harlow
#include <iostream>
using namespace std;

int main() {
	float val1, val2, res;

	cout << "Escribe dos números: ";
	cin >> val1 >> val2;

	if (val1 < val2) {
		res = val1 + val2;
	} else if (val1 > val2) {
		res = val1 - val2;
	} else {
		res = val1 * val2;
	}

	cout << "Result: " << res << endl;
	return 0;
}
