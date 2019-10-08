#include <cstdio>
int main() {
	int a;
	scanf("%d", &a);
	for (int i = a; i; i--) {
		for (int j = i; j; j--)
			printf("*");
		printf("\n");
	}
}