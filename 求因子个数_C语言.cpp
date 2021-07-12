#include<stdio.h>
#define maxn 1000010

int f[maxn];

void init() {
	for (int i = 2; i < maxn; i++) {
		for (int j = 2; j <= maxn/i; j++) {
			f[i*j]++;
		}
	}
}

int main() {
	init();
	int m,n;
	scanf("%d %d", &m, &n);
	for (int i = m; i <= n; i++) { 
		printf("%d\n", f[i] + 2);
	}
	return 0;
}
