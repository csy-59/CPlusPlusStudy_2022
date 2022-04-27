#include <stdio.h>
#include <cstdio>

//백준 15596번: 정수 N개의 합
int hap(int a[3000000], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
}

//백준 4673번: 셀프 넘버
bool selfNums[10000] = { false };
void generateSelfNums(int n) {
	for (int i = 1; i <= n; i++) {
		int temp = i;
		int nums = i;
		while (temp > 0) {
			nums += temp % 10;
			temp /= 10;
		}

		if (nums-1 < n) {
			selfNums[nums-1] = true;
		}
	}

	for (int i = 0; i < n; i++) {
		if (!selfNums[i])
			printf("%d\n", i + 1);
	}
}

int main() {

	char s[101] = { '\0' };
	scanf_s("%s", s, sizeof(s));

	int result = 0;
	int i = 0;
	do {
		if ( i < 100 && 
			(s[i] == 'c' && (s[i + 1] == '=' || s[i + 1] == '-')) ||
			(s[i] == 'd' && s[i + 1] == '-') ||
			(s[i] == 'l' && s[i + 1] == 'j') ||
			(s[i] == 'n' && s[i + 1] == 'j') ||
			(s[i] == 's' && s[i + 1] == '=') ||
			(s[i] == 'z' && s[i + 1] == '=')) {
			i++;
		}
		else if (i < 99 && s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=') {
			i += 2;
		}
		i++;
		result++;
	} while (s[i] != '\0');

	printf("%d", result);

	return 0;
}

//백준 10951번 문제: A+B - 4. 여러 태스트 케이스를 받아 A+B 출력
//int count = 0;
//int a, b;
//while (scanf("%d %d", &a, &b) != EOF) {
//	printf("%d\n", a + b);
//}

//백준 10818번 문제: 최대 최소. 
//int n;
//int num;
//scanf_s("%d", &n);
//
//scanf_s("%d", &num);
//int min = num, max = num;
//for (int i = 1; i < n; i++) {
//	scanf_s("%d", num);
//	if (num < min)
//		min = num;
//	else if (num > max)
//		max = num;
//}
//
//printf("%d %d", min, max);

//백준 2562번 문제: 최댓값
//int num;
//scanf_s("%d", &num);
//
//int max = num, max_position = 1;
//for (int i = 2; i <= 9; i++) {
//	scanf_s("%d", &num);
//	if (num > max) {
//		max = num;
//		max_position = i;
//	}
//}

//백준 2577번 문제: 숫자의 개수
//int a, b, c;
//scanf_s("%d %d %d", &a, &b, &c);
//
//int multiplyNum = a * b * c;
//
//int nums[10] = { 0 };
//while (multiplyNum >= 10) {
//	nums[multiplyNum % 10]++;
//	multiplyNum /= 10;
//}
//nums[multiplyNum]++;
//
//for (int i = 0; i < 10; i++) {
//	printf("%d\n", nums[i]);
//}

//백준 3052번: 나머지
//bool remains[42] = { false };
//int num;
//int count = 0;
//for (int i = 0; i < 10; i++) {
//	scanf_s("%d", &num);
//	if (!remains[num % 42]) {
//		remains[num % 42] = true;
//		count++;
//	}
//}
//printf("%d", count);

//백준 1546번: 평균
//int n;
//scanf_s("%d", &n);
//
//float scores[1000] = { 0 };
//
//float max = 0;
//for (int i = 0; i < n; i++) {
//	scanf_s("%f", &scores[i]);
//	if (scores[i] > max)
//		max = scores[i];
//}
//
//float sum = 0;
//for (int i = 0; i < n; i++) {
//	sum += scores[i] / max * 100;
//}
//
//printf("%f", sum / n);

//백준 8958번 : ox퀴즈
//int n;
//scanf_s("%d", &n);
//
//char oxs[82] = {'\0'};
//int results[100] = { 0 };
//for (int i = 0; i < n; i++) {
//	scanf_s("%s", oxs, sizeof(oxs));
//	int oCount = 0;
//	int j = 0;
//	while (oxs[j] != '\0') {
//		if (oxs[j] == 'O') {
//			results[i] += ++oCount;
//		}
//		else {
//			oCount = 0;
//		}
//		j++;
//	}
//}
//
//for (int i = 0; i < n; i++) {
//	printf("%d\n", results[i]);
//}

