#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	float K, m1, t1, t2;
	const int c = 4200;
	const int L = 2260;
	char again;
	do
	{
		system("cls");
		cout << "Введите количество теплоты:" << endl;
		cin >> K;
		cout << "Введите начальную температуру:" << endl;
		cin >> t1;
		cout << "Введите начальную массу воды:" << endl;
		cin >> m1;
		t2 = (K / (c * m1)) + t1;
		if (t2 <= 100)
		{
			cout << "Температура воды: " << t2 << endl;
			cout << "Масса воды: " << m1 << endl;
		}
		else //t2 > 100
		{
			float Q, mp, m2; //mp-масса пара
			Q = c * m1 * (100 - t1);
			mp = (K - Q) / L;
			m2 = m1 - mp;
			if (m2 <= 0)
			{
				cout << "Вся вода испарилась " << endl;
			}
			if (m2 > 0)
			{
				cout << "Температура воды: " << 100 << endl;
				cout << "Масса воды: " << m2 << endl;
			}
		}
		cout << "Хотите ли еще посчитать конечную температуру и массу воды? (y/n)" << endl;
		std::cin >> again;
		if (again == 'n')
		{
			cout << "Нажмите на любую клавишу" << endl;
		}
	} while (again == 'y');
	return 0;
}