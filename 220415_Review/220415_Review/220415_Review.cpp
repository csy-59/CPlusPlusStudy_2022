#include <iostream>
#include <string>
using namespace std;

/*
	##추상화(C언어에서 코드를 추상화하는 데 사용되는 삼총사: 배열, 구조체, 함수)
		>> 실제 세계( 현상 )를 간략화/기호화/보편화 해서 표현한 것
		>> 코드는 너무 구체적이라 코드만 보고 어떤 것을 의미하는 것인지 모른다.
			>> 과거에는 이런 코드를 읽고 볼 수 있는 사람들의 전유물이다.
			>> 간략확/기호화/보편화 되지 않음. (제활용, 범용적인 활용을 할 수 없다.)
			 >> 이걸 추상화를 통해 보편화 해보자!(구조를 개선하자!!) 
					>> 그것이 현제 C, JAVA 등
		>> 코드에서 추상화가 필요한 이유: 결국 코드는 사람이 짜는 것이기 때문에
			>>	다른 사람이 코드를 해석하기 편리해야 하고, 
				다른 사람이 인수인계받아 유지보수하기 편리해야 하고,
				다른 사람들과 함께 공동으로 코드를 만들기 편리해야 하기 때문에.
		>> 배열(추상화의 특성에서) 쓰는 이유: 
			>> 속성이 동일한 여러 개의 데이터를 같은 이름과 순서를 지정한 연속된 번호로
				서로 연관되어 있음을 표시함으로써 추상화한다.
		>> 구조체 (추상화의 특성에서) 쓰는 이유:
			>> 데이터(자료형)을 실제로 쓰이는 데이터끼리 묶어서 추상화한다.
		>> 함수 (추상화의 특성에서) 쓰는 이유:
			>> 프로세스(코드)를 특정 기능 단위로 묶어서 추상화한다.
		*최악의 추상화 단계 > 추상화 단계를 상승시키는 과정
			(학생 이름 3개를 입력받는 상황)
			<최악의 추상화 단계> string a, b, c;
			<조금 나은 추상화 단계(1)> string a[3]; //적어도 뭔가 3개가 있다.
			<조금 나은 추상화 단계(2)> string name1, name2, name3; //의도는 알아볼 수 있다.
			<더 나은 추상화 단계> string studentsName[3]; //학생 이름이 3개 필요하다는 것이 보임. (의도가 명료)
*/

/*
	##구조체
		>> 변수를 모아 놓은 집합체.
		>> 특정 변수들이 무언가의 하위 개념으로 묶일 수 있을 때.
			ex. 학생의 정보를 기록.
			(현재 상태: 구조체를 모르는 상태)
				- studentName[10], studentAge[10], studentKorScore[10] ...
					>> 공통점이 있음! 모두 학생의 무언가임.
			(구조체로 나눔)
				>> 이름, 나이, 국어점수, 석차 등을 학생이라는 구조체로 묶어서 사용.
		>> 사용법
			- 구조체를 정의하는 위치: 구조체가 사용되는 함수의 (함수 바깥쪽) 앞에 정의한다. (ex. main)
			- 구조체 정의의 방법: struct
				struct [구조체 변수명]{
					[구조체 안에 들어갈 하위 변수(맴버 변수)]
						ex. 이름, 나이, 국어점수, 석차 등
				}; << 세미콜론 필수!!
			- 구조체 사용 방법:
				>> 구조체는 일종의 우리가 새롭게 만든 데이터형이다.
				student minseop; // 구조체 변수의 선언.
				} seoyeon, jaehyuk; //중괄호의 끝과 세미콜론 사이에다 student의 변수를 미리 선언할 수 있다.
			- 구조체 하위 변수의 접근:
				minseop.name = "심민섭";//minseop의 name은 "심민섭"이다.
				minseop.age = 34;//minseop의 age은 34살이다.
				minseop.homeTown = "인천";//minseop의 homeTown은 "인천"이다.
				minseop.pride = 100;//minseop의 pride은 100이다.
			- 구조체 안에 들어갈 수 있는 하위 변수의 종류
				>> int, bool, float 등의 기본 자료형 모두
				>> string과 같은 클래스
				>> 배열, 앞에서 선언한 구조체
			- 구조체 선언과 초기화
				>> 기본적으로 구조체 변수의 개념은 배열 변수의 개념과 동일.
					ex. int a[3] = {50, 60, 70}; 
					>> 구조체 또한 이런 방식으로 초기화가 가능하다.
					score myScore = {50,80,90}; //각각 kor, eng, math에 값이 들어감
			- 구조체 사용
				ex. player.HP = player.HP - monster[n].dmg;
				>> 주석 없이 코드를 배우지 않은 사람에게도 어느 정도의 컨셉은 알 수 있다.

*/

struct score {
	int kor;
	int eng;
	int math;
};

struct student {
	string name; // 클래스
	int age; //기본 자료형
	string homeTown;
	int pride;
	int monthlyScore[12]; //배열
	score myScore; //앞에 선언한 구조체
} seoyeon, jaehyuk; //중괄호의 끝과 세미콜론 사이에다 student의 변수를 미리 선언할 수 있다.
//name, age, korScore, rank라는 하위 변수를 갖고 있는 student라는 구조체를 정의한다.

int main() { //이게 우리가 쓰고 있는 유일한 함수

	string a, b, c;
	string name1, name2, name3;
	string studentsName[3];
	student minseop; // 구조체 변수의 선언

	minseop.name = "심민섭";//minseop의 name은 "심민섭"이다.
	minseop.age = 34;//minseop의 age은 34살이다.
	minseop.homeTown = "인천";//minseop의 homeTown은 "인천"이다.
	minseop.pride = 100;//minseop의 pride은 100이다.
	minseop.myScore.eng = 79; //구조체 속 구조체
	minseop.myScore.kor = 95;
	minseop.monthlyScore[0] = 80; //구조체 속 배열
	minseop.monthlyScore[1] = 95;

	//구조체 초기화
	score myScore = { 10,20,30 };
	cout << "mySocre.kor: " << myScore.kor << endl;
	cout << "mySocre.math: " << myScore.math << endl;
	cout << "mySocre.eng: " << myScore.eng << endl;
	//ex. monster a = {"고블린", 79, 55.12f, ture, 100 };

	//실습: student 구조체를 사용하여 자신의 정보를 입력하고 출력해보자.
	student seoyeon;
	seoyeon.name = "최서연";
	seoyeon.age = 22;
	seoyeon.homeTown = "하남";
	seoyeon.pride = 50;

	cout << "\nseoyeon의 name : " << seoyeon.name << endl;
	cout << "seoyeon의 age : " << seoyeon.age << endl;
	cout << "seoyeon의 homeTown : " << seoyeon.homeTown << endl;
	cout << "seoyeon의 pride : " << seoyeon.pride << endl;
	
	/*
		과제: 미궁 탈출 게임의 업데이트
		사용할 수 있는 모든 요소에 구조체를 활용하여 소스 코드를 개선해 보세요.
		 >> 각 위치에 지형 정보를 넣고(숲, 늪, 평지)
		 >> 플레이어에는 피로도를 넣고
		 >> 플레이어가 어느 지형에 있는지, 플레이어의 피로도가 얼마인지. (ex. 숲 -1, 늪 -3, 평지 0)
	*/

	//마인이스케이프.cpp 참고
	

	return 0;
}