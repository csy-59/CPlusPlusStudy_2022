#include <iostream>
using namespace std;

int main()
{
    int insertNum = 0;
    cin >> insertNum;

    //별찍기14번: ???(꽉찬 정사각형 만들기). 백준2556번 문제
    for (int i = 0; i < insertNum; i++) {
        for (int j = 0; j < insertNum; j++)
            cout << "*";
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
