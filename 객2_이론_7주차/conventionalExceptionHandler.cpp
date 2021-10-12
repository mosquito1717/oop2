#include <iostream>
using namespace std;

// 아무것도 하지 않는 경우
int main() {
	int num1, num2, result;
	for (int i = 0; i < 5; i++) {
		cout << "num1 입력: ";
		cin >> num1;
		cout << "num2 입력: ";
		cin >> num2;
		result = num1 / num2;
		cout << "결과: " << result << endl;
	}

	return 0;
}