#include <iostream>
using namespace std;

int main() {
	int arr[100002],N;
	int max = 1;
	int length = 1;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	//증가 확인
	for (int i = 1; i < N; i++) {
		if (arr[i] - arr[i - 1] <= 0)
			length++;
		else
			length = 1;
		if (length > max)
			max = length;
	}
	length = 1;
	//감소 확인
	for (int i = 1; i < N; i++) {
		if (arr[i] - arr[i - 1] >= 0)
			length++;
		else
			length = 1;
		if (length > max)
			max = length;
	}

	cout << max;

	return 0;
}