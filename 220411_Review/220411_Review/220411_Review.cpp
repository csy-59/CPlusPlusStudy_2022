// 220411_Review.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //실습: 숫자 범위 판별(if문)
   /* << <과제1: 정수를 하나 입력 받아서, 입력 받은 숫자가 10보다 크면 "입력된 숫자가 10보다 큽니다." 출력,
            10 이하 9초과 이면 "9보다 큽니다." 출력,
            9 이하 6초과 이면 "6보다 큽니다." 출력,
            그 이외에는 "6보다 작거나 같습니다." 출력. >>>*/

    //cout << "\n##실습1: 숫자 범위 판별(if문)" << endl;
    //
    //int user_num;
    //cout << "정수 하나를 입력해주세요: ";
    //cin >> user_num;
    //
    //if (user_num > 10) 
    //    cout << "입력된 숫자가 10보다 큽니다." << endl;
    //else if (user_num > 9) 
    //    cout << "9보다 큽니다." << endl;
    //else if (user_num > 6) 
    //    cout << "6보다 큽니다." << endl;
    //else 
    //    cout << "6보다 작거나 같습니다." << endl;
    
    ////입력
    //int input_num;
    //cin >> input_num;
    //
    ////처리&출력
    //if(input_num > 10)
    //    cout << "입력된 숫자가 10보다 큽니다." << endl;
    //else if(10 >= input_num && input_num > 9)
    //    cout << "9보다 큽니다." << endl;
    //else if(input_num > 6)
    //    cout << "6보다 큽니다." << endl;
    //else 
    //    cout << "6보다 작거나 같습니다." << endl;
    //
    ////비교 연산자 중복 사용
    ///*
    //* 10 >= input_num >9
    //*   == (10 >= input_num) > 9
    //*   == 1(참) > 9
    //*   == 0(거짓)
    //*/

    /*//실습2: 고향에 따른 다른 인사말 출력
    * <<<과제2: switch 실습.
*   당신의 고향은 어디입니까?
*   1. 서울 2. 양평 3. 광주 4. 대전 5. 제주도
*   (입력)
* 
*   안녕하세요. 당신의 고향은 (서울)이군요.
*   (제주) 안녕하수꽝. 혼저옵서예.
*   default: 5개 중에 선택해 주세요.>>>
    */

    //cout << "\n##실습2: 고향에 따른 다른 인사말 출력(switch)" << endl;
    //cout << "당신의 고향은 어디입니까?" << endl;
    //cout << "1. 서울  2. 양평  3. 광주  4. 대전  5. 제주도" << endl;
    //cout << "입력: ";
    //int regine_number;
    //cin >> regine_number;
    //
    //switch (regine_number)
    //{
    //case 1: 
    //    cout << "\n안녕하세요. 당신의 고향은 서울이군요." << endl;
    //    break;   
    //case 2:      
    //    cout << "\n안녕하세요. 당신의 고향은 양평이군요." << endl;
    //    break;   
    //case 3:      
    //    cout << "\n아따 허벌라게 반갑구마잉. 광주 사람을 여기서 만나네." << endl;
    //    break;   
    //case 4:      
    //    cout << "\n안녕하셔유~. 대전 좋지유." << endl;
    //    break;   
    //case 5:      
    //    cout << "\n안녕하수꽝. 제주에서 왔맨" << endl;
    //    break;   
    //default:     
    //    cout << "\n5개 중에 선택해주세요." << endl;
    //    break;
    //}
    //
    //cout << "당신의 고향은 어디입니까?" << endl;
    //cout << "1. 서울 2. 양평 3. 광주 4. 대전 5. 제주도" << endl;
    //
    ////입력: 정수형 변수
    //int hometown_number;
    //cin >> hometown_number;
    //
    ////처리&출력
    //switch (hometown_number)
    //{
    //case 1:
    //    cout << "안녕하세요. 당신의 고향은 서울이군요." << endl;
    //    break;
    //case 2:
    //    cout << "안녕하세요. 당신의 고향은 양평이군요." << endl;
    //    break;
    //case 3:
    //    cout << "\n아따 허벌라게 반갑구마잉. 광주 사람을 여기서 만나네." << endl;
    //    break;
    //case 4:
    //    cout << "\n안녕하셔유~. 대전 좋지유." << endl;
    //    break;
    //case 5:
    //    cout << "\n안녕하수꽝. 제주에서 왔맨" << endl;
    //    break;
    //default:
    //    cout << "\n5개 중에 선택해주세요." << endl;
    //    break;
    //}
    //
    ////실습2를 if문으로 변경
    //if (hometown_number == 1) {
    //    cout << "안녕하세요. 당신의 고향은 서울이군요." << endl;
    //}
    //else if (hometown_number == 2) {
    //    cout << "안녕하세요. 당신의 고향은 양평이군요." << endl;
    //}
    //else if (hometown_number == 3) {
    //    cout << "\n아따 허벌라게 반갑구마잉. 광주 사람을 여기서 만나네." << endl;
    //}
    //else if (hometown_number == 4) {
    //    cout << "\n안녕하셔유~. 대전 좋지유." << endl;
    //}
    //else if (hometown_number == 5) {
    //    cout << "\n안녕하수꽝. 제주에서 왔맨" << endl;
    //}
    //else {
    //    cout << "\n5개 중에 선택해주세요." << endl;
    //}

    //예제: while문. Hello World를 5번 출력하는 프로그램
    //cout << "\n##while문(Hello World 5번 출력)" << endl;
    //cout << "Hello World" << endl;
    //while (1) { //무한반복. 한정된 메모리를 다 사용할 경우 종료.
    //int repeat_count = 0;
    //
    //cout << "\n> break가 있는 if문 추가" << endl;
    //while(1){
    //    cout << "Hello World" << endl;
    //    repeat_count++;
    //
    //    if (repeat_count >= 5)
    //        break;
    //}
    //
    //cout << "\n> 조건식을 바꾸는 실행문 추가" << endl;
    //repeat_count = 0;
    //while (repeat_count < 5) {
    //    cout << "Hello World" << endl;
    //    repeat_count++;
    //}
    //
    //cout << "\n> while 조건식에 증감 연산자 추가" << endl;
    //repeat_count = 0;
    //while (repeat_count++ < 5) {
    //    cout << "Hello World" << endl;
    //}
    //
    //cout << "\n##do-while문(Hello World 5번 출력)" << endl;
    //repeat_count = 0;
    //do {
    //    cout << "Hello World" << endl;
    //    repeat_count++;
    //} while (repeat_count < 5);
    //
    //
    //cout << "\n> 조건식이 거짓인 while문" << endl;
    //while (0) {
    //    cout << "Hello World" << endl;
    //    repeat_count++;
    //
    //    if (repeat_count >= 5)
    //        break;
    //}
    //
    //cout << "\n> 조건식이 거짓인 do-while문" << endl;
    //repeat_count = 0;
    //do {
    //    cout << "Hello World" << endl;
    //    repeat_count++;
    //} while (0);

    //실습3: 맞출 때까지 반복되는 숫자 맞추기 프로그램
    //cout << "\n##실습3: 맞출 때까지 반복되는 숫자 맞추기 프로그램" << endl;
    //srand(time(NULL));
    //int answer = rand() % 9 + 1;
    //
    //int user_num;
    //do {
    //    cout << "예상 값 입력: ";
    //    cin >> user_num;
    //    if (user_num != answer)
    //        cout << "false" << endl;
    //    else 
    //        break;
    //} while (1);
    //
    //cout << "true" << endl;
    //
    //int correct_number = rand() % 9 + 1;
    //cout << "미리보는 정답: " << correct_number << endl;
    //
    //int input_quiz_number = -1; //초기식
    //while (input_quiz_number != correct_number) { //조건식
    //    //입력
    //    cin >> input_quiz_number;
    //
    //    //출력: true or false;
    //    (input_quiz_number == correct_number) ? cout << "true" << endl : cout << "false" << endl;
    //
    //    ////1) break; 조건을 추가
    //    //if (input_quiz_number == correct_number) {
    //    //    break;
    //    //}
    //}

    //##for문
    //cout << "\n##for문" << endl;
    //for (int i = 0; i < 5; i+=2) {// 3번 나온다.(0, 2, 4)
    //    cout << "Hello World" << endl;
    //}
    
    ////for 실습1: 10부터 1까지 차례대로 출력되는 코드를 작성해보자. >>>
    //cout << "##for문 실습1: 10부터 1까지 차례대로 출력되는 코드를 작성해보자." << endl;
    //for (int i = 10; i > 0; i--)
    //    cout << i << " ";
    //
    ////for 실습2: 100 미만의 3의 배수를 차례대로 출력되는 코드를 작성해보자. >>>
    //cout << "\n\n##for문 실습2: 100 미만의 3의 배수를 차례대로 출력되는 코드를 작성해보자." << endl;
    //for (int i = 1; i * 3 < 100; i++)
    //    cout << i * 3 << " ";
    //
    //cout << endl;
    //for (int i = 3; i < 100; i += 3)
    //    cout << i << " ";
    //
    ////for 실습3: 1000 미만의 2의 승수를 차례대로 출력되는 코드를 작성해보자. >>>
    //cout << "\n\n##for문 실습3: 1000 미만의 2의 승수를 차례대로 출력되는 코드를 작성해보자." << endl;
    //for (int i = 1;i < 1000;i *= 2)
    //    cout << i << " ";

    //cout << endl;
    /*<< <for 실습4: 구구단을 출력해보자. >> >
    * 실습4_1.구구단 2단을 차례대로 출력해보자.
    * 실습4_2.구구단 2단~9단을 차례대로 출력해보자.
    * 실습4_3.구구단 2단~9단을 다음과 같은 형태로 출력해보자.
    *       2단 3단 4단
    *       5단 6단 7단
    *       8단 9단
    */
    
    //for 실습4_1: 구구단 2단을 차례대로 출력해보자.
    cout << "##for문 실습4_1: 구구단 2단을 차례대로 출력해보자." << endl;
    for (int i = 1;i < 10;i++)
        cout << "2 * " << i << " = " << 2 * i << endl;

    //for 실습4_2: 구구단 2단~9단을 차례대로 출력해보자.
    cout << "\n##for문 실습4_2: 구구단 2단~9단을 차례대로 출력해보자." << endl;
    for (int i = 2; i < 10;i++) {
        for (int j = 1; j < 10;j++) {
            cout << i <<" * " << j << " = " << i * j << endl;
        }
        cout << endl;
    }

    //for 실습4_3: 구구단 2단~9단을 다음과 같은 형태로 출력해보자.
    cout << "\n##for문 실습4_3: 구구단 2단~9단을 다음과 같은 형태로 출력해보자." << endl;
    for (int i = 2; i <= 8;i+=3) {
        for (int j = 1; j < 10;j++) {
            cout << i <<" * " << j << " = " << i * j <<"\t";
            cout << i + 1 <<" * " << j << " = " << (i + 1) * j <<"\t";
            if (i != 8)
                cout << i + 2 << " * " << j << " = " << (i + 2) * j << endl;
            else
                cout << endl;
        }
        cout << endl;
    }

}

