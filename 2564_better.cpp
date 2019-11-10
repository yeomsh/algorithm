#include <cstdio>
int x, y;

int pos(int i, int p) {
	if (i == 1) return p;
	if (i == 4) return x + p;
	if (i == 2) return x + y + x - p;
	return 2 * (x + y) - p;
}

int dist(int a, int b) {
	if (b>a) return dist(b, a);
	if (a - b<x + y) return a - b;
	else return ((x + y) << 1) - (a - b);
}
int main() {
	scanf("%d %d", &x, &y);
	int n, r = 0;
	scanf("%d", &n);
	int t, u, a[n + 1];
	for (int i = 0; i<n + 1; i++) {
		scanf("%d %d", &t, &u);
		a[i] = pos(t, u);
	}
	for (int i = 0; i<n; i++) {
		r += dist(a[i], a[n]);
	}
	printf("%d", r);
}