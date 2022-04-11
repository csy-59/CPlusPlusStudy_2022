#include <iostream>
using namespace std;

int main() {
    //실습1: 3과 7사이의 랜덤한 숫자를 출력하는 프로그램
    cout << "\n##실습1: 3과 7사이의 랜덤한 숫자를 출력하는 프로그램" << endl;
    cout << (rand() % 5) + 3 << endl;

    //실습2: 가장 작은 값과 큰 값을 입력 받아서, 그 사이의 임의의 값을 출력하는 프로그램을 작성하자.
    cout << "\n##실습2: 사용자가 지정한 범위의 랜덤값 출력" << endl;
    int minValue = 0;
    int maxValue = 0;
    cout << "가장 작은 값을 입력해주세요: ";
    cin >> minValue;
    cout << "가장 큰 값을 입력해주세요: ";
    cin >> maxValue;

    cout << (rand() % (maxValue - minValue + 1)) + minValue << endl;

    //실습3: 프로그램을 실행하면 내부적으로 1 ~ 9 사이의 숫자가 정답으로 정해진다.
    //  유저가 1 ~ 10 사이의 숫자를 입력하여 맞으면 true, 틀리면 false를 출력한다.
    cout << "\n##실습3: 1 ~ 9 사이의 랜덤 숫자 맞추기" << endl;
    int answer = (rand() % 9) + 1;
    int userInput = 0;
    cout << "예상하는 값을 입력해주세요(1~9): ";
    cin >> userInput;
    cout << boolalpha << (userInput == answer) << endl;
    (userInput == answer) ? cout << "true" << endl : cout << "false" << endl;

    //과제: rand()의 반환값
    cout << "\n##과제: rand()의 반환값" << endl;
    cout << "rand()의 반환값은 0~32767(RAND_MAX) 사이 정수형인 int입니다." << endl;

    return 0;
}