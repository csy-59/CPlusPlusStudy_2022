#include <Windows.h>
#include <stdbool.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

#define MAX_BULLET_COUNT 5
#define MAX_BULLET_DURATION 3

// �� ������ ���� ������
enum SceneType {
	TITLE_SCENE,			// Ÿ��Ʋ ��
	GAME_SCENE				// ���� ��
};

// Ÿ��Ʋ ����ü
typedef struct tagTitle {
	COORD coord;			// �ش� ������ ���� ��ǥ
	char text[128];			// ���� ����
} Title;

// �Ѿ� ����ü
typedef struct tagBullet {
	COORD coord;			// źȯ ��ǥ
	//bool isShooting;		// ��� �ִ� ������
	float bulletLifeTime;	// �Ѿ��� ���� ȭ�鿡 �־��� �ð�
} Bullet;

// �÷��̾� ����ü
typedef struct tagPlayer {
	COORD coord;			// �÷��̾� ��ǥ
} Player;


int main(void) {
	// #####################
	// #### ��ü �ý��� ����
	// #####################
	// ��ŸŸ�� ����
	clock_t preTick = clock();

	// �ֿܼ� ���� �ڵ� �ޱ�
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

	// ������� �ִ���: �ʱ�ȭ�� Ÿ��Ʋ
	enum SceneType currentScene = TITLE_SCENE;

	// ġ������ ������ ��� ���� ���� ����
	bool isFatalError = false;
	// ���� ������ ���� �迭
	char errorMessage[128];

	// ###########################
	// ###### Ÿ��Ʋ �� ���� ����
	// ###########################
	Title titles[3];
	//�� Ÿ��Ʋ �ʱ�ȭ
	titles[0].coord.X = 15;
	titles[0].coord.Y = 0;
	strcpy_s(titles[0].text, sizeof(titles[0].text), "�����̽� Ű��");
	titles[1].coord.X = 29;
	titles[1].coord.Y = 10;
	strcpy_s(titles[1].text, sizeof(titles[1].text), "������");
	titles[2].coord.X = 36;
	titles[2].coord.Y = 20;
	strcpy_s(titles[2].text, sizeof(titles[2].text), "������ ���۵˴ϴ�");

	// #########################
	// ###### ���� �� ���� ����
	// #########################
	// �÷��̾� �ʱ�ȭ
	Player player;
	player.coord.X = 0;
	player.coord.Y = 0;

	// �Ѿ� ����
	Bullet bullets[MAX_BULLET_COUNT];
	int bulletCount = 0;

	// #################
	// ###### ���� ����
	// #################
	while (!isFatalError) {
		// �ð� ����(��ó��)
		clock_t curTick = clock();
		float deltaTime = (float)(curTick - preTick) / CLOCKS_PER_SEC;
		preTick = curTick;

		// ���� ���� ó��
		switch (currentScene) {
			//Ÿ��Ʋ ��
		case TITLE_SCENE: {
			// ## �Է�
			// Spacebar �Է� �� �� �̵�
			if ((GetAsyncKeyState(VK_SPACE) & 0x8000)) {
				currentScene = GAME_SCENE;
			}

			// ## ó��
			// Ÿ��Ʋ �̵�
			if (titles[0].coord.Y != titles[1].coord.Y) {
				titles[0].coord.Y++;
			}
			if (titles[2].coord.Y != titles[1].coord.Y) {
				titles[2].coord.Y--;
			}

			// ## ���
			//Ÿ��Ʋ ���
			for (int i = 0; i < 3; i++) {
				SetConsoleCursorPosition(consoleHandle, titles[i].coord);
				puts(titles[i].text);
			}

			break;
		}

		// ���� ��
		case GAME_SCENE: {
			// ## �Է�
			// �̵�Ű �Է�
			if ((GetAsyncKeyState(VK_UP) & 0x8000)) {
				if (player.coord.Y > 0) {
					player.coord.Y--;
				}
			}
			if ((GetAsyncKeyState(VK_DOWN) & 0x8000)) {
				if (player.coord.Y < 50) {
					player.coord.Y++;
				}
			}
			if ((GetAsyncKeyState(VK_RIGHT) & 0x8000)) {
				if (player.coord.X < 100) {
					player.coord.X++;
				}
			}
			if ((GetAsyncKeyState(VK_LEFT) & 0x8000)) {
				if (player.coord.X > 0) {
					player.coord.X--;
				}
			}

			// �Ѿ� �߻� �Է�
			if ((GetAsyncKeyState(VK_SPACE) & 0x8000)) {
				if (bulletCount < MAX_BULLET_COUNT) {
					bullets[bulletCount].bulletLifeTime = MAX_BULLET_DURATION;
					bullets[bulletCount].coord.X = player.coord.X + 1;
					bullets[bulletCount].coord.Y = player.coord.Y;
					bulletCount++;
				}
			}

			// ## ó��
			// �Ѿ� ��ǥ ó��
			for (int i = 0; i < bulletCount; i++) {
				bullets[i].bulletLifeTime -= deltaTime;

				bullets[i].coord.X++;

				// 3���� �����
				if (bullets[i].bulletLifeTime <= 0) {
					for (int j = i; j < bulletCount - 1; j++) {
						bullets[j] = bullets[j + 1];
					}

					bulletCount--;
				}

			}

			// ## ���
			// �Ѿ� ���
			for (int i = 0; i < bulletCount; i++) {
				SetConsoleCursorPosition(consoleHandle, bullets[i].coord);
				putchar('O');
			}

			// �÷��̾� ���
			SetConsoleCursorPosition(consoleHandle, player.coord);
			putchar('P');

			break;
		}

		default: {
			// �� �̵� �� ������ ���� ���
			strcpy_s(errorMessage, sizeof(errorMessage), "Fatal ERR!!!: Wrong scene number\n");
			isFatalError = true;
			break;
		}
		}

		// ȭ�� �ʱ�ȭ
		Sleep(10);
		system("cls");
	}

	// ġ������ ������ �������� ��� �ش� ���� �޽����� ǥ�����ش�.
	if (isFatalError) {
		SetConsoleTextAttribute(consoleHandle, FOREGROUND_RED | FOREGROUND_INTENSITY);
		printf("%s\n", errorMessage);
		isFatalError = true;
		SetConsoleTextAttribute(consoleHandle, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
	}

	CloseHandle(consoleHandle);

	return 0;
}