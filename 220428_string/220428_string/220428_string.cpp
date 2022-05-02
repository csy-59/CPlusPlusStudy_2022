#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //문자열 관련 함수 들어감

//strlen 함수 구현
unsigned int _strlen(const char* str) {
	unsigned int i = 0;

	while (str[i] != '\0') {
		i++;
	}

	return i;
}
//공식 함수: C++ Reference
size_t __strlen(const char* start) {
	const char* end = start;
	for (; *end != '\0'; end++)
		;
	return end - start;
}


//strcpy 함수 구현: 시간복잡도 5n
char* _strcpy(char* str1, const char* str2) {

	int i = 0;
	while (str1[i] != '\0' || str2[i] != '\0') {
		str1[i] = str2[i];
	}

	return str1;
}

int main() {

	//문자열을 담을 배열 선언
	char str[123] = { '\0'};
	//문자열 받아오기.
	scanf("%122s", str); //문자열의 크기는 항상 받아오는 문자열의 크기 + 1 이상이어야 한다. (널문자도 들어가야함!)
	//배열 크기 -1 이상의 크기를 받아올 경우에는 오류가 뜬다. (메모리 침범)
	//Debug일 경우에만 오류(Buffer Overrun)가 뜬다...
	// Buffer Overrun : 할당된 공간을 벗어남. 조심하지 않으면 이런 형식의 공격을 받을 수 있었다.
	// 그래서  scanf_s가 나옴. (만약 쓰고 싶지 않으면, scanf("%9s", str) 형식으로 적어야 한다.
	//!아주 중요! > 
	
	printf("%s", str);

}