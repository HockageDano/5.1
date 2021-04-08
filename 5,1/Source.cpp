#include <iostream>
#include <string>

using namespace std;

class EDivideBYZero {};

class Fraction {
public:
	int first;
	int second;

	Fraction(int first, int second) {
		this->first = first;
		this->second = second;
	}

	void ipart()
	{
		if (second == 0)
			throw EDivideBYZero();
		cout << first / second << endl;
		//cout << "Знаменник не може бути нулем!! " << endl;

	}
};

int main()
{
	setlocale(LC_ALL, "ukr");

	Fraction first(15, 44);

	cout << "Перше число: ";
	cin >> first.first;
	cout << "Друге число: ";
	cin >> first.second;
	cout << "Відповідь: ";
	first.ipart();
	try
	{
		cout << first.first / first.second << endl;
	}
	catch (EDivideBYZero)
	{
		cerr << "Знаменник не може бути нулем!! " << endl;
	}

	return 0;
}