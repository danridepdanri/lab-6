#pragma comment(lib,"Dll1.lib")
#include <iostream>
#include "Fraction.h"
#include <Windows.h>
#include <string>
using namespace std;
int main()
{

	setlocale(LC_ALL, "ru");    //русский язык


	Fraction N; // инициализация двух частей через статические данные конструктора
	N.display();
	Fraction M(25, 56); // инициализация через одно значение, второе будет дефолтное 
	M.display();
	Fraction S(66, 44); // типичная инициализация с двумя параметрами 
	S.display();

	system("pause");


	return 0;
}
