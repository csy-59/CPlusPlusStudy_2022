﻿#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*
	* <<나에 대한 분석>>
	*	1) 이름: 최서연
	*	2) 나이: 22살
	*	3) 키: 160.9
	*	4) MBTI: INFP
	*	5) 혈액형: A
	*	6) 생일: 20010509
	*	7) 출신 학교: 서울여자대학교
	*	8) 출신 학과: 소프트웨어융합학과
	*	9) 거주지: 하남시
	*	10) 좋아하는 색상: 검정색
	*	11) 좋아하는 동물: 고양이
	*	12) 좋아하는 계절: 가을
	*	13) 가장 좋아하는 영화: 너는 여기에 없었다.
	*	14) 가장 좋아하는 미드: 피키 블라인더스
	*	15) 가장 좋아하는 애니메이션: 보잭 홀스맨
	*	16) 가장 좋아하는 노래: 장미
	*	17) 싫어하는 것: 콩
	*	18) 장점: 끈기
	*	19) 단점: 완벽주의
	*	20) 목표: AR/VR 개발자
	*/

	//변수
	string name = "최서연";
	int age = 22;
	float height = 160.9f;
	string mbti = "INFP";
	char bloodType = 'A';
	int birth = 20010509;
	string school = "서울여자대학교";
	string department = "소프트웨어융합학과";
	string residence = "하남시";
	string favoriteColor = "검정색";
	string favoriteAnimal = "고양이";
	string favoriteSeason = "가을";
	string favoriteMovie = "You were Never Really Here";
	string favoriteDrama = "Peaky Blinders";
	string favoriteAnim = "Bojack Horseman";
	string favoriteSong = "EVERYTHING";
	string dislike = "콩";
	string strength = "끈기";
	string weakness = "완벽주의";
	string goal = "AR/VR 개발자";

	//출력
	cout << "이름: " << name << endl;
	cout << "나이: " << age << endl;
	cout << "키: " << height << endl;
	cout << "MBTI: " << mbti << endl;
	cout << "혈액형: " << bloodType << endl;
	cout << "출신 학교:" << school << endl;
	cout << "출신 학과: " << department << endl;
	cout << "거주지: " << residence << endl;
	cout << "좋아하는 색상: " << favoriteColor << endl;
	cout << "좋아하는 동물: " << favoriteAnimal << endl;
	cout << "좋아하는 계절: " << favoriteSeason << endl;
	cout << "가장 좋아하는 영화: " << favoriteMovie << endl;
	cout << "가장 좋아하는 미드: " << favoriteDrama << endl;
	cout << "가장 좋아하는 애니메이션: " << favoriteAnim << endl;
	cout << "가장 좋아하는 노래: " << favoriteSong << endl;
	cout << "싫어하는 것: " << dislike << endl;
	cout << "장점: " << strength << endl;
	cout << "단점: " << weakness << endl;
	cout << "목표: " << goal << endl;
}