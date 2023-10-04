/*<얕은복사>
얕은복사는 객체의 멤버 변수들의 실제 값을 복사하는 게 아니라, 
멤버 변수의 포인터만 복사함. 원래 객체와 복사된 객체가 동일한 메모리 주소를 참조.
그 중 하나가 수정되면, 다른 객체의 값도 함께 변경됨.
원본객체나 복사된 객체 중 하나가 소멸될 때 메모리를 해제하면, 다른 객체는 이미 해제된 메모리를 참조함.
*/


/*<깊은복사>
깊은복사는 객체의 멤버 변수들의 실제 값을 새로운 메모리에 복사함.
원래 객체와 복사된 객체가 서로 다른 메모리 주소를 참조함.
원본 객체와 복사된 객체는 독립적임. 한 객체가 수정되거나 소멸되어도 다른 객체에는 영향 주지 않음.
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
	//복사생성자
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