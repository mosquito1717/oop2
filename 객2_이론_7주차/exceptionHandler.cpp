// c++ ���� ó�� ���: try-catch ����

// 3��° ��� ����
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
//		try{
//			if (num2 == 0) throw 0; // ���� �߻��� throw ���� �ڵ� �����ϰ� catch�� ��
//			result = num1 / num2;
//			cout << "���: " << result << endl;
//		}
//		catch (int x) {
//			cout << "0���� ���� �� �����ϴ�." << endl;
//		}
//	}
//	return 0;
//}

// 4��° ��� ����
//#include <iostream>
//using namespace std;
//
//int quotient(int, int);
//
//int main() {
//	int num1, num2, result;
//	for (int i = 0; i < 5; i++) {
//		cout << "num1 �Է�: ";
//		cin >> num1;
//		cout << "num2 �Է�: ";
//		cin >> num2;
//		try {
//			result = quotient(num1, num2); // ���� �߻��� result���� �����Ⱚ�� �� ����. �ٵ� result �� ���ϱ� ������ �� ��.
//			cout << "���: " << result << endl;
//		}
//		catch(const char* x){ // throw�� �ڷ��� ���߱� // ���ڿ� ���ͷ�(���ڿ��� ���� �ּҰ� ��)�� �⺻������ char ��� �����ͷ� ���� // string�� �⺻ Ÿ���� �ƴ�
//			cout << "0���� ���� �� �����ϴ�. string" << endl;
//			cout << x << endl; // throw ���
//		}
//		catch (int x) {
//			cout << "0���� ���� �� �����ϴ�. int" << endl;
//		}
//	}
//	return 0;
//}
//int quotient(int _num1, int _num2) {
//	if (_num2 == 0) 
//		// throw 90;
//		throw "divide by zero"; // ���� �߻��� catch�� �ٷ� �̵�
//	return _num1 / _num2;
//}