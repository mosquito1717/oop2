// ������ ����� ���� ó��
//#include <iostream>
//using namespace std;
//
//// �ƹ��͵� ���� �ʴ� ���
//int main() {
//	int num1, num2, result;
//	for (int i = 0; i < 5; i++) {
//		cout << "num1 �Է�: ";
//		cin >> num1;
//		cout << "num2 �Է�: ";
//		cin >> num2;
//		result = num1 / num2;
//		cout << "���: " << result << endl;
//	}
//
//	return 0;
//}

// assert ��ũ�η� ���α׷� �ߴ��ϱ�
//#include <iostream>
//#include <cassert>
//using namespace std;
//
//int main() {
//	int num1, num2, result;
//	for (int i = 0; i < 5; i++) {
//		cout << "num1 �Է�: ";
//		cin >> num1;
//		cout << "num2 �Է�: ";
//		cin >> num2;
//		if (num2 == 0) {
//			cout << "���� �߻�. ���α׷� �ߴ�";
//			assert(false);
//		}
//		result = num1 / num2;
//		cout << "���: " << result << endl;
//	}
//
//	return 0;
//}

// if-else�� �̿��� ���α׷� �ߴܽ�Ű�� �ʰ� ����ó��(���� ���ϱ�)
//#include <iostream>
//using namespace std;
//
//int main() {
//	int num1, num2, result;
//	for (int i = 0; i < 5; i++) {
//		cout << "num1 �Է�: ";
//		cin >> num1;
//		cout << "num2 �Է�: ";
//		cin >> num2;
//		if (num2 == 0) {
//			cout << "���� �߻�. �Ѿ�ϴ�." << endl;
//		}
//		else {
//			result = num1 / num2;
//			cout << "���: " << result << endl;
//		}
//	}
//	return 0;
//}

// return�� �̿�
#include <iostream>
using namespace std;

int quotient(int, int);

int main() {
	int num1, num2, result;
	for (int i = 0; i < 5; i++) {
		cout << "num1 �Է�: ";
		cin >> num1;
		cout << "num2 �Է�: ";
		cin >> num2;
		result = quotient(num1, num2);
		if (result == -1) {
			cout << "���� �߻�. �Ѿ�ϴ�." << endl;
		}
		else {
			cout << "���: " << result << endl;
		}
	}
	return 0;
}
int quotient(int _num1, int _num2) {
	if (_num2 == 0) return -1;
	else return _num1 / _num2;
}