void _220411_study() {
    int input_key;
    float testFloat = 5.3f;//7자리
    //float testFloat1 = 5.3; //초기화 중 double에서 float로 잘립니다. 기본적으로 double 형. double은 float보다 크다.
    char testCharacter = 'a';
    std::string testString = "Hello";
    std::cout << "Hello World!\n";

    //std::cin >> input_key;
    std::cout << &input_key << endl;

    //관계 연산자
    cout << "\n##관계 연산자" << endl;
    cout << "((10 < 5) == 0)" << ((10 < 5) == 0) << std::endl;// 10 < 5의 결과값: 0, 0은 0과 같으니 1(참)

    //논리 연산자
    cout << "\n##논리 연산자" << endl;
    cout << "!1: " << !1 << endl; //0
    cout << "!10: " << !0 << endl; //1
    cout << "!-300: " << !- 300 << endl; //0 (0이 아니면 참이다)

    //3항 연산자
    cout << "\n##3항 연산자" << endl;
    (10 > 5) ? cout << "10이 5보다 크다." << endl : cout << "10이 5보다 작다." << endl; //10이 5보다 크다
    (10 < 5) ? cout << "10이 5보다 크다." << endl : cout << "10이 5보다 작다." << endl; //10이 5보다 작다

    //난수
    cout << "\n##난수" << endl;
    srand(time(NULL)); //unsigned int타입 _Seed 매개변수
    cout << rand() << endl;
}
void _220411_team_work() {
    ///*과제: 스플렌더*/
    ////개임 진행 관련
    //int playerCount = 2;//2~4
    //int round = 0;
    //
    ////플레이어 정보
    //int player1Score = 0;           //점수
    //int player1EmeraldToken = 0;    //에메랄드 토큰 갯수
    //int player1DiamondToken = 0;    //다이아 토큰 갯수
    //int player1SapphireToken = 0;   //사파이어 토큰 갯수
    //int player1OnyxToken = 0;       //에메랄드 토큰 갯수
    //int player1RubyToken = 0;       //에메랄드 토큰 갯수
    //int player1GoldToken = 0;       //에메랄드 토큰 갯수
    //int player1EmeraldCard = 0;     //에메랄드 토큰 갯수
    //int player1DiamondCard = 0;     //에메랄드 토큰 갯수
    //int player1SapphireCard = 0;    //에메랄드 토큰 갯수
    //int player1OnyxCard = 0;        //에메랄드 토큰 갯수
    //int player1RubyCard = 0;        //에메랄드 토큰 갯수
    //int player1RoyalCard = 0;       //에메랄드 토큰 갯수
    //int player1KeepCard = 0;        //에메랄드 토큰 갯수
    //int playerTurn;                 //에메랄드 토큰 갯수
    //
    ///*이하 동문*/
    //int player2Score = 0;
    //int player2TotalTokenCount = 0;
    //int player2EmeraldToken = 0;
    //int player2DiamondToken = 0;
    //int player2SapphireToken = 0;
    //int player2OnyxToken = 0;
    //int player2RubyToken = 0;
    //int player2GoldToken = 0;
    //int player2EmeraldCard = 0;
    //int player2DiamondCard = 0;
    //int player2SapphireCard = 0;
    //int player2OnyxCard = 0;
    //int player2RubyCard = 0;
    //int player2RoyalCard = 0;
    //int player2KeepCard = 0;
    //int playerTurn;
    //
    //int player3Score = 0;
    //int player3TotalTokenCount = 0;
    //int player3EmeraldToken = 0;
    //int player3DiamondToken = 0;
    //int player3SapphireToken = 0;
    //int player3OnyxToken = 0;
    //int player3RubyToken = 0;
    //int player3GoldToken = 0;
    //int player3EmeraldCard = 0;
    //int player3DiamondCard = 0;
    //int player3SapphireCard = 0;
    //int player3OnyxCard = 0;
    //int player3RubyCard = 0;
    //int player3RoyalCard = 0;
    //int player3KeepCard = 0;
    //int playerTurn;
    //
    //int player4Score = 0;
    //int player4TotalTokenCount = 0;
    //int player4EmeraldToken = 0;
    //int player4DiamondToken = 0;
    //int player4SapphireToken = 0;
    //int player4OnyxToken = 0;
    //int player4RubyToken = 0;
    //int player4GoldToken = 0;
    //int player4EmeraldCard = 0;
    //int player4DiamondCard = 0;
    //int player4SapphireCard = 0;
    //int player4OnyxCard = 0;
    //int player4RubyCard = 0;
    //int player4RoyalCard = 0;
    //int player4KeepCard = 0;
    //int playerTurn;
    //
    ////보석 토큰 관련
    //int emeraldToken;//현재 남아있는 토큰의 수
    //int diamondToken;
    //int sapphireToken;
    //int onyxToken;
    //int rubyToken;
    //int goldToken = 5;
    //
    ////개발 카드 관련
    //int lev1DackCount;
    //int lev2DackCount;
    //int lev3DackCount;
    //int lev1FloorCount;
    //int lev2FloorCount;
    //int lev3FloorCount;
    //
    ////개발 카드 틀(이거 X 90)
    //string cardJewelry;//emerald, diamond, sapphire, onyx, ruby
    //int cardScore;
    //int cardEmeraldPrice;
    //int cardDiamondPrice;
    //int cardSapphirePrice;
    //int cardOnyxPrice;
    //int cardRubyPrice;
    //
    ////귀족 타일 관련(이거 X 10)
    //string royalCardName;
    //int royalCardScore;
    //int royalCardEmeraldPrice;
    //int royalCardDiamondPrice;
    //int royalCardSapphirePrice;
    //int royalCardOnyxPrice;
    //int royalCardRubyPrice;
}
void _220411_home_work() {
    //실습1: 3과 7사이의 랜덤한 숫자를 출력하는 프로그램
    cout << "\n##실습1: 3과 7사이의 랜덤한 숫자를 출력하는 프로그램" << endl;
    cout << (rand() % 5) + 3 << endl;

    int rand_num;

    srand(time(NULL));
    //rand(); // 0 ~ 3277 % 5 >> 0~4의 값 나옴
    rand_num = 3, 4, 5, 6, 7; // == 3 + 0, 3 + 1, 3 + 2, 3 + 3, 3 + 4; 3은 고정 값. 0~4의 값이 필요.
    rand_num = 3 + rand() % 5;

    cout << rand_num << endl;

    //실습2: 가장 작은 값과 큰 값을 입력 받아서, 그 사이의 임의의 값을 출력하는 프로그램을 작성하자.
    cout << "\n##실습2: 사용자가 지정한 범위의 랜덤값 출력" << endl;
    int minValue = 0;
    int maxValue = 0;
    cout << "가장 작은 값을 입력해주세요: ";
    cin >> minValue;
    cout << "가장 큰 값을 입력해주세요: ";
    cin >> maxValue;
    cout << (rand() % (maxValue - minValue + 1)) + minValue << endl;

    //실습2: 가장 작은 값과 큰 값을 입력 받아서, 그 사이의 임의의 값을 출력하는 프로그램을 작성하자.
    int input_min_number;
    int input_max_number;
    cin >> input_min_number;
    cin >> input_max_number;

    rand_num = input_min_number + rand() % (input_max_number - input_min_number + 1);//최소값에 해당 범위의 숫자의 개수

    cout << rand_num << endl;

    //실습3: 프로그램을 실행하면 내부적으로 1 ~ 9 사이의 숫자가 정답으로 정해진다.
    //  유저가 1 ~ 10 사이의 숫자를 입력하여 맞으면 true, 틀리면 false를 출력한다.
    cout << "\n##실습3: 1 ~ 9 사이의 랜덤 숫자 맞추기" << endl;
    int answer = (rand() % 9) + 1;
    int userInput = 0;
    cout << "예상하는 값을 입력해주세요(1~9): ";
    cin >> userInput;
    cout << boolalpha << (userInput == answer) << endl;
    (userInput == answer) ? cout << "true" << endl : cout << "false" << endl;

    int correct_number;
    correct_number = (rand() % 9) + 1;
    //cout << "미리보는 정답: " << correct_number << endl;//테스트용

    int input_quiz_number;
    cin >> input_quiz_number;

    (input_quiz_number == correct_number) ? cout << "true" << endl : cout << "false" << endl;

}

