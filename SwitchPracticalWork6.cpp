#include <iostream>

using namespace std;

enum Month
{
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};

short _monthIndex;

void selectMonth() {
	cout << "Выберете номер месяца: ";
	cin >> _monthIndex;

	switch (_monthIndex)
	{
	case Month::January:
		cout << "\nВыбран месяц \x1b[94m\"Январь\"\x1b[0m\n";
		break;
	case Month::February:
		cout << "\nВыбран месяц \x1b[94m\"Февраль\"\x1b[0m\n";
		break;
	case Month::March:
		cout << "\nВыбран месяц \x1b[92m\"Март\"\x1b[0m\n";
		break;
	case Month::April:
		cout << "\nВыбран месяц \x1b[92m\"Апрель\"\x1b[0m\n";
		break;
	case Month::May:
		cout << "\nВыбран месяц \x1b[92m\"Май\"\x1b[0m\n";
		break;
	case Month::June:
		cout << "\nВыбран месяц \x1b[95m\"Июнь\"\x1b[0m\n";
		break;
	case Month::July:
		cout << "\nВыбран месяц \x1b[95m\"Июль\"\x1b[0m\n";
		break;
	case Month::August:
		cout << "\nВыбран месяц \x1b[95m\"Август\"\x1b[0m\n";
		break;
	case Month::September:
		cout << "\nВыбран месяц \x1b[93m\"Сентябрь\"\x1b[0m\n";
		break;
	case Month::October:
		cout << "\nВыбран месяц \x1b[93m\"Октябрь\"\x1b[0m\n";
		break;
	case Month::November:
		cout << "\nВыбран месяц \x1b[93m\"Ноябрь\"\x1b[0m\n";
		break;
	case Month::December:
		cout << "\nВыбран месяц \x1b[94m\"Декабрь\"\x1b[0m\n";
		break;
	default: cout << "\x1b[31mНе правильно введен номер месяца!\x1b[0m\n";
		break;
	}
}

bool checkStopUserInput() {
	cout << "\nВведите \x1b[91m\"+\"\x1b[0m, чтобы ввести следующий месяц или \x1b[91m\"-\"\x1b[0m, чтобы завершить программу.\n";

	char userInpuntChar;
	cin >> userInpuntChar;

	while (userInpuntChar == '+' || userInpuntChar == '-') {
		switch (userInpuntChar) {
		case '+':
			system("cls");
			return true;
		case '-':
			return false;
		default:
			cout << "\nВведён некорректный символ, повторите ввод.";
			break;
		}
	}

	return true;
}

int main() {
	setlocale(0, "");

	do { selectMonth(); } 
	while (checkStopUserInput());

	return 0;
}