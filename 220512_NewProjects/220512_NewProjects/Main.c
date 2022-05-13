#include <Windows.h>
#include <stdbool.h>
#include <time.h>
#include <stdio.h>

typedef struct tagBullet {
	COORD coord;			// 탄환 좌표
	bool isShooting;		// 쏘고 있는 중인지
	float bulletLifeTime;	// 총알이 현재 화면에 있었던 시간
} Bullet;

// 플레이어 구조체
typedef struct tagPlayer {
	COORD coord;			// 플레이어 좌표
} Player;

int main(void) {

	// 플래이어 초기화
	Player player;
	player.coord.X = 0;
	player.coord.Y = 0;

	// 총알 초기화
	Bullet bullet;
	bullet.coord.X = 0;
	bullet.coord.Y = 0;
	bullet.isShooting = false;
	bullet.bulletLifeTime = 3.0f;

	clock_t preTick = clock();

	//콘솔에 대한 핸들 받기
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

	while (1) {
		//------------------------------------------
		// 입력 & 전처리
		//------------------------------------------

		// 시간 관리
		clock_t curTick = clock();
		float deltaTime = (float)(curTick - preTick) / CLOCKS_PER_SEC;

		preTick = curTick;

		// 이동키 입력
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

		// 총알 발사 입력
		if ((GetAsyncKeyState(VK_SPACE) & 0x8000)) {
			bullet.isShooting = true;
			bullet.coord.X = player.coord.X + 1;
			bullet.coord.Y = player.coord.Y;
		}

		//------------------------------------------
		// 이동 처리
		//------------------------------------------

		// 총알 좌표 처리
		if (bullet.isShooting) {
			bullet.bulletLifeTime -= deltaTime;

			bullet.coord.X++;

			// 3초후 사라짐
			if (bullet.bulletLifeTime <= 0) {
				bullet.bulletLifeTime = 3.0f;
				bullet.isShooting = false;
			}
		}

		//------------------------------------------
		// 출력
		//------------------------------------------

		// 총알
		if (bullet.isShooting) {
			SetConsoleCursorPosition(consoleHandle, bullet.coord);
			putchar('O');
		}

		// 플레이어
		SetConsoleCursorPosition(consoleHandle, player.coord);
		putchar('P');

		// 화면 초기화
		Sleep(10);
		system("cls");
	}

	CloseHandle(consoleHandle);

	return 0;
}
