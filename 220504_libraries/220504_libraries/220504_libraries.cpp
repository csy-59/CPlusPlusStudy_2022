#define _CRT_SECURE_NO_WARNINGS
#include <assert.h>
#include <string.h>
#include <stdio.h>
#include <float.h>
#include <math.h>
#include <time.h>

void CreateUser(const char* nickname) {
	int n = strlen("hello");
	assert(n <= 10);
}

int main(void) {
	//assert(0 == 10);
	printf("%f", FLT_MIN);

	//사용자로부터 두 수를 입력 받고
	int num, num2;
	scanf_s("%d %d", &num, &num2);

	//몫과 나머지를 출력
	printf("%d %d", num / num2, num % num2);

	time_t result = time(NULL); //
	printf("현제 시간: %s", asctime(gmtime(&result)));
}