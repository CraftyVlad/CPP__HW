#include <iostream>

using namespace std;

int main()

{

	const int time = 86400;

	int a;

	cout << "Enter the time in seconds elapsed since the beginning of the day" << endl;

	cin >> a;

	int hh = a % time / 3600;
	int mm = a / 60 % 60;
	int ss = a % 60;

	int endhh, endmm, endss;

	int tmp = hh * 3600 + mm * 60 + ss;

	tmp = time - tmp;
	endhh = tmp / 3600;
	endmm = tmp / 60 - endhh * 60;
	endss = tmp - endmm * 60 - endhh * 3600;

	cout << "Now is: " << hh << " hh: " << mm << " mm: " << ss << " ss" << endl;

	cout << "before midnight: " << endhh << " hh: " << endmm << " mm: " << endss << " ss" << endl << endl;

	int mainNumber = 1234;

	cout << "Given an integer: " << mainNumber << endl;
	cout << "Reversed number: ";
	cout << mainNumber % 10;
	mainNumber /= 10;
	cout << mainNumber % 10;
	mainNumber /= 10;
	cout << mainNumber % 10;
	mainNumber /= 10;
	cout << mainNumber % 10;
	mainNumber /= 10;

	cout << endl << endl;

	return 0;

}