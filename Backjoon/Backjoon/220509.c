#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);

	char map[55][55] = { '\0' };
	for (int i = 0; i < n; i++) {
		scanf("%s", map[i]);
	}

	int result = 0;
	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= n - 8; j++) {

			char first = map[i][j];
			char odd, even;
			if (first == 'W') {
				odd = 'B';
				even = 'W';
			}
			else {
				odd = 'W';
				even = 'B';
			}
			int tempResult = 0;
			for (int i2 = i; i2 < i + 8; i2++) {
				for (int j2 = j; j2 < j + 8; j2++) {
					char temp = map[i2][j2];
					if ((i2 + j2) % 2 == 0 && map[i2][j2] != even) {
						tempResult++;
					}
					else if ((i2 + j2) % 2 == 1 && map[i2][j2] != odd) {
						tempResult++;
					}
				}
			}

			if (i == 0 && j == 0) {
				result = tempResult;
			}
			else if (tempResult < result) {
				result = tempResult;
			}
		}
	}

	printf("%d", result);

	return 0;
}


//10���� �Է� �޾� ��ͷ� 2���� ����ϱ�
/*
void decimalToBinary(int n) {
	if (n == 2) {
		printf("10");
	}
	else if (n == 1) {
		printf("1");
	}
	else {
		decimalToBinary(n / 2);
		printf("%d", n % 2);
	}
	return;
}
*/
/*
int n = 0;
scanf("%d", &n);

decimalToBinary(n);
*/

//���� 2447��: �� ��� - 10
/*
char board[10000][10000] = { '\0' };
void printStar(int x, int y, int n) {
	if (n == 3) {
		board[x][y] = '*';
		board[x][y + 1] = '*';
		board[x][y + 2] = '*';
		board[x + 1][y] = '*';
		board[x + 1][y + 1] = ' ';
		board[x + 1][y + 2] = '*';
		board[x + 2][y] = '*';
		board[x + 2][y + 1] = '*';
		board[x + 2][y + 2] = '*';
	}
	else {
		printStar(x, y, n/3);
		printStar(x, y + n / 3, n / 3);
		printStar(x, y + (n / 3 * 2), n / 3);
		printStar(x + n / 3, y, n / 3);

		for (int i = x + n / 3; i < x + (n / 3 * 2); i++) {
			for (int j = y + n / 3; j < y + (n / 3 * 3); j++) {
				board[i][j] = ' ';
			}
		}

		printStar(x + n / 3, y + (n / 3 * 2), n / 3);
		printStar(x + (n / 3 * 2), y, n / 3);
		printStar(x + (n / 3 * 2), y + n / 3, n / 3);
		printStar(x + (n / 3 * 2), y + (n / 3 * 2), n / 3);
	}

	return;
}
*/
/*
int n = 0;
scanf("%d", &n);

printStar(0, 0, n);

for (int i = 0; i < n; i++) {
	for (int j = 0; j < n; j++) {
		printf("%c", board[i][j]);
	}
	printf("\n");
}
*/

//���� 17478��: ����Լ��� ������?
/*
int n;
scanf("%d", &n);

printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
char temp[] = "";
whatIsRecursiveFunction(temp, n);
*/
/*
void whatIsRecursiveFunction(char* temp, int n) {
	printf("%s\"����Լ��� ������?\"\n", temp);
	printf("%s\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n", temp);
	printf("%s���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n", temp);
	printf("%s���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n", temp);
	if (n == 1) {
		printf("%s____\"����Լ��� ������?\"\n", temp);
		printf("%s____\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n", temp);
		printf("%s____��� �亯�Ͽ���.\n", temp);
	}
	else {
		char temp1[250] = "";
		strcat(temp1, temp);
		strcat(temp1, "____");
		whatIsRecursiveFunction(temp1, n - 1);
	}
	printf("%s��� �亯�Ͽ���.\n", temp);

	return;
}
*/

//���� 11729��: �ϳ��� ž �̵� ����
/*
void hanoi(int n, int start, int by, int destination) {
	if (n == 1) {
		printf("%d %d\n", start, destination);
	}
	else {
		hanoi(n - 1, start, destination, by);
		printf("%d %d\n", start, destination);
		hanoi(n - 1, by, start, destination);
	}

	return;
}
*/
/*
int n;
scanf("%d", &n);

int times = 1;
for (int i = 0; i < n; i++) {
	times *= 2;
}
printf("%d\n", times - 1);

hanoi(n, 1, 2, 3);
*/

//���� 2798��: ����
/*
int n, m;
scanf("%d %d", &n, &m);

int* nums = malloc(sizeof(int) * n);
scanf("%d", nums);
for (int i = 1; i < n; i++) {
	int tempNum;
	scanf("%d", &tempNum);

	*(nums + i) = tempNum;
}

int result = 0;
for (int i = 0; i < n - 2; i++) {
	for (int j = i + 1; j < n - 1; j++) {
		for (int k = j + 1; k < n; k++) {
			int temp = *(nums + i) + *(nums + j) + *(nums + k);
			if (temp <= m && m - temp < m - result) {
				result = temp;
			}
		}
	}
}

printf("%d", result);
*/

//���� 7568��: ��ġ
/*
int n;
scanf("%d", &n);

int** big = malloc(sizeof(int*) * n);
for (int i = 0; i < n; i++) {
	int weight, height;
	scanf("%d %d", &weight, &height);

	*(big + i) = malloc(sizeof(int) * 3);
	big[i][0] = weight;
	big[i][1] = height;
	big[i][2] = 1;
}

for (int i = 0; i < n; i++) {
	for (int j = 0; j < n; j++) {
		if (i != j && big[i][0] > big[j][0] && big[i][1] > big[j][1]) {
			big[j][2]++;
		}
	}
}

for (int i = 0; i < n; i++) {
	printf("%d ", big[i][2]);
}
*/

/*
int n, m;
scanf("%d %d", &n, &m);

char** map = malloc(sizeof(char*) * (n+1));
for (int i = 0; i < n; i++) {
	*(map + i) = malloc(sizeof(char) * (m + 5));
	for (int j = 0; j < m; j++) {
		scanf("%s", map[i]);
	}
}
*/