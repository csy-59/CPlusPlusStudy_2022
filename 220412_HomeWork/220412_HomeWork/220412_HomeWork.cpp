#include <iostream>
using namespace std;

int main()
{
	//별찍기 1)
	// *
	// **
	// ***
	// ****
	// *****
	cout << "##별찍기 1번" << endl;
	for (int i = 0; i < 5;i++) {
		for (int j = 0; j <= i;j++) {
			cout << "*";
		}
		cout << endl;
	}

	//별찍기 2)
	//     *
	//    **
	//   ***
	//  ****
	// *****
	cout << "\n##별찍기 2번" << endl;
	for (int i = 0; i < 5;i++) {
		for (int j = 4; j > i;j--) {
			cout << " ";
		}
		for (int j = 0; j <= i;j++) {
			cout << "*";
		}
		cout << endl;
	}

	//별찍기 3)
	// *****
	// ****
	// ***
	// **
	// *
	cout << "\n##별찍기 3번" << endl;
	for (int i = 0; i < 5;i++) {
		for (int j = 5; j > i;j--) {
			cout << "*";
		}
		cout << endl;
	}

	//별찍기 4)
	// *****
	//  ****
	//   ***
	//    **
	//     *
	cout << "\n##별찍기 4번" << endl;
	for (int i = 0; i < 5;i++) {
		for (int j = 0; j <= i;j++) {
			cout << " ";
		}
		for (int j = 5; j > i;j--) {
			cout << "*";
		}
		cout << endl;
	}

	//별찍기 5)
	//      *
	//     ***
	//	  *****
	//	 *******
	//	*********
	cout << "\n##별찍기 5번" << endl;
	for (int i = 1; i < 6;i++) {
		for (int j = 5; j > i;j--) {
			cout << " ";
		}
		for (int j = 1; j <= i*2-1;j++) {
			cout << "*";
		}
		cout << endl;
	}
	
	//별찍기 6)
	//  *********
	//   *******
	//	  *****
	//	   ***
	//	    *
	cout << "\n##별찍기 6번" << endl;
	for (int i = 1; i <= 5;i++) {
		for (int j = 1;j < i;j++)
			cout << " ";
		for (int j = 0; j < (6 - i) * 2 - 1;j++)
			cout << "*";
		cout << endl;
	}
	
	//별찍기 7)
	//      *
	//     ***
	//	  *****
	//	 *******
	//	*********
	//   *******
	//    *****
	//	   ***
	//	    *
	cout << "\n##별찍기 7번" << endl;
	for (int i = 1; i <= 9;i++) {
		if (i <= 5) {
			for (int j = 5; j > i;j--) {
				cout << " ";
			}
			for (int j = 1; j <= i * 2 - 1;j++) {
				cout << "*";
			}
		}
		else {
			for (int j = 0;j < i - 5;j++)
				cout << " ";
			for (int j = 0; j < (10 - i) * 2 - 1;j++)
				cout << "*";
		}
		cout << endl;
	}
}