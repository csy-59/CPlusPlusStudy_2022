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
    string your_name = ""; //상대방 이름
    string my_name = ""; //내 이름
    int your_age = 0; //상대 나이

    cout << "상대방 이름을 입력하세요.\n_";
    cin >> your_name;
    cout << "본인의 이름을 입력하세요.\n_";
    cin >> my_name;
    cout << "상대방 나이를 입력하세요.\n_";
    cin >> your_age;

    cout << "\n" << my_name << " : " << your_name << "님 " << your_age << "살 생일을 축하합니다." << endl;


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

}