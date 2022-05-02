#include <stdio.h>

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	return;
}

int isLower(char ch) {
	return ('a'<= ch && ch <= 'z');
}

int isUpper(char ch) {
	return ('A' <= ch && ch <= 'Z');
}

int tolower(char ch) {
	return ('A' <= ch && ch <= 'Z' ? ch + 32 : ch);
}

int toupper(char ch) {
	return ('a' <= ch && ch <= 'b' ? ch - 32 : ch);
}

int main() {
	//두 정수를 받아 서로 데이터를 교환하는 함수
	printf("\n##1: 두 정수를 받아 서로 데이터를 교환하는 함수\n");
	int a = 10, b = 20;
	printf("a: %d b: %d\n", a, b);
	swap(&a, &b);
	printf("a: %d b: %d\n", a, b);

	//한 개의 문자를 받아 소문자인지 판별하는 함수
	printf("\n##2: 한 개의 문자를 받아 소문자인지 판별한다\n");
	printf("isLower(a): %s\n", isLower('a') == 0? "false" : "true");
	printf("isLower(A): %s\n", isLower('A') == 0 ? "false" : "true");

	//한 개의 문자를 받아 대문자인지 판별하는 함수
	printf("\n##2: 한 개의 문자를 받아 소문자인지 판별한다\n");
	printf("isUpper(a): %s\n", isUpper('a') == 0? "false" : "true");
	printf("isUpper(A): %s\n", isUpper('A') == 0 ? "false" : "true");

	//한 개의 문자를 받아 소문자로 만드는 함수
	printf("\n##2: 한 개의 문자를 받아 소문자인지 판별한다\n");
	printf("tolower(a): %c\n", tolower('a'));
	printf("tolower(A): %c\n", tolower('A'));
	printf("tolower(2): %c\n", tolower('2'));

	//한 개의 문자를 받아 대문자로 만드는 함수
	printf("\n##2: 한 개의 문자를 받아 소문자인지 판별한다\n");
	printf("toupper(a): %c\n", toupper('a'));
	printf("toupper(A): %c\n", toupper('A'));
	printf("toupper(2): %c\n", toupper('2'));

	return 0;
}