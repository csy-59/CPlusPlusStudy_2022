#include <iostream>
#include <Windows.h>
using namespace std;

void newgame() {
	cout << "==================================" << endl;
	cout << "  새 스플렌더 게임을 시작합니다." << endl;
	cout << "==================================" << endl;

	//게임 인원수를 옳바르게 받았는지 확인하기 위한 플래그
	bool game_start_flag = false;

	//게임 인원수 받기(혹은 -1로 나가기)
	do {
		cout << "게임 플레이 인원수를 입력해주세요\n(2~4명, -1을 입력하면 매인으로 돌아갑니다.): ";
		int player_count = 0;
		cin >> player_count;

		//나가기 선택시
		if (player_count == -1) { //메인으로 돌아감
			cout << "main으로 돌아갑니다." << endl;
			Sleep(500);	//0.5초 후에 메인으로 돌아감
			system("cls"); //화면 클리어 
			return;
		}
		//2~4명이 아닌 플레이어 수를 입력시 (재입력)
		else  if (player_count > 4 || player_count < 2) 
			cout << "2~4명의 인원수만 플레이 가능합니다." << endl;
		//올바른 플레이어 수를 입력시
		else {
			//입력한 값 확인하기
			char player_y_n = NULL;
			while (player_y_n != 'y' && player_y_n != 'Y' && player_y_n != 'n' && player_y_n != 'N') {
				cout << player_count << "명의 플레이어가 맞으십니까?(y/n): " << endl;
				cin >> player_y_n;
				if (player_y_n == 'y' || player_y_n == 'Y')
					cout << player_count << "명의 플레이어로 새 게임을 시작합니다.." << endl;
			}

			//입력한 값이 맞으면 새 게임으로 시작
			if (player_y_n == 'y' || player_y_n == 'Y') {
				Sleep(500);
				system("cls");
				game_start_flag = !game_start_flag;
				break;
			}
		}
	} while (!game_start_flag);

	//플레이어 정보(닉네임) 받기


	//본격적인 게임 시작
	
}

int main() {
	cout << "==================================" << endl;
	cout << "스플렌더 게임에 오신 것을 환영합니다." << endl;
	cout << "==================================" << endl;

	int main_menu_num = -1;
	while(main_menu_num != 2) { //메인 매뉴 선택하기(새 게임/ 나가기)
		cout << "1. 새 게임 시작  2. 나가기" << endl;
		cout << ">> ";
		cin >> main_menu_num;

		// 메뉴 선택지 switch로 분별
		switch (main_menu_num)
		{
		case 1: //새 게임 시작
			system("cls"); //콘솔 클리어. 출력됬던 콘솔을 클리어 해준다.
			//게임에 대한 코드가 들어있는 newGame 함수
			newgame();
			//돌아온 경우, 다시 메인이 출력되어야함으로.
			cout << "==================================" << endl;
			cout << "스플렌더 게임에 오신 것을 환영합니다." << endl;
			cout << "==================================" << endl;
			break;
		case 2: //나가기
			cout << "게임을 종료합니다." << endl;
			break;
		default: //디폴트
			cout << "유효하지 않은 선택입니다." << endl;
			break;
		}
	}
}
