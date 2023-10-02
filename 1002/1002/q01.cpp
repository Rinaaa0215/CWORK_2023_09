#include<iostream>
#include<string>
using namespace std;

class TVclass {
public:

	int power0n;
	int channel;
	int volume;

public:
	void power() {
		if (power0n == 0) {
			cout << "Àü¿ø ²û" << endl;
		}
		else if (power0n == 1) {
			cout << "Àü¿ø ÄÑÁü" << endl;
		}
	}

	void ch() {
		cout << "Ã¤³Î ÀÔ·Â: " << endl;
		cin >> channel;
	}
	void volume() {
		cout << "º¼·ý: " << endl;
		cin >> volume;

		if (volume = '1') {
			cout << "º¼·ý Å°¿ò" << endl;
		}
		else if (volume == '0') {
			cout << "ºÒ·ý ³»¸²" << endl;
		}
	}

};
int main() {
	TVclass ch1;

}