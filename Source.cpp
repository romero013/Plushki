// Персональный шаблон проекта С++
#include <iostream>
#include <conio.h>
#include "windows.h"
using namespace std;

int timer = 0;

int main() {
	setlocale(LC_ALL, "Russian");

	char sym;
	bool f = false;
	

	while (!f) {
		if (_kbhit()) { // keyboard hit - клавиатура нажата
			sym = _getch(); // Не выводит в консоли нажатую клавишу
			//sym = _getche(); // Выводит в консоли нажатую клавишу
			//cout << sym << endl;
			switch (sym) {
			case 'w': case 'W': system("cls"); cout << "UP\n"; break;
			case 'a': case 'A': system("cls"); cout << "LEFT\n"; break;
			case 's': case 'S': system("cls"); cout << "DOWN\n"; break;
			case 'd': case 'D': system("cls"); cout << "RIGTH\n"; break;
			case 'q': case 'Q': f = true;
			}
		}
		Sleep(100);
		timer += 100;
		if (timer % 1000 == 0) {
			cout << ".\n";
			timer = 0;
		}
	}


	return 0;
}