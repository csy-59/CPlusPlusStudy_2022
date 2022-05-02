#include <stdio.h>

//strlen(): ���ڿ��� ���̸� ���ϴ� �Լ�
// �Ű����� 1�� >> ���ڿ��� �����ϱ� ���� ��ü
// �迭�� �Լ����� �������� �����͸� ����Ѵ�.
// �迭�� �Լ����� �����ͷ� �������� �迭�� ũ�⵵ ���� �޾ƾ� �Ѵ�.
// ���ڿ��� ���� �� ����(NULL Character)��. >> ���� �迭�� ũ�⸦ ���� �ʾƵ� ���� �� �� �ִ�. ������ ���ڿ��� ũ�⸦ ���� �޾ƿ��� �ʴ´�.
// �Ű����� 1�� >> ���ڿ��� �����ϱ� ���� ��ü >> pointer to char

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

	//���ڿ��� ���̸� ��ȯ�ϴ� �Լ�: strlen
	printf("\n## ���ڿ��� ���̸� ��ȯ�ϴ� �Լ�: strlen\n");
	printf("%s's length is %d\n", str, strlen(str));
	printf("%s's length is %d\n", str1, strlen(str1));
	printf("%s's length is %d\n", str2, strlen(str2));

	//���ڿ� ���� ���ڸ� ã�� �� ��ġ�� ��ȯ�ϴ� �Լ�: strchr
	printf("\n## ���ڿ� ���� ���ڸ� ã�� �� ��ġ�� ��ȯ�ϴ� �Լ�: strchr\n");
	printf("%c's address in %s is \t\t%s\n", 'O', str, _strchr(str, 'O'));
	printf("%c's address in %s is \t\t%s\n", 'a', str1, _strchr(str1, 'a'));
	printf("%c's address in %s is \t%s\n", '6', str2, _strchr(str2, '6'));

	//���ڿ� ���� ���ڸ� ã�� �� ��ġ�� ��ȯ�ϴ� �Լ�(�Ųٷ�): strrchr
	printf("\n## ���ڿ� ���� ���ڸ� �Ųٷ� ã�� �� ��ġ�� ��ȯ�ϴ� �Լ�: strrchr\n");
	printf("%c's address in %s is \t\t%s\n", 'O', str, _strrchr(str, 'O'));
	printf("%c's address in %s is \t\t%s\n", 'a', str1, _strrchr(str1, 'a'));
	printf("%c's address in %s is \t%s\n", '6', str2, _strrchr(str2, '6'));

	//�� ���ڿ��� �ٸ� ���ڿ��� �����ϴ� �Լ�: strcpy
	printf("\n## �� ���ڿ��� �ٸ� ���ڿ��� �����ϴ� �Լ�: strcpy\n");
	printf("copy '%s' into '%s' >> ", str1, str);
	printf("'%s'\n", strcpy(str, str1));
	printf("copy '%s' into '%s' >> ", "HELLO WORLD", str);
	printf("'%s'\n", strcpy(str, "HELLO WORLD"));

	//�� ���ڿ��� �ٸ� ���ڿ��� ���̴� �Լ�: strcat
	printf("\n## �� ���ڿ��� �ٸ� ���ڿ��� ���̴� �Լ�: strcat\n");
	printf("concat '%s' into '%s' >> ", "!!!!!!", str);
	printf("'%s'\n", strcat(str, "!!!!!!"));
	
	//�� ���ڿ��� ���ϴ� �Լ�: strcmp
	printf("\n## �� ���ڿ��� ���ϴ� �Լ�: strcmp\n");
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

	//���ڿ� �ӿ��� ���ڿ��� ã�� �Լ�: strstr
	char saying[] = "Good things come to those who wait";
	char substr1[] = "those";
	char substr2[] = "well";
	printf("\n## ���ڿ� �ӿ��� ���ڿ��� ã�� �Լ�: strstr\n");
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