//백준 4344번: 평균은 넘겠지
//int c;
//scanf_s("%d", &c);
//
//float results[100] = { 0 };
//float scores[1000] = { 0 };
//for (int i = 0; i < c; i++) {
//	int n;
//	scanf_s("%d", &n);
//
//	float sum = 0;
//	for (int j = 0; j < n; j++) {
//		scanf_s("%f", &scores[j]);
//		sum += scores[j];
//	}
//
//	float aver = sum / n;
//
//	int count = 0;
//	for (int j = 0; j < n; j++) {
//		if (scores[j] > aver)
//			count++;
//	}
//
//	results[i] = (float)count / n * 100;
//}
//
//for (int i = 0; i < c; i++)
//	printf("%.3f%%\n", results[i]);

//백준 4673번: 셀프 넘버
//generateSelfNums(10000);

//백준 11654번: 아스키 코드
//char alpha;
//scanf_s("%c", &alpha);
//printf("%d", (int)alpha);

//백준 11720번: 숫자의 합
//int n;
//scanf_s("%d", &n);
//
//char nums[101];
//scanf_s("%s", nums, sizeof(nums));
//
//int result = 0;
//for (int i = 0; i < n; i++) {
//	result += nums[i] - '0';
//}
//
//printf("%d", result);

//백준 1110번: 더하기 사이클
//int num;
//scanf_s("%d", &num);
//
//int new_num = num;
//int count = 0;
//do {
//	new_num = 10 * (new_num % 10) + ((new_num < 10 ? new_num : new_num / 10 + new_num % 10) % 10);
//	count++;
//} while (new_num != num);
//
//printf("%d", count);

//백준 10809번: 알파벳 찾기
//int alpha[26] = { -1 };
//for (int i = 0; i < 26; i++) {
//	alpha[i] = -1;
//}
//char S[101] = {'\0'};
//scanf_s("%s", S, sizeof(S));
//
//int i = 0;
//do {
//	if (alpha[S[i] - 'a'] == -1)
//		alpha[S[i] - 'a'] = i;
//	i++;
//} while (S[i] != '\0');
//
//for (int i = 0; i < 26; i++) {
//	printf("%d ", alpha[i]);
//}

//백준 2675번: 문자열 반복
//int t;
//scanf_s("%d", &t);
//
//for (int i = 0; i < t; i++) {
//	int r = 0;
//	scanf_s("%d", &r);
//
//	char s[1000] = { '\0' };
//	scanf_s("%s", s, sizeof(s));
//
//	int j = 0;
//	do {
//		for (int k = 0; k < r; k++)
//			printf("%c", s[j]);
//		j++;
//	} while (s[j] != '\0');
//	printf("\n");
//}

//백준 2908번: 상수
//char numA[4] = { '\0' };
//char numB[4] = { '\0' };
//
////scanf("%s %s", numA, numB);
//scanf_s("%s", numA, sizeof(numA));
//scanf_s("%s", numB, sizeof(numB));
//
//for (int i = 2; i >= 0; i--) {
//	if (numA[i] > numB[i]) {
//		for (int j = 2; j >= 0; j--) {
//			printf("%c", numA[j]);
//		}
//		break;
//	}
//	else if (numA[i] < numB[i]) {
//		for (int j = 2; j >= 0; j--) {
//			printf("%c", numB[j]);
//		}
//		break;
//	}
//}

//백준 1152번: 단어의 개수
//char s[1000000] = { '\0' };
//int cnt = 0;
//while (scanf_s("%s", s, sizeof(s)) != EOF) {
//	cnt++;
//}
//
//printf("%d", cnt);

//백준 5622번: 다이얼
//char alpha[16] = { '\0' };
//scanf("%s", alpha);
//
//int result = 0;
//int i = 0;
//do {
//	int temp = alpha[i] - 'A';
//
//	if (temp < 3) {
//		result += 2;
//	}
//	else if (temp < 6) {
//		result += 3;
//	}
//	else if (temp < 9) {
//		result += 4;
//	}
//	else if (temp < 12) {
//		result += 5;
//	}
//	else if (temp < 15) {
//		result += 6;
//	}
//	else if (temp < 19) {
//		result += 7;
//	}
//	else if (temp < 22) {
//		result += 8;
//	}
//	else {
//		result += 9;
//	}
//	result++;
//	i++;
//} while (alpha[i] != '\0');
//
//printf("%d", result);
//
//다른 사람의 답
//char alpha[16] = { '\0' };
//char digit[27] = "22233344455566677778889999";
//scanf_s("%s", alpha, sizeof(alpha));
//
//int result = 0;
//int i = 0;
//do {
//	result += digit[alpha[i] - 'A'] - '0';
//	i++;
//} while (alpha[i] != '\0');
//
//result += i;
//printf("%d", result);

