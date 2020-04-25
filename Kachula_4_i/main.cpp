#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Программу сделал Качула Михаил Викторович студент группы УМЛ-112" << "\n";
	cout << "Программа \"вычисление таблицы функции\"" << endl;

	for (double x = 0; x <= 1.2; x += 0.05)
	{
		double result = 0;
		double a = 1;
		for (int i = 0; i < 20; i++)
		{
			result += (i + 1) * a;
			a *= x;
		}
		cout << "y(" << x << ") = " << result << endl;
	}

	return 0;
}
