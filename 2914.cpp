//a/b = c ->a를 구하라
#include <cstdio>
int main() {
	int b, c;
	scanf("%d %d", &b, &c);
	printf("%d", (c - 1)*b + 1);
}