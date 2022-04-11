// 220411_Review.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int input_key;
    float testFloat = 5.3f;//7자리
    float testFloat1 = 5.3; //초기화 중 double에서 float로 잘립니다. 기본적으로 double 형. double은 float보다 크다.
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
    cout << "!-300: " << !-300 << endl; //0 (0이 아니면 참이다)

    //3항 연산자
    cout << "\n##3항 연산자" << endl;
    (10 > 5) ? cout << "10이 5보다 크다." << endl : cout << "10이 5보다 작다." << endl; //10이 5보다 크다
    (10 < 5) ? cout << "10이 5보다 크다." << endl : cout << "10이 5보다 작다." << endl; //10이 5보다 작다

    //난수
    cout << "\n##난수" << endl;
    srand(time(NULL)); //unsigned int타입 _Seed 매개변수
    cout << rand() << endl;

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
}

void homeWork() {
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
*/

/*
* <<<과제: 스플렌더를 프로그래밍한다고 했을 때 필요한 변수>>>
*/

/*
* <<<과제2: 3~7 사이의 랜덤한 숫자를 출력하는 프로그램을 작성하자>>>
* <<<과제3: 가장 작은 값과 큰 값을 입력 받아서, 그 사이의 임의의 값을 출력하는 프로그램을 작성하자.>>>
* <<<과제4: 프로그램을 실행하면 내부적으로 1 ~ 9 사이의 숫자가 정답으로 정해진다. 
    유저가 1 ~ 10 사이의 숫자를 입력하여 맞으면 true, 틀리면 false를 출력한다.>>>
*/

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