void _220412_home_work() {

}

/*
* <<<<<<<<<C++ 문법>>>>>>>>>>>>>
* # 주석: 실행(컴파일) 되지 않고, 설명만을 위해서 사용되는 문법
*   > 한줄: //
*   > 여러줄: 옆에 참고
* 
* # #include: 외부 파일을 연결함. 
* 
* # C++ 문법을 사용할 때 주의해야 할 점
*   > 대/소문자를 구분해야 한다. (ex. main과 Main은 다른 것)
*   > 띄어쓰기를 통해 요소를 구분한다. (ex. int input_key; >> int, input_key가 다른 요소)
*   > 실행문의 마무리는 세미콜론(;)으로 한다.
* 
* # 변수: 변할 수 있는 수. 
*   [데이터 타입] [변수명]; //어떤 데이터를 저장할 메모리 공간을 할당 받음.
*   [데이터 타입] [변수명] = [초기값]; //해당 변수의 처음 값을 저장.
*       > 초기값: 10, 'a', "Hello"등이 들어갈 수 있음
*   # 데이터 타입(크기, 표현 범위)
*       > 정수형 타입: int, short, long, long long, __int8, __int16, __int32 등
*       > 실수형 타입: float(7), double(15), long double(31)
*       > 문자형 타입: char, wchart
*       > 문자열 타입: string, 문자열 배열
* 
*       > int : 정수형 데이터 타입
*       > flat: 실수형 데이터 타입(소수점이 있는 데이터 타입. 7자리까지. 뒤에 f를 붙어야함.)
*       > double: 실수형 데이터 타입(소주점이 있는 데이터 타입. 15자리까지)
*       > long double: 실수형 데이터 타입(소수점이 있는 데이터 타입. 31자리까지)
*       > char: 문자형 데이터 타입
*       > string: 문자열형 데이터 타입(std에 있음. 따로 include 해야함.)
*   # 변수명: 해당 변수가 어떤 의미를 갖고 있는지 이름을 설정해야한다.
*       > 변수명 표기법: 스네이크, 카멜, 파스칼, 헝가리안 표기법 등이 있다.
*           > 헝가리안 표기법: 변수명 앞에 데이터타입 약자를 접두어로 붙인다. (ex. int iMaxCount;)
*           > 카멜: (ex. int maxCount;)
*           > 파스칼: (ex. int MaxCount;)
*           >> 어떻게 사용되는 변수인지를 변수명을 보고 바로 알 수 있게 해야한다.
*               > int token_max_count = 10;
*       > 대소문자를 구분해야한다.
*       > 알파벳, 숫자, _(언더바)만 사용한다.
*           > 숫자로 변수명을 시작해서는 않된다.
*   # 변수의 4가지 속성(ex. int input_key = 10;
*       1) 이름: input_key   2) 크기: 4byte   
*       3) 값: 10    4) 메모리 주소: 컴퓨터마다 다름(&로 확인 가능) (16진수 16개)
* 
* # 연산자: 데이터를 가공(연산)하는 모든 명령에 필요한 것들
*   > 어떤 종류의 연산자인지.
*   > 우선순위 : 어떤 순서로 연산되는가.
*   > 결합 순서: 좌측 or 우측부터 연산
* 
*   # 산술 연산자: + - * / %. /과 %는 나누는 수가 0이면 런타임 에러가 난다.(좌측부터 연산)
*   # 대입 연산자: =. 오른쪽항의 연산 결과를 왼쪽 항에 대입(복사)한다.(우측부터 연산)
*   # 복합대입 연산자: +=, -=, *=, /=, %=. 왼쪽 항에, 왼쪽항과 오른쪽 항의 지정된 연산 후 결과를 저장한다.
*   # 증감 연산자: [변수]++, ++[변수], [변수]--, --[변수]. 해당 변수의 값에 1을 뺀 결과, 1을 더한 결과를 저장한다. 
*   # 관계 연산자: <, >, <=, >=, ==, !=. 작은지 큰지, 같은지 다른지 등을 판별하여 true(1), flase(2)로 반환.
* 
*   #####new#####
*   # 논리 연산자: 왼쪽 항과 오른쪽 항의 값을 각각 참과 거짓으로 연산하여, 
*                   그 두 값을 비교해서 참과 거짓을 반환하는 연산자
*           &&: 논리곱(And)
*               a&&b의 결과값이 참이고, b의 결과값이 참이면 1을 반환
*           ||: 논리합(OR)
*               a||b: a의 결과값이 참이거나, B의 결과값이 참이면 1을 반환
*           !: 논리 부정(NOT)
*               !a: a가 참이면 거짓 반환, a가 거짓이면 참 반환
*   # 3항 연산자: [a ? b : c;] (특정 조건에 따라 실행이 될수도 안 될 수도 있다.)
*               a의 결과값이 참이면 b 실행문이 동작, 거짓이면 c실행문 동작.
* 
* # 난수: 랜덤값
*   > rand(): 0 ~ 32767 사이의 랜덤한 값이 반환된다. >> rand()값의 반환값은 무엇? unsigned short
*       > 같은 값이 나옴: 함수 내부에 seed값이 있어서 이 값에 의해 리턴값이 정해진다.
*                       기본적으로 seed는 1로 세팅되어 있다.
*                           >> 진정한 랜덤값: 실행할 때마다 seed 값이 변경되어야 한다.
*   > srand(time(null)): 넣어지는 값에 따라 seed 값이 변경된다.
* 
* #####22.04.12#####
* # 제어문(제어구조)
*   # 조건문: 특정 조건에 따라서 실행문을 실행할지 안할지 제어(if, switch)
*       > if문
*           - if([조건식]) { [실행문] }
*               * 조건식: 참/거짓의 두가지 결과가 나오도록.
*               > 조건식이 참이면 실행문을 실행한다.
*       > if-else문
*           - if([조건식]) { [실행문1] } 
                else { [실행문2] }
                > 조건식이 참이면 실행문1을 실행, 거짓이면 실행문2를 실행. (실행문1을 실행하면 실행문2는 실행되지 않는다.)
        > elseif문
            - if([조건식1]) { [실행문1] }
                else if([조건식2]) { [실행문2] }
                else { [실행문3] }
                > 조건식1이 참이면 실행문1을 실행. 거짓이면 조건식2를 비교, 참이면 실행문2 실행. 조건식2가 거짓이면 실행문3 실행.
                    *모든 실행문은 실행 후 다음 elseif문들을 무시한다.
                    * 다양한 실행문 중 특정 실행문을 특정 상황에서 실행하고 싶을 때 사용.
        > switch문
            - switch([정수형 변수]){
                case [정수1]: 
                    [실행문1];
                    break;
                case [정수2]: 
                    [실행문2];
                    break;
                case [정수3]: 
                    [실행문3];
                    break;
                default : 
                    [실행문4];
                    break;
              }
                > 조건은 무조건 정수형 변수가 들어와야한다.
                > 정수형 변수가 정수1일 경우 실행문1 실행, 정수2일 경우 실행문2 실행...
                > break;문이 없다면 뒤에 있는 case문의 내용도 모두 실행된다.
                > 모든 case와 일치하지 않는다면, default의 실행문4 실행.
*   # 반복문: 특정 조건에 따라서 실행문을 일정 횟수만큼 반복 실행하도록 제어(whlie, for)
*       > while문
*           - while( [조건식] ) { [실행문], [조건식을 바꾸는 실행문] if([조건식]) {break;}}
*               > 조건식이 참이면, 실행문을 반복해서 실행한다.
*               > 조건식이 계속 참이면, 무한으로 반복한다.
*               > while문을 중단시키는 방법
*                   1. 조건식을 바꾸는 실행문을 실행한다.
*                   2. 실행문 속에 조건식을 판별하여 break할 수 있도록 한다.
*                       > 만약 break만 있을 경우 한번만 돌고 끝난다.
*       > do-while문
*           - do { [실행문] } while( [조건식]);
*               > [실행문]을 먼저 실행하고 조건을 따진다.
*               > 무조건 1번 이상은 [실행문]이 실행된다.
*       > for문
*           - for( (1)[초기식]; (2)[조건식]; (3)[증감식] ) { (4)[실행문] }
*               > while문 만큼이나 자주 쓰인다.
*               > 순서: (1) -> (2) -> (4) -> (3) -> (2) -> (4) -> (3) ...
*                       (조건식의 결과값이 0(거짓)일때까지 반복)
*               > (4)에서는 i++, i = i + 1, i+=1, ++i 같은 것을 넣을 수 있다. 
*               
*/

