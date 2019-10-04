#include <iostream>
using namespace std;
int main() {
	int hour, min, taken;
	cin >> hour >> min >> taken;
	hour += (min + taken) / 60;
	min = (min + taken) % 60;
	if (hour > 23) hour -= 24;

	cout << hour << " " << min;
	return 0;
}