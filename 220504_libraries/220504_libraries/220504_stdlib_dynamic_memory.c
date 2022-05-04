#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	scanf("%d", &n);

	int* p = malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &p[i]);
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", p[i]);
	}

	free(p);

	return 0;
}