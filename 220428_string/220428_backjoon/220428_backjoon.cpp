#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

//char word[1000001] = { '\0' };

//백준 1978, 2581번: 소수 찾기, 소수
int primeNum[100000] = { 0 };
int primeCount = 0;
void findPrime(int n) {
	for (int i = 2; i <= n; i++) {

		int isPrime = true;
		for (int j = 0; j < primeCount; j++) {
			if (i % primeNum[j] == 0) { //소수가 아님
				isPrime = false;
				break;
			}
		}

		if (isPrime) {
			primeNum[primeCount++] = i;
		}
	}
	return;
}

//백준 11653번: 소인수 분해
int newPrimeNum[10000000] = { 0 };
void newFindPrime(int n) {
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

int main() { 
	//백준 11653번: 소인수분해

	int n;
	scanf("%d", &n);

	if (n == 1)
		return 0;

	newFindPrime(n/2);

	int isPrime = true;
	for (int i = 0; i < primeCount; i++) {
		int prime = primeNum[i];
		if (n % prime == 0) {
			int temp = n;
			while (temp % prime == 0) {
				printf("%d\n", prime);
				temp /= prime;
			}
			isPrime = false;
		}
	}

	if (isPrime) {
		printf("%d", n);
	}

	return 0;
}

//백준 10926번: ??!
//char str[55] = { '\0' };
//scanf("%50s", str);
//printf("%s", strcat(str, "??!"));
//
//return 0;

//백준 8958번: OX퀴즈
//int n;
//scanf("%d", &n);
//
//for (int i = 0; i < n; i++) {
//	char oxs[81] = { '\0' };
//	scanf("%80s", oxs);
//
//	int count = 0;
//	int result = 0;
//	for (int j = 0; j < strlen(oxs); j++) { //문자열의 갯수만큼 반복한다.
//		if (oxs[j] == 'O') {
//			count++;
//		}
//		else {
//			count = 0;
//		}
//
//		result += count;
//	}
//
//	//printf("%d %d ", strlen(oxs), _strlen(oxs));
//	printf("%d\n", result);
//}

//백준 11720번: 숫자의 합
	//int n;
	//scanf("%d", &n);
	//
	//char numbers[101] = { '\0' };
	//scanf("%100s", numbers);
	//
	//int result = 0;
	//for (int i = 0; i < n; i++) {
	//	result += numbers[i] - '0';
	//}
	//
	//printf("%d", result);

//백준 2675번: 문자열 반복
	//int t = 0;
	//scanf("%d", &t);
	//
	//for (int i = 0; i < t; i++) {
	//	int repeat = 0;
	//	scanf("%d", &repeat);
	//
	//	char word[21] = { '\0' };
	//	scanf("%20s", word);
	//	int word_size = strlen(word);
	//	for (int j = 0; j < word_size; j++) {
	//		for (int k = 0; k < repeat; k++) {
	//			printf("%c", word[j]);
	//		}
	//	}
	//
	//	printf("\n");
	//}

//!!!!백준 1157번: 단어 공부
	//ver.1
	//scanf("%1000000s", word);
	//
	//int i = 0;
	//char alphaType[26] = { '\0' };
	//int alphaCount[26] = { 0 };
	//int alphaTypeCount = 0;
	//do {
	//	if (word[i] >= 97 && word[i] <= 122) {//대문자라면
	//		word[i] -= 32;
	//	}
	//
	//	bool isNewAlpha = true;
	//	for (int j = 0; j < alphaTypeCount; j++) {
	//		if (alphaType[j] == word[i]) {
	//			alphaCount[j]++;
	//			isNewAlpha = false;
	//			break;
	//		} 
	//	}
	//	if (isNewAlpha) {
	//		alphaType[alphaTypeCount] = word[i];
	//		alphaCount[alphaTypeCount]++;
	//		alphaTypeCount++;
	//	}
	//
	//	i++;
	//} while(word[i] != '\0');
	//
	//int max = 0;
	//for (int i = 1; i < alphaTypeCount; i++) {
	//	if (alphaCount[i] > alphaCount[max]) {
	//		max = i;
	//	}
	//}
	//
	//for (int i = 0; i < alphaTypeCount; i++) {
	//	if (alphaCount[i] == alphaCount[max] && max != i) {
	//		printf("?");
	//		return 0;
	//	}
	//}
	//
	//printf("%c", alphaType[max]);
	//
	//ver. 2
	//scanf("%1000000s", word);
	//
	//int wordSize = strlen(word);
	//int alphaCount[26] = { 0 };
	//for (int i = 0; i < wordSize; i++) {
	//	if (word[i] >= 97 && word[i] <= 122) {
	//		alphaCount[word[i] - 'a']++;
	//	}
	//	else {
	//		alphaCount[word[i] - 'A']++;
	//	}
	//}
	//
	//int max = 0;
	//int doubleMaxCount = 0;
	//for (int i = 1; i < 26; i++) {
	//	if (alphaCount[i] == alphaCount[max]) {
	//		doubleMaxCount++;
	//	}
	//
	//	if (alphaCount[i] > alphaCount[max]) {
	//		doubleMaxCount = 0;
	//		max = i;
	//	}
	//}
	//
	//doubleMaxCount > 0 ? printf("?") : printf("%c", 'A' + max);

//1152번: 단어의 개수
	//fgets(word, 1000000, stdin);
	//
	//int size = strlen(word);
	//int wordCount = 0;
	//int preAlphaCount = 0;
	//for (int i = 0; i < size - 1; i++) {
	//	if (word[i] == ' ') {
	//		if (preAlphaCount != 0) {
	//			wordCount++;
	//		}
	//		preAlphaCount = 0;
	//	}
	//	else {
	//		preAlphaCount++;
	//	}
	//}
	//if (preAlphaCount != 0)
	//	wordCount++;
	//
	//printf("%d", wordCount);

//백준 1712번: 손익분기점
	//long long a, b, c;
	//scanf("%lld %lld %lld", &a, &b, &c);
	//
	//if (c <= b) {
	//	printf("-1");
	//}
	//else {
	//	//멍충아 그냥 나누면 되는 거슬.... 멍충멍충~ 멍충멍충~
	//	printf("%lld", a/(c-b) + 1);
	//}

//백준 2292번: 벌집
/*
	* 아래쪽:		1 + n*6; >> n(1+(n+1)/2)
	* 왼쪽-아래쪽:	2 + n*6; >> n(2+(n+1)/2)
	* 왼쪽-위쪽:	3 + n*6; >> n(3+(n+1)/2)
	* 위쪽:			4 + n*6; >> n(4+(n+1)/2)
	* 오른-위쪽:	5 + n*6; >> n(5+(n+1)/2)
	* 오른-아래쪽:	6 + n*6; >> n(6+(n+1)/2)
	*
	* if 목적지 == 13
	*	1) (3+ 0*6) + (3 + 1*6) + (3 + 2*6) + (3+3*6)
	*	2)
	*
	* if 목적지 == 58
	*	58 / 6 = 9
	*
	* 1번 - 01 ( 0, 1 + 6 * 0, 1)
	* 2번 - 02 03 04 05 06 07 (+5, 1 + 6*1, 6)
	* 3번 - 08 09 10 11 12 13 14 15 16 17 18 19 (+6, 1 + 6*3, 12)
	* 4번 - 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 (+6, 1 + 6*6, 18)
	* 5번 - 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 ( +6, 1+ 6*20, 24)
	* .
	* .
	* n번 - (+6, -, (n == 1 ? 1 : (n-1) * 6))
	*

	int n;
	scanf("%d", &n);

	int maxNum = 1, result = 1;
	while (maxNum < n) {
		result++;
		maxNum += (result - 1) * 6;
	}

	printf("%d", result);
	*/

//백준 2839번: 설탕 배달
	//int n;
	//scanf("%d", &n);
	//
	////15는 5와 3의 공배수. 15는 5키로가 3개 있는 것. 
	//int five = (n / 5);
	//int three = (n % 5) / 3; //15로 나눈 나머지에서 3이 얼마나 있는지
	//
	////나머지만큼의 차이가 나는 경우의 수로 five와 three를 변경한다.
	//switch ((n % 5) % 3) {
	//case 1: //(6(3*2) - 5, 10(5*2) - 9(3*3))
	//	if (five > 0) {
	//		five--;
	//		three += 2;
	//	}
	//	else if (three > 2) {
	//		five += 2;
	//		three -= 3;
	//	}
	//	break;
	//case 2://(5-3, 12(3*4) - 10(5*2))
	//	if (five > 1) {
	//		three += 4;
	//		five -= 2;
	//	}
	//	else if (three > 0) {
	//		five++;
	//		three--;
	//	}
	//	break;
	//}
	//
	//int result = five + three;
	//if (five * 5 + three * 3 != n || five < 0 || three < 0) {
	//	result = -1;
	//}
	//
	//printf("%d", result);

//백준 2581번: 소수
/*
	int min, max;
	scanf("%d %d", &min, &max);

	findPrime(10000000);

	int sum = 0;
	int minPrime = 0;
	for (int i = 0; i < primeCount; i++) {
		int prime = primeNum[i];

		if (prime > max) {
			break;
		}

		if (prime >= min) {
			if (sum == 0) {
				minPrime = prime;
			}
			sum += prime;
		}
	}

	if (sum == 0)
		printf("-1");
	else
		printf("%d\n%d\n", sum, minPrime);
	*/
