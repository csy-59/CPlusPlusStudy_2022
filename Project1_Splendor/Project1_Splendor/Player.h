#pragma once
#include <iostream>
#include <string>
using namespace std;

class Player
{
	//플레이어 클래스

	//멤버 변수
	string name; //플레이어 이름
	int turn; //플레이어 순서

	Player(string name, int turn) {
		this->name = name;
		this->turn = turn;
	}
	Player() {
		name = "";
		turn = -1;
	}

	void setName(string name) {
		this->name = name;
	}
	void setTurn(int turn) {
		this->turn = turn;
	}
};

