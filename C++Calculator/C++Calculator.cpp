
#include <iostream>;
#include <Windows.h>;
#include <cmath>;

using namespace std;

int main()
{
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");
	int vibor, i;
	double pervchsl, vtorchsl, rezult;
	do
	{
		cout << "Выбирите какую опрерацию:\n";
		cout << "1.Сложение\n";
		cout << "2.Вычитание\n";
		cout << "3.Частное\n";
		cout << "4.Произведение\n";
		cout << "5.Возведение в степень\n";
		cout << "6.Нахождение квадратного корня\n";
		cout << "7.Нахождение 1 процента от числа \n";
		cout << "8.Найти факториал числа\n";
		cout << "9.Выход из программы\n";
		cout << "Ваш выбор пал на:";
		cin >> vibor;
		switch (vibor)
		{
		case 1:
			cout << "Введите первое число ";
			cin >> pervchsl;
			cout << "Введите второе число ";
			cin >> vtorchsl;
			rezult = pervchsl + vtorchsl;
			cout << "Сумма чисел= " << rezult << endl;
			break;
		case 2:
			cout << "Введите первое число ";
			cin >> pervchsl;
			cout << "Введите второе число ";
			cin >> vtorchsl;
			rezult = pervchsl - vtorchsl;
			cout << "Сумма чисел= " << rezult << endl;
			break;
		case 3:
			cout << "Введите первое число ";
			cin >> pervchsl;
			cout << "Введите второе число ";
			cin >> vtorchsl;
			if (pervchsl == 0)
				cout << "Частное = " << 0 << endl;
			else if (vtorchsl == 0)
				cout << "На ноль делить нельзя" << 0 << endl;
			else
				rezult = pervchsl / vtorchsl;
			cout << "Частное = " << 0 << endl;
			break;
		case 4:
			cout << "Введите первое число ";
			cin >> pervchsl;
			cout << "Введите второе число ";
			cin >> vtorchsl;
			rezult = pervchsl * vtorchsl;
			cout << "Произведение= " << rezult << endl;
			break;
		case 5:
			cout << "Введите первое число ";
			cin >> pervchsl;
			cout << "Введите степень, в которую хотите возвести число ";
			cin >> vtorchsl;
			rezult = pow(pervchsl, vtorchsl);
			cout << "Ответ: " << rezult << endl;
			break;
		case 6:
			cout << "Введите число ";
			cin >> pervchsl;
			rezult = sqrt(pervchsl);
			cout << "корень= " << rezult << endl;
			break;
		case 7:
			cout << "Введите число";
			cin >> pervchsl;
			rezult = pervchsl / 100;
			cout << "1 процент от числа равен: " << rezult << endl;
			break;
		case 8:
			cout << "Введите число, факториал которого нужно найти";
			cin >> pervchsl;
			int res;
			res = 1;
			for (i = 1; i <= pervchsl; i++) {
				res = res * i;
			}
			cout << "Факториал равен " << res << endl;
			break;
		case 9:
			cout << "Усе, конец";
			break;
		default:
			cout << "Давайте введем число из меню, пж";
			break;
		}
		cout << "\n";
	} while (vibor != 9);

}

