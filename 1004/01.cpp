#include<iostream>
#include<string>
using namespace std;

	class car {
	private: 
		string name;//멤버 변수(명사)
		int price;
		string color;
		int gasoline;

	public://멤버 함수(동사)

		//생성자==초기화
		car() {
			this->name = "avante";
			this->color = "pink";
			this->price = 2000;
			this->gasoline = 100;
		}

		void info() {
			cout << this->name << endl;
			cout << this->color << endl;
			cout << this->price << endl;
			cout << this->gasoline << endl;

		}
		void driving() {
			cout << "부릉부릉" << endl;
			this->gasoline-= 10;
		}
		
	};
int main() {
	car car1;
	car1.info();

	car car2("tesla", "black");                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
		car2.info();

}