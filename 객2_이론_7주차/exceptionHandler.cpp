// c++ ���� ó�� ���: try-catch ����

// 3��° ��� ����
#include <iostream>
using namespace std;

int main() {
	int num1, num2, result;
	for (int i = 0; i < 5; i++) {
		cout << "num1 �Է�: ";
		cin >> num1;
		cout << "num2 �Է�: ";
		cin >> num2;
		try{
			if (num2 == 0) throw 0; // ���� �߻��� throw ���� �ڵ� �����ϰ� catch�� ��
			result = num1 / num2;
			cout << "���: " << result << endl;
		}
		catch (int x) {
			cout << "0���� ���� �� �����ϴ�." << endl;
		}
	}
	return 0;
}