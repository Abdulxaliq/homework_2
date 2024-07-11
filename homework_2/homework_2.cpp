#include <iostream>

using namespace std;

int main()
{
	cout << "*********************azerbaycan seiri*********************" << endl;
	cout << "\t\tcox kecmisem bu daglardan," << endl;
	cout << "\t\tdurna gozlu bulaqlardan;" << endl;
	cout << "\t\tesitmisem uzaqlardan" << endl;
	cout << "\t\tsakit axan arazlari;" << endl;
	cout << "\t\tsinamisam dostu, yari..." << endl;
	cout << "\t\t\t\tseirin muellifi: Semed Vurgun";


	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~satis elani~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "masinin markasi: mercedes" << endl;
	cout << "masinin modeli: cls63 amg" << endl;
	cout << "masinin ili: 2014" << endl;
	cout << "masinin matoru: 5.5l" << endl;
	cout << "saticinin reyi: masin saz veziyyetdedir hecbir problemi yoxdur biraz benzin cox icir." << endl;
	cout << "telefon: 055-555-55-55" << endl;



	double r1 = 0;
	double r2 = 0;
	double r3 = 0;
	cout << "r1: ";
	cin >> r1 ;
	cout << "r2: ";
	cin >> r2 ;
	cout << "r3: ";
	cin >> r3 ;
	double r0 = 1 / r1 + 1 / r2 + 1 / r3;
	cout << "r0: " << r0;



	double c = 0;
	float pi = 3.14;
	cout << "uzunlugu qeyd edin: ";
	cin >> c;
	double s = pi * c * c;
	double l = 2 * pi * c;
	cout << "sahe: " << s;
	cout << "radius: " << l;



	double t = 0;
	double s = 0;
	cout << "zaman: ";
	cin >> t ;
	cout << "muddet: ";
	cin >> s ;
	double v = s / t;
	cout << "suret: " << v;



	double v = 0;
	double t = 0;
	double a = 0;
	cout << "v: ";
	cin >> v ;
	cout << "t: ";
	cin >> t ;
	cout << "a: ";
	cin >> a;
	double s = v * t + (a * t * t) / 2;
	cout << "s: " << s;



	double s = 0;
	double d = 0;
	double san = 0;
	cout << "saat: ";
	cin >> s ;
	cout << "deqiqe: ";
	cin >> d ;
	cout << "saniye: ";
	cin >> san;
	double m = 30 * 60 * s + 30 * d + san / 3600 * 30;
	cout << "qiymet: " << m ;


	double mesafe = 0;
	double benzin_serf_100km = 0;
	float A92 = 0;
	float A98 = 0;
	float Premium = 0;
	cout << "mesafe: ";
	cin >> mesafe;
	cout << "benzin_serf_100km: ";
	cin >> benzin_serf_100km;
	cout << "A92: ";
	cin >> A92;
	cout << "A98: ";
	cin >> A98;
	cout << "Premium: ";
	cin >> Premium;
	double litr = mesafe / 100 * benzin_serf_100km;
	double A92_qiymeti = litr * A92;
	double A98_qiymeti = litr * A98;
	double Premium_qiymeti = litr * Premium;
	cout << "A92: " << A92_qiymeti;
	cout << "A98: " << A98_qiymeti;
	cout << "Premium: " << Premium_qiymeti;

}