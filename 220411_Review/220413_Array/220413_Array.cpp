#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	int nums[10] = { 1,2,3,4,5,6,7,8,9,12 };

	//cout << "메모리의 시작 주소:" << nums << endl;
	//cout << "배열의 첫번째 요소의 주소: " <<  &(nums[0]) << endl; //첫번째 요소의 주소. 
	//cout << "배열의 두번째 요소의 주소: " <<  &(nums[1]) << endl; //첫번째 요소의 주소로부터 4바이트 차이가 난다.
	//cout << "배열의 두번째 요소의 주소: " <<  &(nums[2]) << endl; //두번째 요소의 주소로부터 4바이트 차이가 난다.
	//cout << "배열 nums의 10번째(nums[9]) 요소: " << nums[9] << endl; //마지막 요소의 값.
	//cout << nums[48668] << endl; //허용되지 않은 메모리 주소에 접근함...

	//for문을 활용한 배열 요소 접근
	//cout << "\n##for문을 활용한 배열 요소 접근" << endl;
	//for(int i = 0 ;i <10;i++)
	//	cout<< "배열의 "<< i << "번 요소: " << nums[i] << endl;

	/*
	실습1.string형 배열 변수 5개짜리를 선언하고, 반복문을 통해 학생의 이름을 입력 받는다.
			후에 1~5 사이 값을 입력하면 해당 학생의 이름이 출력된다.
	*/

	//cout << "\n##실습: 학생 이름 입력받기" << endl;
	//string students[5];
	////이름 입력받기
	//for (int i = 0; i < 5; i++) {
	//	cout << i + 1 << "번째 학생의 이름을 입력하세요 : ";
	//	cin >> students[i];
	//}
	//
	//int studentNum;
	//cout << "\n1 ~ 5사이의 번호를 입력하세요 : ";
	//cin >> studentNum;
	//cout << studentNum << "번째 학생의 이름은 " << students[studentNum-1] << " 입니다." << endl;

	//##2차원 배열
	//int student_nums[3][5] = { {1,2,3,4,5},
	//						   {6,7,8,9,10},
	//						   {11,12,13,14,15} };
	//	//순서대로 출력하는 코드
	//for (int i = 0; i < 5; i++) {
	//	for (int j = 0; j < 3; j++)
	//		cout << "[" << j << "]" << "[" << i << "]: " << student_nums[j][i] << "\t";
	//	cout << endl;
	//}

		//if student_nums[0][6]을 사용하면?
	//cout << student_nums[0][5] << endl; 
	//7: 2차원이라고해도, 어차피 데이터가 연속적으로 나열되어있기 때문에. 하지만 정상적인 방법은 아니다.

	//2차원배열 실습
	/*
		구구단의 결과를 저장하는 2차원 배열을 하나 선언하고, 
		이중 for문을 이용해서 배열 변수에 구구단의 결과값을 저장.
		두 수를 입력 받아서 적합한 결과값을 출력해보자.
		ex.
		몇 단을 볼까요? : 4
		몇을 곱할까요? : 7

		4 * 7 = 28
	*/
	//cout << "\n##2차원배열 실습: 구구단 2차원 배열" << endl;
	//int guGuDan[8][9] = { 0 };
	//
	//for (int i = 2; i < 10; i++)
	//	for (int j = 1; j < 10; j++)
	//		guGuDan[i - 2][j - 1] = i * j;
	//cout << "(결과 저장 완료)" << endl;
	//
	//int dan, num;
	//cout << "몇 단을 볼까요?: ";
	//cin >> dan;
	//cout << "몇을 곱할까요?: ";
	//cin >> num;
	//
	//cout << "\n" << dan << " * " << num << " = " << guGuDan[dan - 2][num - 1] << endl;

	//int input_key = _getch(); //입력한 키의 아스키 코드 값을 반환(int 형)
	//char input_key_char = _getch(); //반환된 아스키 코드를 char 형태로 받기
	////묵시적 형변환
	//cout << (int)input_key_char << endl;//명시적 형변환|a입력시 97
	//
	//float test_float = 5.4f; //5.4는 double, 넘기기 전에 5.4를 f를 통해 float형으로 형변환 해줌
	//float test_float1 = (float)5.4;

	/*
	  아스키 코드 실습1: A ~ Z 키 중에 하나를 정답으로 설정한다. 
	  유저는 한 개의 키를 입력해서 설정된 값을 맞춘다.
	  유저가 입력한 키와 설정된 값이 맞으면 승리, 프로그램 종료.
	  값이 틀리면 남은 기회를 보여주고(총 5번) 5번 틀리면 정답을 알려주고 게임 오버
	*/
	//srand(time(NULL));
	//int answer = rand() % ('Z' - 'A' + 1) + 'A';
	//cout << "정답은 " << (char)answer << endl;
	//int chance = 5;
	//char input_alphabet;
	//
	//while (chance > 0)
	//{
	//	cout << "\n대문자 알파벳을 입력해주세요: \n";
	//	input_alphabet = _getch();
	//
	//	//+ 입력된 값이 대소문자 구분없이 처리될 수 있도록 수정해 보자.
	//	if (input_alphabet >= 97 && input_alphabet < 123)
	//		input_alphabet -= 32;
	//
	//	if ((int)input_alphabet == answer) {
	//		cout << "##승리!!\n프로그램이 종료됩니다." << endl;
	//		break;
	//	}
	//	else {
	//		//+ 틀릴 때마다 정답 알파벳이 입력된 알파벳 앞에 있는지, 뒤에 있는지 힌트를 준다.
	//		(input_alphabet > answer) ? 
	//			cout << input_alphabet << " 보다 앞에 있는 알파벳입니다." << endl :
	//			cout << input_alphabet << " 보다 뒤에 있는 알파벳입니다." << endl;
	//		cout << "#남은 기회 " << --chance << "번" << endl;
	//	}
	//}
	//
	//if(chance == 0)
	//	cout << "##정답은 " << (char)answer << "였습니다.\n게임 오버" << endl;

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
			break;
		case 'D':
		case 'd':
			//오른쪽으로 이동
			map[playerX][playerY] = '#';
			if (playerX < 9)
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

