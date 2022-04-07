#include <iostream>
#include <string>

using namespace std;

int main()
{
    //변수
    /*
    * 1) 이름 2) 크기   3) 값    4) 메모리주소
    * //testNum
    * > 1) testNum  2) 4Byte    3) 2.8  4) 모름
    */

    //부동소수점. 소수점 7자리까지 표시 가능. 뒤에 f라고 표시해줘야함. 없으면 경고가 뜬다.
    //float testNum = 2.8f;
    //double testNum1 = 2.8;
    //
    //cout << sizeof(testNum) << endl;
    //cout << &testNum << endl;
    //cout << testNum1 << endl;
    
    //실습: 상대방 이름과 내 이름, 상대방 나이를 입력 받아서 축하메시지를 출력하는 프로그램을 만들어보자.
    /*
    * 예시)
    *   상대방 이름을 입력하세요.
    *       --김뿡뿡
    *   본인의 이름을 입력하세요.
    *       __최서연
    *   상대방 나이를 입력하세요.
    *       __3045
    * 
    *   최서연 : 김뿡뿡님 3045살 생일을 축하합니다.
    */

    /*
    * 알고리즘)
    *   > 변수 선언 > 상대방 이름 입력받기 > 본인 이름 입력받기 > 상대방 나이 입력받기 > 생일 축하메시지 출력
    * 알고리즘(예시)
    *   > 상대방 이름과 내 이름, 상대방 나이를 입력받기
    *       > 변수 선언(데이터타입 변수명;)
    *       > cout~ > cin~
    *   > 생일 축하메시지를 출력
    */
    //string your_name = ""; //상대방 이름
    //string my_name = ""; //내 이름
    //int your_age = 0; //상대 나이
    //
    //cout << "상대방 이름을 입력하세요.\n_";
    //cin >> your_name;
    //cout << "본인의 이름을 입력하세요.\n_";
    //cin >> my_name;
    //cout << "상대방 나이를 입력하세요.\n_";
    //cin >> your_age;
    //
    //cout << "\n" << my_name << " : " << your_name << "님 " << your_age << "살 생일을 축하합니다." << endl;


    /*
    * 변수명 규칙)
    *   > C++에서 사용하는 키워드들은 변수명으로 사용할 수 없다.
    *       ex. int float = 4; (불가능)
    * 
    *   > 알파벳, 숫자, _ 로만 구성할 수 있다.
    *       ex. int num = 3; (가능)  int customer_count = 100; (가능) int _num = 9; (가능)
    *       *예외: 숫자로 변수명을 시작할 수는 없다.
    *           ex. int 1num = 4; (불가능)
    * 
    *   > 대/소문자 구분을 한다.
    *       ex. int age = 10; int AGE = 22; >> 다른 변수
    * 
    *   > 변수명 사이에 띄어쓰기를 넣을 수 없다.(띄어쓰기로 요소를 구분하기 때문에)
    *       ex. int my age = 9; (불가능)
    * 
    *   > 전부 소문자로 작성한다.
    * 
    *   > 축약어를 쓰지 않는다.
    *       ex. int num 을 int number로 써야한다. (다만, 식별할 수 있는 정도면 가능.)
    *       ex. int customer_count를 int c_c >> 하면 안된다.
    * 
    *   **헝가리안 표기법:
    *   **카멜 표기법: 
    */


    /*
    * <<연산자>>
    *   - 데이터를 가공(연산)하는 모든 명령에 필요한 것들
    *   1) 어떤 종류의 연산자들이 있는지
    *   2) 우선 순위: 어떤 순서로 연산이 진행되는지
    *   3) 결합 순서: 좌측부터 연산하는 연산자, 우축부터 연산하는 연산자.
    *   
    *   1. 사칙연산: 산술연산자(좌측부터 연산)
    *       +: 더하기
    *       -: 빼기
    *       *: 곱하기
    *       /: 나누기      11 / 3 = 3
    *       %: 나머지      11 % 3 = 2
    *       우선 순위 >> (*, /, %) >> (+, -)
    * 
    *   2. 대입 연산자: (우측부터 연산)
    *       = : 왼쪽 항에 오른쪽 항의 값을 대입한다. (복사한다) (오른쪽에서 왼쪽으로)
    * 
    *   3. 복합대입연산자
    *       +=: a += b; >> a = a + b;
    *       -=: a -= b; >> a = a - b;
    *       *=: a *= b; >> a = a * b;
    *       /=: a /= b; >> a = a / b;
    *       %=: a %= b; >> a = a % b; (a, b가 정수여야 한다.)
    *       >> (b가 0이 아닌 이상) a, b가 정수면 문제가 없다.
    *       >> a, b가 실수이면, 나머지 연산자가 동작하지 않는다.
    *       >> 기타 다른 형태일 경우 다양한 문제가 있을 수 있음.
    * 
    *   *변수의 값을 바꾸기 위해 =(대입 연산자) 사용.
    * 
    *   4. 증감연산자(대입연산자를 사용하지 않았지만, 값이 변화된 경우)
    *       >> 특정 변수의 값을 1씩 증가시키거나 감소시킬 때 사용한다.
    *       >> 변수의 앞이나 뒤에 ++ / -- 를 붙여서 사용한다.
    *       >> 변수 뒤에 붙은 경우, 다른 연산을 모두 한 후, 마지막에 연산이 진행된다.  
    *           ex. cout<<num++<<endl; (출력은 num의 원래 값. 출력후에는 num의 값이 1 추가된다.)
    *       >> 변수 앞에 붙은 경우, 다른 연산을 하기 전에 연산이 진행된다.
    *           ex. cout<<++num<<endl; (출력전에는 num의 값이 1 추가되고, 해당 결과 값으로 출력이 진행된다.)
    * 
    *   5. 관계연산자
    *       >> 두 값을 비교한 결과가 참인지 거짓인지 반환하는 연산자
    *       참(0이 아닌 수, true), 거짓(0, false)
    *       
    *       < : a < b (왼쪽항의 값이 오른쪽항의 값보다 작다면 참을 반환. 아니면 거짓(크거나 같으면 거짓))
    *       > : a > b (왼쪽항의 값이 오른쪽항의 값보다 크다면 참을 반환. 아니면 거짓(작거나 같으면 거짓))
    *       <= : a <= b (왼쪽항의 값이 오른쪽항의 값보다 작거나 같으면 참을 반환. 아니면 거짓(크면 거짓))
    *       >= : a >= b (왼쪽항의 값이 오른쪽항의 값보다 크거나 같으면 참을 반환. 아니면 거짓(작으면 거짓))
    *       == : a == b (왼쪽항의 값이 오른쪽항의 값과 같으면 참을 반환. 아니면 거짓(크거나 작으면 거짓))
    *       != : a != b (왼쪽항의 값과 오른쪽항의 값이 다르면 참을 반환. 아니면 거진(같으면 거짓)
    */

    /*
    * 실습.
    * > 고객의 나이를 입력받아서 미성년자(19세 이하)이면 false를 출력. 성인이면 true를 출력.
    * 
    * > 아까 입력 받은 나이를 기준으로, 주민등록증 발급대상(20세)이면 true를 아니면 false를 출력.
    * 
    * +a> 입력 받은 나이가 아홉수(1의 자리가 9인수)인지 확인해서 true, false를 출력.
    */

    //======사칙연산
    int left_value = 11;
    int right_value = 3; //3을 0으로 바꾸면, 런타임에러가 뜬다.(곱하기까지만 나옴)

    cout << "#산술연산자" << endl;
    cout << left_value << " + " << right_value << ": " << left_value + right_value << endl;
    cout << left_value << " - " << right_value << ": " << left_value - right_value << endl;
    cout << left_value << " * " << right_value << ": " << left_value * right_value << endl;
    cout << left_value << " / " << right_value << ": " << left_value / right_value << endl;
    cout << left_value << " % " << right_value << ": " << left_value % right_value << endl;

    //======대입 연산자
    int left_value1 = 11 + 3; //우측의 연산을 먼저하고, 왼쪽으로 복사한다.

    //======복합대입연산자
    int left_value2 = 11;
    int right_value2 = 3;

    cout << "\n#복합대입연산자" << endl;
    cout << "(left_value2) " << left_value2 << " += " << right_value2 << ", left_value2 => ";
    left_value2 += right_value2;
    cout << left_value2 << endl;

    cout << "(left_value2) " << left_value2 << " -= " << right_value2 << ", left_value2 => ";
    left_value2 -= right_value2;
    cout << left_value2 << endl;
    
    cout << "(left_value2) " << left_value2 << " *= " << right_value2 << ", left_value2 => ";
    left_value2 *= right_value2;
    cout << left_value2 << endl;
    
    cout << "(left_value2) " << left_value2 << " /= " << right_value2 << ", left_value2 => ";
    left_value2 /= right_value2;
    cout << left_value2 << endl;
    
    cout << "(left_value2) " << left_value2 << " %= " << right_value2 << ", left_value2 => ";
    left_value2 %= right_value2;
    cout << left_value2 << endl;

    left_value2 += 3 + 6;
    cout << left_value2 << endl;


    //========증감연산자
    cout << "\n#증감연산자" << endl;
    int left_value3 = 11;
    left_value3++; //left_value3 = left_value3 + 1 (12)
    cout << "left_value3++(외부) : " << left_value3 << endl;
    ++left_value3; //left_value3 = left_value3 + 1 (13)
    cout << "++left_value3(외부) : " << left_value3 << endl;

    cout << "left_value3++(내부) : " << left_value3++ << endl; //출력: 13 메모리: 15
    cout << "++left_value3(내부) : " << ++left_value3 << "\n" << endl; //메모리: 16 출력: 16 

    left_value3 = 11;
    left_value3--; //left_value3 = left_value3 - 1 (10)
    cout << "left_value3--(외부) : " << left_value3 << endl;
    --left_value3; //left_value3 = left_value3 - 1 (9)
    cout << "++left_value3(외부) : " << left_value3 << endl;

    cout << "left_value3--(내부) : " << left_value3-- << endl; //출력: 9 메모리: 8
    cout << "--left_value3(내부) : " << --left_value3 << endl; //메모리: 7 출력: 7 

    //실습1 (관계연산자)
    int age;
    cout << "\n===실습===" << endl;
    cout << "나이를 입력해주세요: ";
    cin >> age;

    cout << "\n결과>" << endl;
    //boolalpha: 0, 1을 true, false로 바꿔서 알려줌
    cout << "미성년자인가요? > \t\t" << boolalpha << (age <= 19) << endl;
    cout << "주민등록증 발급대상인가요? > \t" << (age == 20) << endl;
    cout << "아홉수인가요? > \t\t" << (age % 10 == 9) << endl;


}