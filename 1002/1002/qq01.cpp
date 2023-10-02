#include<iostream>
#include<string>

class TVclass {
private://외부 접근 불가
	int volume;
	int channel;
	int power0n;
public:
	void tvoff() {
		power0n = 0;
	}
	void tvon() {
		power0n = 1;
	}
	void volumeup() {
		volume++;
	}
	void volumedown() {
		volume--;
	}
	void setchannel(int a) {
		if (a < 0) {
			cout << "설정을 잘못 하셨습니다." << endl;

		}
		channel = a;

	}

};

int main() {
	TVclass lg;
	lg.volume = 100;
	lg.channel = 200;//외부 접근 불가
	lg.setchannel(200);

	return 0;


}
