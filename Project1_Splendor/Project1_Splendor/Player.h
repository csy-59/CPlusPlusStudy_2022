#pragma once
#include <iostream>
#include <string>
using namespace std;

class Player
{
	//�÷��̾� Ŭ����

	//��� ����
	string name; //�÷��̾� �̸�
	int turn; //�÷��̾� ����

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

