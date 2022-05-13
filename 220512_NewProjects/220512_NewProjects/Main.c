#include <Windows.h>
#include <stdbool.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

#define MAX_BULLET_COUNT 5
#define MAX_BULLET_DURATION 3

// 씬 종류에 대한 열거형
enum SceneType {
	TITLE_SCENE,			// 타이틀 씬
	GAME_SCENE				// 게임 씬
};

// 타이틀 구조체
typedef struct tagTitle {
	COORD coord;			// 해당 문구가 있을 좌표
	char text[128];			// 문구 내용
} Title;

// 총알 구조체
typedef struct tagBullet {
	COORD coord;			// 탄환 좌표
	//bool isShooting;		// 쏘고 있는 중인지
	float bulletLifeTime;	// 총알이 현재 화면에 있었던 시간
} Bullet;

// 플레이어 구조체
typedef struct tagPlayer {
	COORD coord;			// 플레이어 좌표
} Player;


int main(void) {
	// #####################
	// #### 전체 시스템 관련
	// #####################
	// 델타타임 관련
	clock_t preTick = clock();

	// 콘솔에 대한 핸들 받기
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

	// 어느씬에 있는지: 초기화는 타이틀
	enum SceneType currentScene = TITLE_SCENE;

	// 치명적인 오류일 경우 게임 강제 종료
	bool isFatalError = false;
	// 오류 내용을 담을 배열
	char errorMessage[128];

	// ###########################
	// ###### 타이틀 씬 관련 변수
	// ###########################
	Title titles[3];
	//각 타이틀 초기화
	titles[0].coord.X = 15;
	titles[0].coord.Y = 0;
	strcpy_s(titles[0].text, sizeof(titles[0].text), "스페이스 키를");
	titles[1].coord.X = 29;
	titles[1].coord.Y = 10;
	strcpy_s(titles[1].text, sizeof(titles[1].text), "누르면");
	titles[2].coord.X = 36;
	titles[2].coord.Y = 20;
	strcpy_s(titles[2].text, sizeof(titles[2].text), "게임이 시작됩니다");

	// #########################
	// ###### 게임 씬 관련 변수
	// #########################
	// 플래이어 초기화
	Player player;
	player.coord.X = 0;
	player.coord.Y = 0;

	// 총알 관리
	Bullet bullets[MAX_BULLET_COUNT];
	int bulletCount = 0;

	// #################
	// ###### 게임 시작
	// #################
	while (!isFatalError) {
		// 시간 관리(전처리)
		clock_t curTick = clock();
		float deltaTime = (float)(curTick - preTick) / CLOCKS_PER_SEC;
		preTick = curTick;

		// 씬에 따른 처리
		switch (currentScene) {
			//타이틀 씬
		case TITLE_SCENE: {
			// ## 입력
			// Spacebar 입력 시 씬 이동
			if ((GetAsyncKeyState(VK_SPACE) & 0x8000)) {
				currentScene = GAME_SCENE;
			}

			// ## 처리
			// 타이틀 이동
			if (titles[0].coord.Y != titles[1].coord.Y) {
				titles[0].coord.Y++;
			}
			if (titles[2].coord.Y != titles[1].coord.Y) {
				titles[2].coord.Y--;
			}

			// ## 출력
			//타이틀 출력
			for (int i = 0; i < 3; i++) {
				SetConsoleCursorPosition(consoleHandle, titles[i].coord);
				puts(titles[i].text);
			}

			break;
		}

		// 게임 씬
		case GAME_SCENE: {
			// ## 입력
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
				if (bulletCount < MAX_BULLET_COUNT) {
					bullets[bulletCount].bulletLifeTime = MAX_BULLET_DURATION;
					bullets[bulletCount].coord.X = player.coord.X + 1;
					bullets[bulletCount].coord.Y = player.coord.Y;
					bulletCount++;
				}
			}

			// ## 처리
			// 총알 좌표 처리
			for (int i = 0; i < bulletCount; i++) {
				bullets[i].bulletLifeTime -= deltaTime;

				bullets[i].coord.X++;

				// 3초후 사라짐
				if (bullets[i].bulletLifeTime <= 0) {
					for (int j = i; j < bulletCount - 1; j++) {
						bullets[j] = bullets[j + 1];
					}

					bulletCount--;
				}

			}

			// ## 출력
			// 총알 출력
			for (int i = 0; i < bulletCount; i++) {
				SetConsoleCursorPosition(consoleHandle, bullets[i].coord);
				putchar('O');
			}

			// 플레이어 출력
			SetConsoleCursorPosition(consoleHandle, player.coord);
			putchar('P');

			break;
		}

		default: {
			// 씬 이동 중 에러가 났을 경우
			strcpy_s(errorMessage, sizeof(errorMessage), "Fatal ERR!!!: Wrong scene number\n");
			isFatalError = true;
			break;
		}
		}

		// 화면 초기화
		Sleep(10);
		system("cls");
	}

	// 치명적인 오류로 종료했을 경우 해당 에러 메시지를 표시해준다.
	if (isFatalError) {
		SetConsoleTextAttribute(consoleHandle, FOREGROUND_RED | FOREGROUND_INTENSITY);
		printf("%s\n", errorMessage);
		isFatalError = true;
		SetConsoleTextAttribute(consoleHandle, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
	}

	CloseHandle(consoleHandle);

	return 0;
}