/*
* <<<과제: 스플렌더를 프로그래밍한다고 했을 때 필요한 변수>>>
*/

/*
* 22.04.11
* <<<과제2: 3~7 사이의 랜덤한 숫자를 출력하는 프로그램을 작성하자>>>
* <<<과제3: 가장 작은 값과 큰 값을 입력 받아서, 그 사이의 임의의 값을 출력하는 프로그램을 작성하자.>>>
* <<<과제4: 프로그램을 실행하면 내부적으로 1 ~ 9 사이의 숫자가 정답으로 정해진다. 
    유저가 1 ~ 10 사이의 숫자를 입력하여 맞으면 true, 틀리면 false를 출력한다.>>>
*/

/*
* 22.04.12
* <<<과제1: 정수를 하나 입력 받아서, 입력 받은 숫자가 10보다 크면 "입력된 숫자가 10보다 큽니다." 출력,
*       10 이하 9초과 이면 "9보다 큽니다." 출력,
*       9 이하 6초과 이면 "6보다 큽니다." 출력,
*       그 이외에는 "6보다 작거나 같습니다." 출력.>>>
* 
* <<<과제2: switch 실습.
*   당신의 고향은 어디입니까?
*   1. 서울 2. 양평 3. 광주 4. 대전 5. 제주도
*   (입력)
* 
*   안녕하세요. 당신의 고향은 (서울)이군요.
*   (제주) 안녕하수꽝. 혼저옵서예.
*   default: 5개 중에 선택해 주세요.>>>
* 
* <<<과제3: while을 사용하여 정답을 맞출 때까지 반복되는 숫자 맞추기 프로그램만들기>>>
* 
* <<<for 실습1: 10부터 1까지 차례대로 출력되는 코드를 작성해보자.>>>
* <<<for 실습2: 100 미만의 3의 배수를 차례대로 출력되는 코드를 작성해보자.>>>
* <<<for 실습3: 1000 미만의 2의 승수를 차례대로 출력되는 코드를 작성해보자.>>>
* <<<for 실습4: 구구단을 출력해보자.>>>
*       실습4_1. 구구단 2단을 차례대로 출력해보자.
*       실습4_2. 구구단 2단~9단을 차례대로 출력해보자.
*       실습4_3. 구구단 2단~9단을 다음과 같은 형태로 출력해보자. 
*               2단 3단 4단
*               5단 6단 7단
*               8단 9단
* 
* <<<별찍기 문제
* 1)
* *
* **
* ***
* ****
* *****
* 
* 2)
*/
