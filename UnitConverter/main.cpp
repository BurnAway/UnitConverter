#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "PhysicalQuantities.h"

enum Unit
{
	uTime = 1,
	uSpeed,
	uLength,
	uSquare,
	uWeight,
	uVolume,
	uEnergy,
	uTemperature,
	uPressure,
	uForce,
	uAmperage,
	uDensity,
};

int main()
{
	BaseUnit* unit = NULL;
	
	setlocale(LC_ALL, "rus");

	while (true)
	{
		printf("\nВыберите величину\n");
		printf("1 - Время\t\t\t7 - Энергия\n");
		printf("2 - Скорость\t\t\t8 - Температура\n");
		printf("3 - Длина\t\t\t9 - Давление\n");
		printf("4 - Площадь\t\t\t10 - Сила\n");
		printf("5 - Масса\t\t\t11 - Сила тока\n");
		printf("6 - Объём\t\t\t12 - Плотность\n");

		int numberOfUnit = 0;

		std::cin >> numberOfUnit;
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());

		if (numberOfUnit == 0)
		{
			printf("Некорректный ввод\n");
			continue;
		}

		switch (numberOfUnit)
		{
		case uTime:
			unit = new Time();
			break;

		case uSpeed:
			unit = new Speed();
			break;

		case uLength:
			unit = new Length();
			break;

		case uSquare:
			unit = new Square();
			break;

		case uWeight:
			unit = new Weight();
			break;

		case uVolume:
			unit = new Volume();
			break;

		case uEnergy:
			unit = new Energy();
			break;

		case uTemperature:
			unit = new Temperature();
			break;

		case uPressure:
			unit = new Pressure();
			break;

		case uForce:
			unit = new Force();
			break;

		case uAmperage:
			unit = new Amperage();
			break;

		case uDensity:
			unit = new Density();
			break;
		}

		unit->Convert();
		unit->PrintValue();

		printf("1 - Продолжить конвертацию\n");
		
		int check;
		std::cin >> check;

		if (check != 1)
		{
			return 0;
		}
	}

	_getch();
	return 0;
}