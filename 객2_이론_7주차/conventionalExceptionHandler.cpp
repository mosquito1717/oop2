#include <iostream>
using namespace std;

// �ƹ��͵� ���� �ʴ� ���
int main() {
	int num1, num2, result;
	for (int i = 0; i < 5; i++) {
		cout << "num1 �Է�: ";
		cin >> num1;
		cout << "num2 �Է�: ";
		cin >> num2;
		result = num1 / num2;
		cout << "���: " << result << endl;
	}

	return 0;
}