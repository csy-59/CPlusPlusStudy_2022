#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

// ���� 10872��: ���丮��
int factorial(int n) {

	if (n <= 1) {
		return 1;
	}

	return n * factorial(n - 1);
}

// ���� 10870��: �Ǻ���ġ �� 5
int fibo(int n) {

	if (n <= 1) {
		return n;
	}

	return fibo(n - 1) + fibo(n - 2);
}


// ���� 17478��: ����Լ��� ������?
int N;
void whatIsRecursiveFunction(int n) {

	char padding[1000] = "";
	for (int i = n; i < N; i++) {
		strcat(padding, "----");
	}

		printf("%s\"����Լ��� ������?\"\n", padding);
	if (n == 0) {
		printf("%s\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n", padding);
	}
	else {
		printf("%s\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n", padding);
		printf("%s���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n", padding);
		printf("%s���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n", padding);
	
		whatIsRecursiveFunction(n - 1);

	}
	printf("%s��� �亯�Ͽ���.\n", padding);

	return;
}

int main(void) {
	
	scanf("%d", &N);

	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	whatIsRecursiveFunction(N);

	return 0;
}

//���� 1002��: �ͷ�
/*
int t;
scanf("%d", &t);

for (int i = 0; i < t; i++) {
	int lee[2] = { 0 };
	int leeR = 0;
	scanf("%d %d %d", &lee[0], &lee[1], &leeR);

	int joo[2] = { 0 };
	int jooR = 0;
	scanf("%d %d %d", &joo[0], &joo[1], &jooR);

	if (lee[0] == joo[0] && lee[1] == joo[1]) {
		if (leeR == jooR) {
			printf("-1\n");
		}
		else {
			printf("0\n");
		}
	}
	else {
		int xdif = lee[0] - joo[0];
		int ydif = lee[1] - joo[1];
		float distance = sqrt(xdif * xdif + ydif * ydif);

		if (jooR + leeR == distance || abs(jooR - leeR) == distance) {
			printf("1\n");
		}
		else if (jooR + leeR > distance && distance > abs(jooR - leeR)) {
			printf("2\n");
		}
		else {
			printf("0\n");
		}

	}

}
*/

// ���� 10872��: ���丮��
/*
int n;
scanf("%d", &n);

int result = factorial(n);
printf("%d", result);
*/

//���� 10870��: �Ǻ���ġ �� 5
/*
int n;
scanf("%d", &n);

int result = fibo(n);
printf("%d", result);
*/
