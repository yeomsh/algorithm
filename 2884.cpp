#include <cstdio>
int main() {
	int h, m;
	scanf("%d %d", &h, &m);
	if (m < 45) {
		h -= 1;
		m += 15;
	}
	else
		m -= 45;
	printf("%d %d", (h+24)%24, m);
}