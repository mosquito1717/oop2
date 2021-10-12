// 전통적 방식의 예외 처리
//#include <iostream>
//using namespace std;
//
//// 아무것도 하지 않는 경우
//int main() {
//	int num1, num2, result;
//	for (int i = 0; i < 5; i++) {
//		cout << "num1 입력: ";
//		cin >> num1;
//		cout << "num2 입력: ";
//		cin >> num2;
//		result = num1 / num2;
//		cout << "결과: " << result << endl;
//	}
//
//	return 0;
//}

// assert 메크로로 프로그램 중단하기
//#include <iostream>
//#include <cassert>
//using namespace std;
//
//int main() {
//	int num1, num2, result;
//	for (int i = 0; i < 5; i++) {
//		cout << "num1 입력: ";
//		cin >> num1;
//		cout << "num2 입력: ";
//		cin >> num2;
//		if (num2 == 0) {
//			cout << "예외 발생. 프로그램 중단";
//			assert(false);
//		}
//		result = num1 / num2;
//		cout << "결과: " << result << endl;
//	}
//
//	return 0;
//}

// if-else문 이용해 프로그램 중단시키지 않고 예외처리(예외 피하기)
//#include <iostream>
//using namespace std;
//
//int main() {
//	int num1, num2, result;
//	for (int i = 0; i < 5; i++) {
//		cout << "num1 입력: ";
//		cin >> num1;
//		cout << "num2 입력: ";
//		cin >> num2;
//		if (num2 == 0) {
//			cout << "예외 발생. 넘어갑니다." << endl;
//		}
//		else {
//			result = num1 / num2;
//			cout << "결과: " << result << endl;
//		}
//	}
//	return 0;
//}

// return값 이용
#include <iostream>
using namespace std;

int quotient(int, int);

int main() {
	int num1, num2, result;
	for (int i = 0; i < 5; i++) {
		cout << "num1 입력: ";
		cin >> num1;
		cout << "num2 입력: ";
		cin >> num2;
		result = quotient(num1, num2);
		if (result == -1) {
			cout << "예외 발생. 넘어갑니다." << endl;
		}
		else {
			cout << "결과: " << result << endl;
		}
	}
	return 0;
}
int quotient(int _num1, int _num2) {
	if (_num2 == 0) return -1;
	else return _num1 / _num2;
}