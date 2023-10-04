#include<iostream>
using namespace std;
class Time {
private:
	int h;
	int m;
	int s;
public:
	Time() {
		this->h = 0;
		this->h = 0;
		this->s = 0;

	}
	void increaseHour() {
		this->h = (this->h + 1) % 24;

	}
	void increaseMinute() {
		this->m++;
		if (this->m >= 60) {
			this->m = 0;
			increaseHour();
		}
	}
	void increaseSecond() {
		this->s++;
		if (this->s >= 60) {
			this->s = 0;
			increaseMinute();

		}
	}
	void decreaseHour() {
		h--;
		if (h < 0) {
			h = 23;
		}
	}
	void decreaseMinute() {
		m--;
		if (m < 0) {
			m = 59;
			decreaseHour();

		}

	}
	void decreaseSecond() {
		s--;
		if (s < 0) {
			s = 59;
			decreaseMinute();
		}
	}
	void display() {
		cout << (h < 10 ? "0" : "") << h << ":"//해당 조건이 충족되면 앞에 것 출력, 안 되면 뒤에 것 출력
			<< (m < 10 ? "0" : "") << m << ":"
			<< (s < 10 ? "0" : "") << s << endl;
	}
};
int main() {
	Time t;
	t.display();

	t.increaseSecond();
	t.display();

	t.increaseMinute();
	t.display();

	t.increaseSecond();
	t.display();

	t.decreaseHour();
	t.display();

	t.decreaseMinute();
	t.display();

	t.decreaseSecond();
	t.display();
	
	
}