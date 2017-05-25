
class Density : public BaseUnit
{
private:

	double KilogramsPerCubicMeterToKilogramsPerCubicSantimeter()
	{
		Value = Value / 1000000;
		return Value;
	}

	double KilogramsPerCubicSantimeterToKilogramsPerCubicMeter()
	{
		Value = Value * 1000000;
		return Value;
	}

	double KilogramsPerCubicMeterToGramsPerCubicMeter()
	{
		Value = Value * 1000;
		return Value;
	}

	double GramsPerCubicMeterToKilogramsPerCubicMeter()
	{
		Value = Value / 1000;
		return Value;
	}

	double KilogramsPerCubicMeterToGramsPerCubicSantimeter()
	{
		Value = Value / 1000;
		return Value;
	}

	double GramsPerCubicSantimeterToKilogramsPerCubicMeter()
	{
		Value = Value * 1000;
		return Value;
	}

	double KilogramsPerCubicMeterToGramsPerCubicMillimeter()
	{
		Value = Value / 1000000;
		return Value;
	}

	double GramsPerCubicMillimeterToKilogramsPerCubicMeter()
	{
		Value = Value * 1000000;
		return Value;
	}

	double KilogramsPerCubicMeterToMilligramsPerCubicMeter()
	{
		Value = Value / 1000000;
		return Value;
	}

	double MilligramsPerCubicMeterToKilogramsPerCubicMeter()
	{
		Value = Value * 1000000;
		return Value;
	}

public:

	Density() : BaseUnit()
	{

	}

	virtual void GetConvertFrom()
	{
		printf("�������� ��������, �� ������� �� ������ ���������� ���������������:\n"
			"1 - ���������/���������� ����;\n"
			"2 - ���������/���������� ���������;\n"
			"3 - �����/���������� ����;\n"
			"4 - �����/���������� ���������;\n"
			"5 - �����/���������� ���������;\n"
			"6 - ���������/���������� ���������;\n");

		std::cin >> ConvertFrom;
	}

	virtual void GetConvertTo()
	{
		printf("�������� ��������, � ������� �� ������ ���������� ���������������:\n"
			"1 - ���������/���������� ����;\n"
			"2 - ���������/���������� ���������;\n"
			"3 - �����/���������� ����;\n"
			"4 - �����/���������� ���������;\n"
			"5 - �����/���������� ���������;\n"
			"6 - ���������/���������� ���������;\n");

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
			KilogramsPerCubicSantimeterToKilogramsPerCubicMeter();
			break;

		case 3:
			GramsPerCubicMeterToKilogramsPerCubicMeter();
			break;

		case 4:
			GramsPerCubicSantimeterToKilogramsPerCubicMeter();
			break;

		case 5:
			GramsPerCubicMillimeterToKilogramsPerCubicMeter();
			break;

		case 6:
			MilligramsPerCubicMeterToKilogramsPerCubicMeter();
			break;
		}

		switch (ConvertTo)
		{
		case 2:
			KilogramsPerCubicMeterToKilogramsPerCubicSantimeter();
			break;

		case 3:
			KilogramsPerCubicMeterToGramsPerCubicMeter();
			break;

		case 4:
			KilogramsPerCubicMeterToGramsPerCubicSantimeter();
			break;

		case 5:
			KilogramsPerCubicMeterToGramsPerCubicMillimeter();
			break;

		case 6:
			KilogramsPerCubicMeterToMilligramsPerCubicMeter();
			break;
		}

		return Value;
	}
};