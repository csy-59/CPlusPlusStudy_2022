#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	/*
	  아스키 코드 실습1: A ~ Z 키 중에 하나를 정답으로 설정한다.
	  유저는 한 개의 키를 입력해서 설정된 값을 맞춘다.
	  유저가 입력한 키와 설정된 값이 맞으면 승리, 프로그램 종료.
	  값이 틀리면 남은 기회를 보여주고(총 5번) 5번 틀리면 정답을 알려주고 게임 오버
	*/
	srand(time(NULL));
	int answer = rand() % ('Z' - 'A' + 1) + 'A';
	cout << "정답은 " << (char)answer << endl;
	int chance = 5;
	char input_alphabet;

	while (chance > 0)
	{
		cout << "\n대문자 알파벳을 입력해주세요: \n";
		input_alphabet = _getch();

		//+ 입력된 값이 대소문자 구분없이 처리될 수 있도록 수정해 보자.
		if (input_alphabet >= 97 && input_alphabet < 123)
			input_alphabet -= 32;

		if ((int)input_alphabet == answer) {
			cout << "##승리!!\n프로그램이 종료됩니다." << endl;
			break;
		}
		else {
			//+ 틀릴 때마다 정답 알파벳이 입력된 알파벳 앞에 있는지, 뒤에 있는지 힌트를 준다.
			(input_alphabet > answer) ?
				cout << input_alphabet << " 보다 앞에 있는 알파벳입니다." << endl :
				cout << input_alphabet << " 보다 뒤에 있는 알파벳입니다." << endl;
			cout << "#남은 기회 " << --chance << "번" << endl;
		}
	}

	if (chance == 0)
		cout << "##정답은 " << (char)answer << "였습니다.\n게임 오버" << endl;

	/*
		##콘솔용 탈출게임
		> 10 * 10 짜리 크기의 맵을 구성한다. (2차원 배열 사용)
		##########
		##########
		##########
		##########
		##########
		######E###
		##########
		##########
		##########
		#P########
		> 플레이어가 존재한다.(P|시작지점 (0,0))
		> 탈출지점이 존재한다.(E|탈출지점 (0,0) 제외한 랜덤)
		> wasd 키입력을 통해 플레이어를 이동시킨다.
		> 플레이어가 E에 도달하면 "탈출에 성공했습니다." 프로그램 종료

		%참고%
		- 화면 갱신: #include <Window.h>의 system("cls");
	*/

	char map[10][10];
	//맵 초기화
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			map[i][j] = '#';

	srand(time(NULL));
	int exitX = -1, exitY = -1;
	do { //탈출 위치 지정
		exitX = rand() % 10;
		exitY = rand() % 10;
	} while (exitX == 0 && exitY == 0);
	map[exitX][exitY] = 'E';


	//플레이어 위치 초기값
	int playerX = 0, playerY = 0;
	do {
		//화면 초기화
		system("cls");
		map[playerX][playerY] = 'P';
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				cout << map[i][j];
			}
			cout << endl;
		}

		//입력 값에 의한 이동
		switch (_getch())
		{
		case 'W':
		case 'w':
			//위로 이동
			map[playerX][playerY] = '#';
			if (playerX > 0)
				playerX--;
			break;
		case 'A':
		case 'a':
			//왼쪽으로 이동
			map[playerX][playerY] = '#';
			if (playerY > 0)
				playerY--;
			break;
		case 'S':
		case 's':
			//아래로 이동
			map[playerX][playerY] = '#';
			if (playerX < 9)
				playerX++;
			else {
				cout << playerX << endl;
			}
			break;
		case 'D':
		case 'd':
			//오른쪽으로 이동
			map[playerX][playerY] = '#';
			if (playerY < 9)
				playerY++;
			break;
		default:
			break;
		}

	} while (playerX != exitX || playerY != exitY);

	//탈출 성공 후처리: 플레이어가 출구로 나간 것을 표시
	map[playerX][playerY] = '#';
	map[exitX][exitY] = 'E';
	system("cls");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << map[i][j];
		}
		cout << endl;
	}
	cout << "탈출에 성공했습니다." << endl;
}