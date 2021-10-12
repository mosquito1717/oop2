// c++ 예외 처리 방법: try-catch 구문

// 3번째 방법 변경
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
//		try{
//			if (num2 == 0) throw 0; // 예외 발생시 throw 밑의 코드 무시하고 catch로 감
//			result = num1 / num2;
//			cout << "결과: " << result << endl;
//		}
//		catch (int x) {
//			cout << "0으로 나눌 수 없습니다." << endl;
//		}
//	}
//	return 0;
//}

// 4번째 방법 변경
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
		try {
			result = quotient(num1, num2); // 예외 발생시 result에는 쓰레기값이 들어가 있음. 근데 result 안 쓰니까 문제는 안 됨.
			cout << "결과: " << result << endl;
		}
		catch(const char* x){ // throw랑 자료형 맞추기
			cout << "0으로 나눌 수 없습니다." << endl;
		}
	}
	return 0;
}
int quotient(int _num1, int _num2) {
	if (_num2 == 0) throw "divide by zero"; // 예외 발생시 catch로 바로 이동
	return _num1 / _num2;
}