// c++ 예외 처리 방법: try-catch 구문

// 3번째 방법 변경
#include <iostream>
using namespace std;

int main() {
	int num1, num2, result;
	for (int i = 0; i < 5; i++) {
		cout << "num1 입력: ";
		cin >> num1;
		cout << "num2 입력: ";
		cin >> num2;
		try{
			if (num2 == 0) throw 0; // 예외 발생시 throw 밑의 코드 무시하고 catch로 감
			result = num1 / num2;
			cout << "결과: " << result << endl;
		}
		catch (int x) {
			cout << "0으로 나눌 수 없습니다." << endl;
		}
	}
	return 0;
}