#include <stdio.h>

//strlen(): 문자열의 길이를 구하는 함수
// 매개변수 1개 >> 문자열을 저장하기 위한 객체
// 배열을 함수에서 받으려면 포인터를 써야한다.
// 배열을 함수에서 포인터로 받으려면 배열의 크기도 같이 받아야 한다.
// 문자열의 끝은 널 문자(NULL Character)다. >> 따라서 배열의 크기를 알지 않아도 끝을 알 수 있다. 때문에 문자열은 크기를 따로 받아오지 않는다.
// 매개변수 1개 >> 문자열을 저장하기 위한 객체 >> pointer to char

unsigned __int32 strlen(const char* str) {
	unsigned __int32 len = 0;
	for (; str[len] != '\0'; len++);
	return len;
}

char* strchr(const char* str, const char ch) {
	for (int i = 0; str[i] != 0; i++) {
		if (str[i] == ch) {
			return &str[i];
		}
	}

	return NULL;
}

char* _strchr(const char* str, const char ch) {
	while (*str != '\0') {
		if (*str == ch) {
			return str;
		}
		str++;
	}

	return NULL;
}

char* strrchr(const char* str, const char ch) {
	for (int i = strlen(str) - 1; i >= 0; i--) {
		if (str[i] == ch) {
			return &str[i];
		}
	}

	return NULL;

}

char* _strrchr(const char* str, const char ch) {
	char* result = '\0';

	while (*str != '\0') {
		if (*str == ch) {
			result = str;
		}
		str++;
	}

	return result;
}

char* strcpy(const char* str1, const char* str2) {
	char* des = str1;
	char* src = str2;

	while (*src != '\0') {
		*des = *src;
		des++;
		src++;
	}
	*des = *src;

	return str1;
}

char* strcat(const char* str1, const char* str2) {
	char* des = str1 + strlen(str1), * src = str2;

	while (*src != '\0') {
		*des = *src;
		des++;
		src++;
	}

	return str1;
}

int strcmp(const char* str1, const char* str2) {
	while (*str1 != '\0') {
		if (*str1 != *str2) {
			return *str1 - *str2;
		}
		str1++;
		str2++;
	}

	return 0;
}

char* strstr(const char* str, const char* substr) {
	while (*str != '\0') {
		if (*str == *substr) {
			int i = 0;
			while (*(str + i) == *(substr + i)) {
				if (*(str + i + 1) == '\0') {
					return NULL;
				}

				if (*(substr + i + 1) == '\0') {
					return str;
				}

				i++;
			}

			str += i;
		}
		str++;
	}

	return NULL;
}

/*
* strcpy()	#
* strcat()	#
* strlen()	#
* strcmp()	#
* strchr()	#
* strrchr()	#
* strstr()	#
*/

int main() {
	char str[100] = "HELLO WORLD";
	char str1[100] = "123456789";
	char str2[] = "488-865-4346-648";

	//문자열의 길이를 반환하는 함수: strlen
	printf("\n## 문자열의 길이를 반환하는 함수: strlen\n");
	printf("%s's length is %d\n", str, strlen(str));
	printf("%s's length is %d\n", str1, strlen(str1));
	printf("%s's length is %d\n", str2, strlen(str2));

	//문자열 속의 문자를 찾고 그 위치를 반환하는 함수: strchr
	printf("\n## 문자열 속의 문자를 찾고 그 위치를 반환하는 함수: strchr\n");
	printf("%c's address in %s is \t\t%s\n", 'O', str, _strchr(str, 'O'));
	printf("%c's address in %s is \t\t%s\n", 'a', str1, _strchr(str1, 'a'));
	printf("%c's address in %s is \t%s\n", '6', str2, _strchr(str2, '6'));

	//문자열 속의 문자를 찾고 그 위치를 반환하는 함수(거꾸로): strrchr
	printf("\n## 문자열 속의 문자를 거꾸로 찾고 그 위치를 반환하는 함수: strrchr\n");
	printf("%c's address in %s is \t\t%s\n", 'O', str, _strrchr(str, 'O'));
	printf("%c's address in %s is \t\t%s\n", 'a', str1, _strrchr(str1, 'a'));
	printf("%c's address in %s is \t%s\n", '6', str2, _strrchr(str2, '6'));

	//한 문자열을 다른 문자열에 복사하는 함수: strcpy
	printf("\n## 한 문자열을 다른 문자열에 복사하는 함수: strcpy\n");
	printf("copy '%s' into '%s' >> ", str1, str);
	printf("'%s'\n", strcpy(str, str1));
	printf("copy '%s' into '%s' >> ", "HELLO WORLD", str);
	printf("'%s'\n", strcpy(str, "HELLO WORLD"));

	//한 문자열을 다른 문자열에 붙이는 함수: strcat
	printf("\n## 한 문자열을 다른 문자열에 붙이는 함수: strcat\n");
	printf("concat '%s' into '%s' >> ", "!!!!!!", str);
	printf("'%s'\n", strcat(str, "!!!!!!"));
	
	//두 문자열을 비교하는 함수: strcmp
	printf("\n## 두 문자열을 비교하는 함수: strcmp\n");
	char apple[] = "Apple";
	char bear[] = "Bear";
	char result[50] = "";
	if (strcmp(apple, bear) == 0) {
		strcpy(result, "same as");
	}
	else if (strcmp(apple, bear) < 0) {
		strcpy(result, "bigger than");
	}
	else {
		strcpy(result, "smaller than");
	}
	printf("'%s' is %s '%s' \n", apple, result, bear);

	if (strcmp(bear, bear) == 0) {
		strcpy(result, "same as");
	}
	else if (strcmp(bear, bear) < 0) {
		strcpy(result, "bigger than");
	}
	else {
		strcpy(result, "smaller than");
	}
	printf("'%s' is %s '%s' \n", bear, result, bear);

	if (strcmp(bear, apple) == 0) {
		strcpy(result, "same as");
	}
	else if (strcmp(bear, apple) < 0) {
		strcpy(result, "bigger than");
	}
	else {
		strcpy(result, "smaller than");
	}
	printf("'%s' is %s '%s' \n", bear, result, apple);

	//문자열 속에서 문자열을 찾는 함수: strstr
	char saying[] = "Good things come to those who wait";
	char substr1[] = "those";
	char substr2[] = "well";
	printf("\n## 문자열 속에서 문자열을 찾는 함수: strstr\n");
	if (strstr(saying, substr1) != '\0') {
		printf("'%s' is in '%s' at '%s'\n", substr1, saying, strstr(saying, substr1));
	}
	else {
		printf("'%s' is not in '%s'\n", substr1, saying);
	}

	if (strstr(saying, substr2) != '\0') {
		printf("'%s' is in '%s' at '%s'\n", substr2, saying, strstr(saying, substr2));
	}
	else {
		printf("'%s' is not in '%s'\n", substr2, saying);
	}


	return 0;
}