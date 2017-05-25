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
		printf("\n�������� ��������\n");
		printf("1 - �����\t\t\t7 - �������\n");
		printf("2 - ��������\t\t\t8 - �����������\n");
		printf("3 - �����\t\t\t9 - ��������\n");
		printf("4 - �������\t\t\t10 - ����\n");
		printf("5 - �����\t\t\t11 - ���� ����\n");
		printf("6 - �����\t\t\t12 - ���������\n");

		int numberOfUnit = 0;

		std::cin >> numberOfUnit;
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());

		if (numberOfUnit == 0)
		{
			printf("������������ ����\n");
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

		printf("1 - ���������� �����������\n");
		
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