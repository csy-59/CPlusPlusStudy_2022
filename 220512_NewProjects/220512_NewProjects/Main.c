#include <Windows.h>
#include <stdbool.h>
#include <time.h>
#include <stdio.h>

typedef struct tagBullet {
	COORD coord;			// źȯ ��ǥ
	bool isShooting;		// ��� �ִ� ������
	float bulletLifeTime;	// �Ѿ��� ���� ȭ�鿡 �־��� �ð�
} Bullet;

// �÷��̾� ����ü
typedef struct tagPlayer {
	COORD coord;			// �÷��̾� ��ǥ
} Player;

int main(void) {

	// �÷��̾� �ʱ�ȭ
	Player player;
	player.coord.X = 0;
	player.coord.Y = 0;

	// �Ѿ� �ʱ�ȭ
	Bullet bullet;
	bullet.coord.X = 0;
	bullet.coord.Y = 0;
	bullet.isShooting = false;
	bullet.bulletLifeTime = 3.0f;

	clock_t preTick = clock();

	//�ֿܼ� ���� �ڵ� �ޱ�
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

	while (1) {
		//------------------------------------------
		// �Է� & ��ó��
		//------------------------------------------

		// �ð� ����
		clock_t curTick = clock();
		float deltaTime = (float)(curTick - preTick) / CLOCKS_PER_SEC;

		preTick = curTick;

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
			bullet.isShooting = true;
			bullet.coord.X = player.coord.X + 1;
			bullet.coord.Y = player.coord.Y;
		}

		//------------------------------------------
		// �̵� ó��
		//------------------------------------------

		// �Ѿ� ��ǥ ó��
		if (bullet.isShooting) {
			bullet.bulletLifeTime -= deltaTime;

			bullet.coord.X++;

			// 3���� �����
			if (bullet.bulletLifeTime <= 0) {
				bullet.bulletLifeTime = 3.0f;
				bullet.isShooting = false;
			}
		}

		//------------------------------------------
		// ���
		//------------------------------------------

		// �Ѿ�
		if (bullet.isShooting) {
			SetConsoleCursorPosition(consoleHandle, bullet.coord);
			putchar('O');
		}

		// �÷��̾�
		SetConsoleCursorPosition(consoleHandle, player.coord);
		putchar('P');

		// ȭ�� �ʱ�ȭ
		Sleep(10);
		system("cls");
	}

	CloseHandle(consoleHandle);

	return 0;
}
