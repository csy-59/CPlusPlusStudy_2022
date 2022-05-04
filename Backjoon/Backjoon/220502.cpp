#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main() {
	//백준 1002번: 터렛
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		int lee[2] = { 0 };
		int leeR = 0;
		scanf("%d %d %d", &lee[0], &lee[1], &leeR);

		int joo[2] = { 0 };
		int jooR = 0;
		scanf("%d %d %d", &joo[0], &joo[1], &jooR);

		float distance = sqrt((lee[0] - joo[0]) * (lee[0] - joo[0]) + (lee[1] - joo[1]) * (lee[1] - joo[1]));

		if (distance == 0) {
			if (leeR == jooR) {
				printf("-1\n");
			}
			else {
				printf("0\n");
			}
		}
		if (leeR + jooR > distance && distance > abs(leeR - jooR)) {
			printf("2\n");
		}
		else if (leeR + jooR == distance || abs(leeR - jooR) == distance) {
			printf("1\n");
		}
		else {
			printf("0\n");
		}
		
	}
	
	return 0;
}

//소수 구하는 거
/*
int newPrimeNum[246912] = { 0 };
int primeNum[100000] = { 0 };
int primeCount = 0;
void findPrime(int n) {
	primeCount = 0;
	for (int i = 2; i <= n; i++) {
		if (newPrimeNum[i] == 0) { //소수인 경우
			int j = i + i;

			while (j <= n) {
				newPrimeNum[j] = 1;
				j += i;
			}

			primeNum[primeCount++] = i;
		}
	}
}
*/

//백준 1929번: 소수 구하기
/*
int m, n;
scanf("%d %d", &m, &n);

if (n == 1)
	return 0;

findPrime(n);

for (int i = 0; i < primeCount; i++) {
	if (primeNum[i] > n) {
		break;
	}
	else if (primeNum[i] >= m) {
		printf("%d\n", primeNum[i]);
	}
}
*/

//백준 4948번: 베르트랑 공준
/*
int n;
do {
	scanf("%d", &n);

	findPrime((n * 2));

	if (n == 1) {
		printf("1\n");
		continue;
	}

	int count = 0;
	for (int i = 0; i < primeCount; i++) {
		if (primeNum[i] > n * 2) {
			break;
		}
		else if (primeNum[i] > n) {
			count++;
		}
	}

	if(n != 0)
		printf("%d\n", count);
} while (n != 0);
*/

//백준 9020번: 골드바흐의 추측
/*
int t;
scanf("%d", &t);

for (int i = 0; i < t; i++) {
	int n;
	scanf("%d", &n);

	findPrime(n);

	int count = (n % 2 == 0) ? n / 2 : n / 2 - 1;
	for (int j = count; j > 1; j--) {
		int isSmallPrimes = false;
		int isBigPrimes = false;
		for (int k = 0; k < primeCount; k++) {
			if (primeNum[k] == j) {
				isSmallPrimes = true;
			}

			if (primeNum[k] == (n - j)) {
				isBigPrimes = true;
			}
		}

		if (isSmallPrimes && isBigPrimes) {
			printf("%d %d\n", j, n - j);
			break;
		}
	}
}
*/

//백준 3009번: 네 번째 점
/*
int points[3][2] = { 0 };

for (int i = 0; i < 3; i++) {
	scanf("%d %d", &points[i][0], &points[i][1]);
}

if (points[0][0] == points[1][0]) {
	printf("%d ", points[2][0]);
}
else if(points[1][0] == points[2][0]) {
	printf("%d ", points[0][0]);
}
else {
	printf("%d ", points[1][0]);
}

if (points[0][1] == points[1][1]) {
	printf("%d\n", points[2][1]);
}
else if(points[1][1] == points[2][1]) {
	printf("%d\n", points[0][1]);
}
else {
	printf("%d\n", points[1][1]);
}
*/

//백준 4153번: 직각삼각형
/*
	int side[3] = { 0 };
	do {
		scanf("%d %d %d", &side[0], &side[1], &side[2]);

		if (side[0] == 0 || side[1] == 0 || side[2] == 0)
			continue;

		if (side[0] < side[2] && side[1] < side[2]) {
			(side[0] * side[0] + side[1] * side[1]) == side[2] * side[2] ? printf("right\n") : printf("wrong\n");
		}
		else if (side[0] < side[1] && side[2] < side[1]) {
			(side[0] * side[0] + side[2] * side[2]) == side[1] * side[1] ? printf("right\n") : printf("wrong\n");
		}
		else if (side[1] < side[0] && side[2] < side[0]) {
			(side[1] * side[1] + side[2] * side[2]) == side[0] * side[0] ? printf("right\n") : printf("wrong\n");
		}
		else {
			printf("wrong\n");
		}

	} while (side[0] != 0 || side[1] != 0 || side[2] != 0);
	*/

//백준 3053번: 택시 기하학(*define _USE_MATH_DEFINES랑 #include <math.h> 필수!)
/*
int r;
scanf("%d", &r);
printf("%f\n", (double)r * r * M_PI);
printf("%f\n", (double)r * r * 2);
*/
