#include <iostream>
using namespace std;

int main()
{
    //int insertNum = 1;
    //cin >> insertNum;

    //달팽이 문제: 반대로. 백준 1913번 문제
    const int NUM = 10;
    int arr[NUM][NUM] = { 0 };
    int i = 0, j = -1;
    int num = 1;
    int t = NUM;

    for (int turns = 0; turns < NUM * 2 - 1; turns++) {
        for (int times = 0; times < t; times++) {
            switch (turns % 4)
            {
            case 0://왼쪽에서 오른쪽
                arr[i][++j] = num++;
                break;
            case 1://위쪽에서 아래로
                arr[++i][j] = num++;
                break;
            case 2://오른쪽에서 왼쪽으로
                arr[i][--j] = num++;
                break;
            case 3://아래에서 위쪽으로
                arr[--i][j] = num++;
                break;
            default:
                break;
            }
        }
        if (turns % 4 == 0 || turns % 4 == 2)
            t--;
    }


    //출력
    for (int i = 0; i < NUM; i++) {
        for (int j = 0; j < NUM; j++) {
            cout << arr[i][j] << "\t ";
        }
        cout << endl;
    }

    
}

//공백 모래시계 형태: 백준 2445번 문제
//for (int i = 0; i < insertNum * 2 - 1; i++) {
//    if (i < insertNum) {
//        for (int j = 0; j <= i; j++)
//            cout << "*";
//        for (int j = 0; j < (insertNum - i - 1) * 2; j++)
//            cout << " ";
//        for (int j = 0; j <= i; j++)
//            cout << "*";
//    }
//    else {
//        for (int j = 0; j < insertNum * 2 - i - 1; j++)
//            cout << "*";
//        for (int j = 0; j < (i + 1 - insertNum) * 2; j++)
//            cout << " ";
//        for (int j = 0; j < insertNum * 2 - i - 1; j++)
//            cout << "*";
//    }
//    cout << endl;
//}
////* 모래시계 형태: 백준 2446번 문제
//for (int i = 0; i < insertNum * 2 - 1; i++) {
//    if (i < insertNum) {
//        for (int j = 0; j < i; j++)
//            cout << " ";
//        for (int j = 0; j < (insertNum - i) * 2 - 1; j++)
//            cout << "*";
//    }
//    else {
//        for (int j = 0; j < (insertNum-1) * 2 - i; j++)
//            cout << " ";
//        for (int j = 0; j < (i - insertNum + 2) * 2 - 1; j++)
//            cout << "*";
//    }
//    cout << endl;
//}   
////별찍기1: 왼쪽 계단 백준 2438문제
//for (int i = 0; i < insertNum; i++) {
//    for (int j = 0; j <= i; j++)
//        cout << "*";
//    cout << endl;
//}
////별찍기2번: 우측계단. 백준 2439번 문제
//for (int i = 0; i < insertNum; i++) {
//    for (int j = 1; j < insertNum - i; j++)
//        cout << " ";
//    for (int j = 0; j <= i; j++)
//        cout << "*";
//    cout << endl;
//}
////별찍기3번: 왼쪽 거꾸로 계단 백준 2440번 문제
//for (int i = 0; i < insertNum; i++) {
//    for (int j = 0; j < insertNum - i; j++)
//        cout << "*";
//    cout << endl;
//}
////별찍기4번: 오른쪽 거꾸로 계단. 백준 2441번 문제
//for (int i = 0; i < insertNum; i++) {
//    for (int j = 0; j < i; j++)
//        cout << " ";
//    for (int j = 0; j < insertNum - i; j++)
//        cout << "*";
//    cout << endl;
//}
////별찍기 5번: 피라미드. 백준 2442번 문제
//for (int i = 0; i < insertNum; i++) {
//    for (int j = 1; j < insertNum - i; j++)
//        cout << " ";
//    for (int j = 0; j < (i+1) * 2 - 1; j++)
//        cout << "*";
//    cout << endl;
//}
////별찍기 6번: 역 피라미드. 백준 2443번 문제
//for (int i = 0; i < insertNum; i++) {
//    for (int j = 0; j < i; j++)
//        cout << " ";
//    for (int j = 0; j < (insertNum - i) * 2 - 1; j++)
//        cout << "*";
//    cout << endl;
//}
////별찍기7: 마름모꼴. 백준 2444번 문제
//for (int i = 0; i < insertNum * 2 - 1; i++) {
//    if (i < insertNum) {
//        for (int j = 1; j < insertNum - i; j++)
//            cout << " ";
//        for (int j = 0; j < (i + 1) * 2 - 1; j++)
//            cout << "*";
//    }
//    else {
//        for (int j = 0; j <= (i - insertNum); j++)
//            cout << " ";
//        for (int j = 0; j < (insertNum * 2 - i - 1) * 2 - 1; j++)
//            cout << "*";
//    }
//    cout << endl;
//}
////별찍기12: 오른쪽 옆으로 피라미드. 백준 2522번 문제
//for (int i = 0; i < insertNum * 2 - 1; i++) {
//    if (i < insertNum) {
//        for (int j = insertNum-1; j > i; j--)
//            cout << " ";
//        for (int j = 0; j <= i; j++)
//            cout << "*";
//    }
//    else {
//        for (int j = 0; j <= (i - insertNum); j++)
//            cout << " ";
//        for (int j = 0; j < (insertNum * 2 - 1 - i); j++)
//            cout << "*";
//    }
//    cout << endl;
//}
////별찍기 13: 왼쪽으로 피라미드. 백준 2523번 문제
//for (int i = 0; i < insertNum * 2 - 1; i++) {
//    if (i < insertNum) {
//        for (int j = 0; j <= i; j++)
//            cout << "*";
//    }
//    else {
//        for (int j = 0; j < (insertNum * 2 - 1 - i); j++)
//            cout << "*";
//    }
//    cout << endl;
//}
//달팽이 문제: 기본
//const int NUM = 5;
//int arr[NUM][NUM] = { 0 };
//int i = 0, j = -1;
//int num = 1;
//int t = NUM;
//
//for (int turns = 0; turns < NUM * 2 - 1; turns++) {
//    for (int times = 0; times < t; times++) {
//        switch (turns%4)
//        {
//        case 0://왼쪽에서 오른쪽
//            arr[i][++j] = num++;
//            break;
//        case 1://위쪽에서 아래로
//            arr[++i][j] = num++;
//            break;
//        case 2://오른쪽에서 왼쪽으로
//            arr[i][--j] = num++;
//            break;
//        case 3://아래에서 위쪽으로
//            arr[--i][j] = num++;
//            break;
//        default:
//            break;
//        }
//    }
//    if (turns % 4 == 0 || turns % 4 == 2)
//        t--;
//}
//
//
////출력
//for (int i = 0; i < NUM; i++) {
//    for (int j = 0; j < NUM; j++) {
//        cout << arr[i][j] << "\t ";
//    }
//    cout << endl;
//}
