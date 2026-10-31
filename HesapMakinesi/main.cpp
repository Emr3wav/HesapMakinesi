#include <iostream>
using namespace std;

int main() {

	double sayi0, sayi1, sonuc = 0;
	char islem;

	cout << "Hosgeldiniz" << endl;
	cout << "1. sayiyi giriniz: ";
	cin >> sayi0;
	cout << "2. sayiyi giriniz: ";
	cin >> sayi1;
	cout << "islem seciniz (+,-,*,/): ";
	cin >> islem;

	switch (islem) {
	case '+':
		sonuc = sayi0 + sayi1;
		break;
	case '-':
		sonuc = sayi0 - sayi1;
		break;
	case '*':
		sonuc = sayi0 * sayi1;
		break;
	case '/':
		if (sayi1 == 0) {
			cout << "sifira bolunmez aq" << endl;
			return 0;
		}
		else {
			sonuc = sayi0 / sayi1;
		}
		break;
	default:
		break;
	}

	cout << "sonuc: " << sonuc;



}