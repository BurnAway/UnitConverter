
class Energy : public BaseUnit
{
private:

	double JouleToKVtPerHour()
	{
		Value = Value * 2.78 * pow(10, -7);
		return Value;
	}

	double JouleToElectronVolt()
	{
		Value = Value * 6.24 * pow(10, 18);
		return Value;
	}

	double JouleToCalories()
	{
		Value = Value / 4.186800;
		return Value;
	}
	
	double KVtPerHourToJoule()
	{
		Value = Value * 3600000;
		return Value;
	}

	double ElectronVoltToJoule()
	{
		Value = Value * 1.602176 * pow(10, -19);
		return Value;
	}
	
	double CaloriesToJoule()
	{
		Value = Value * 4.1868;
		return Value;
	}

public:

	Energy() : BaseUnit()
	{

	}

	virtual void GetConvertFrom()
	{
		printf("�������� ��������, �� ������� �� ������ ���������� ���������������:\n"
			"1 - ������;\n"
			"2 - ��������-���;\n"
			"3 - ��������������;\n"
			"4 - ��������;\n");

		std::cin >> ConvertFrom;
	}

	virtual void GetConvertTo()
	{
		printf("�������� ��������, � ������� �� ������ ���������� ���������������:\n"
			"1 - ������;\n"
			"2 - ��������-���;\n"
			"3 - ��������������;\n"
			"4 - ��������;\n");

		std::cin >> ConvertTo;
	}

	virtual double Convert()
	{
		GetValue();
		GetConvertFrom();
		GetConvertTo();

		switch (ConvertFrom)
		{
		case 2:
			KVtPerHourToJoule();
			break;

		case 3:
			ElectronVoltToJoule();
			break;

		case 4:
			CaloriesToJoule();
			break;
		}

		switch (ConvertTo)
		{
		case 2:
			JouleToKVtPerHour();
			break;

		case 3:
			JouleToElectronVolt();
			break;

		case 4:
			JouleToCalories();
			break;
		}

		return Value;
	}
};