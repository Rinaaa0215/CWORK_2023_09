/*<��������>
��������� ��ü�� ��� �������� ���� ���� �����ϴ� �� �ƴ϶�, 
��� ������ �����͸� ������. ���� ��ü�� ����� ��ü�� ������ �޸� �ּҸ� ����.
�� �� �ϳ��� �����Ǹ�, �ٸ� ��ü�� ���� �Բ� �����.
������ü�� ����� ��ü �� �ϳ��� �Ҹ�� �� �޸𸮸� �����ϸ�, �ٸ� ��ü�� �̹� ������ �޸𸮸� ������.
*/


/*<��������>
��������� ��ü�� ��� �������� ���� ���� ���ο� �޸𸮿� ������.
���� ��ü�� ����� ��ü�� ���� �ٸ� �޸� �ּҸ� ������.
���� ��ü�� ����� ��ü�� ��������. �� ��ü�� �����ǰų� �Ҹ�Ǿ �ٸ� ��ü���� ���� ���� ����.
*/

#include <iostream>

class Deep{
private:
	int* data;
public:
	Deep(int d) {
		data = new int;
		*data = d;

	}
	//���������
	Deep(Deep& source) {
		data = new int;
		*data = *source.data;
	}
	void changeData() {
		std::cout<<*data<<std::endl;
	}

};
int main() {
	Deep original(10);
	Deep copy = original;
	copy. changeData(20);

	origianl.print();
	copy.print();
	return 0;

}