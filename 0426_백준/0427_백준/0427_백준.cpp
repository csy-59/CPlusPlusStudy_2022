// 10818 최서연
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////배열을 사용하는 방법에서 사용하는 배열
//int numbers[1000000] = { 0 };
//
//int main() {
//	int n;
//	scanf("%d", &n);
//
//	//배열을 사용하지 않은 방법
//	int number;
//	scanf("%d", &number);
//	int min = number, max = number;
//
//	for (int i = 1; i < n; i++) {
//		scanf("%d", &number);
//		if (number < min)
//			min = number;
//		else if (number > max)
//			max = number;
//	}
//
//	printf("%d %d", min, max);
//
//	//배열을 사용하는 방법
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &numbers[i]);
//	}
//
//	int Min = numbers[0], Max = numbers[0];
//
//	for (int i = 1; i < n; i++) {
//		if (numbers[i] < Min)
//			Min = numbers[i];
//		else if (numbers[i] > Max)
//			Max = numbers[i];
//	}
//
//	printf("%d %d", Min, Max);
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	int n;
	scanf("%d", &n);

	char word[101] = {'\0'};
	bool isGroupWord = true;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		scanf("%s", &word);
		
		int j = 0;
		char temp = '\0';
		bool alpha[26] = { false };
		isGroupWord = true;
		while (word[j] != '\0') {
			if (!alpha[word[j] - 'a']) {
				alpha[word[j] - 'a'] = true;
				temp = word[j];
			}
			else if (temp != word[j]) {
				isGroupWord = false;
			}
			j++;
		}

		if (isGroupWord)
			cnt++;
	}

	printf("%d", cnt);

	return 0;
}