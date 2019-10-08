#include <cstdio>
int main() {
	int a;
	int max = -1;
	int row, col;
	for (int i = 0; i < 81; i++) {
		scanf("%d", &a);
		if (a > max) {
			row = i / 9 + 1;
			col = i % 9 + 1;
			max = a;
		}
	}
	printf("%d\n%d %d", max, row, col);
}