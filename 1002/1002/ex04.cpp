#include<iostream>
using namespace std;

namespace MyNamespace {
	int value = 10;
	void display() {
		printf("Inside MyNamespace\n");
	}
}
int main() {
	printf("%d", MyNamespace::value);
	MyNamespace::display();//���ӽ����̽��� ���� ��� ȣ��� ���
	return 0;

}









