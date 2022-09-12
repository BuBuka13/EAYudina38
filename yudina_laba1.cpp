//Вариант 2
//Требуется написать программу, которая генерирует строку состоящую из 10000 случайных символов английского алфавита.
// Требуется подсчитать сколько раз в сгенерированной строке встречается каждая буква алфавита.
// По итогу, нужно вывести сколько раз встречается каждый символ.

#include <iostream>
using namespace std;
#include <string.h>
#include <random>

int main() {
	setlocale(LC_ALL, "Rus");
	char str[10001] = "";
	int i, j = 0;
	char alph[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%^&*()_+-/.<>";
	int M = 79;
	int random, count = 0;
	for (i = 0; i < 10000; i++)
	{
		random = 0 + rand() % +(M - 1);
		str[i] = alph[random];
		count += 1;
	}
	
	cout << count  << "\n"; //проверяем количество символов/букв в строке
	cout << str << endl; //строка
	cout << "\n"; 

	int kolvo = 0;
	while (j < 79)
	{
		for (i = 0; i < 10000; i++) {
			if (str[i] == alph[j]) {
				kolvo += 1;
			}
		}
		cout << "Буква/символ = " << alph[j] << "; Количество: " << kolvo;
		cout << "\n";
		j++;
		kolvo = 0;
	}

}