#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

// 백준 10872번: 팩토리얼
int factorial(int n) {

	if (n <= 1) {
		return 1;
	}

	return n * factorial(n - 1);
}

// 백준 10870번: 피보나치 수 5
int fibo(int n) {

	if (n <= 1) {
		return n;
	}

	return fibo(n - 1) + fibo(n - 2);
}


// 백준 17478번: 재귀함수가 뭔가요?
int N;
void whatIsRecursiveFunction(int n) {

	char padding[1000] = "";
	for (int i = n; i < N; i++) {
		strcat(padding, "----");
	}

		printf("%s\"재귀함수가 뭔가요?\"\n", padding);
	if (n == 0) {
		printf("%s\"재귀함수는 자기 자신을 호출하는 함수라네\"\n", padding);
	}
	else {
		printf("%s\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n", padding);
		printf("%s마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n", padding);
		printf("%s그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n", padding);
	
		whatIsRecursiveFunction(n - 1);

	}
	printf("%s라고 답변하였지.\n", padding);

	return;
}

int main(void) {
	
	scanf("%d", &N);

	printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
	whatIsRecursiveFunction(N);

	return 0;
}

//백준 1002번: 터렛
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

// 백준 10872번: 팩토리얼
/*
int n;
scanf("%d", &n);

int result = factorial(n);
printf("%d", result);
*/

//백준 10870번: 피보나치 수 5
/*
int n;
scanf("%d", &n);

int result = fibo(n);
printf("%d", result);
*/