/*
	##boolean 타입:
	bool isAlive = false;
	> true/false 두가지 상태로 표현할 수 있는 데이터 타입(1바이트)
	bool isAlive = 5>3; (1/true)
	> 비교 연산자의 결과를 저장할 수 있음.

	##배열(자료구조)
	> 같은 데이터타입(boolean 포함 다양한 데이터 타입)에 여러 변수를 하나의 묶음으로 나타낸 것.
	> 배열의 데이터타입에 대한 동일한 크기로 메모리상에 "연속된 공간"이 할당된다.
		ex. int >> 4바이트 씩 연속해서.
	int nums[10];
		> nums라는 이름의 int형 10개가 붙어있는 배열. (4byte의 메모리 공간이 10개 잡혀있다)
		> 배열 이름은 배열의 시작 주소이다. (nums는 해당 배열의 시작주소.
	int nums[10] = { 1,2,3,4,5,6,7,8,9,12 };
		> 배열 초기화.
		> 1번에는 1이, 2번에는2....10번에는 12가 들어감.
	num[0]
		> 첫번째 배열 요소
	num[n-1]
		> 배열의 마지막 요소(배열 요소 수 - 1이 마지막 요소이다.)
	num[n+1231]
		> 허용되지 않은 메모리 주소에 접근.
		> 쓰레기 값이나, 런타임 에러가 뜬다.
		> 중요 프로그램의 메모리 주소에 접근 시 치명적인 오류가 뜬다! (조심!!)
	nums: 시작 주소. [0]: 시작 주소로부터 몇만큼 떨어져있는가.(0번 떨어져있다.)
	&(nums[0]): 첫번째 배열 요소의 주소(시작 주소와 같다.)
	#2차원 배열 및 다차원 배열
	> 배열이 (개념적으로) 2중, 다중으로 구성되어 있는 것.
		> 실제로는 1차원 배열이다.
	- 1차원 배열: int student_nums[5];
		> 5명의 학생이 있다.
		> 총 5개의 int가 나열
	- 2차원 배열: int student_nums[3][5];
		> 3개 반에 각각 5명의 학생이 있다. 
		> 총 15(3*5)의 int가 나열
	- 3차원 배열: int student_nums[4][3][5];
		> 4개 학년에 각각 3개 반이 존재, 각 반에 5명의 학생이 있다.
		> 총 60(4*3*5)의 int가 나열

	##문자 하나를 입력받는 방법(엔터 없이)
		_getch();//입력한 키의 아스키 값을 int 형으로 반환.
		char input = _getch();
		> char형으로 받으면 해당 문자가 그대로 들어감.

	##형변환(데이터 형변환)
		> 묵시적 형변환: 자동으로 형변환이 되는 것
			ex. char input = _getch();
		> 명시적 형변환: 수동으로 형변환이 되는 것
			ex. (int)input
*/