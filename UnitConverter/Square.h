
class Square : public BaseUnit
{
private:

	double SquareMeterToHectare() 
	{
		Value = Value / 10000;
		return Value;
	}

	double SquareMeterToAr() 
	{
		Value = Value / 100;
		return Value;
	}

	double SquareMeterToSquareKMeter()
	{
		Value = Value / 1000000;
		return Value;
	}

	double SquareMeterToAcr()
	{
		Value = Value / 4046.854;
		return Value;
	}

	double SquareMeterToSquaresMeter()
	{
		Value = Value * 10000;
		return Value;
	}

	double SquareMeterToSquareInch()
	{
		Value = Value * 1550, 003;
		return Value;
	}

	double SquaremMeterToSquareMeter()
	{
		Value = Value / 1000000;
		return Value;
	}

	double SquareMeterToSquaremMeter() 
	{
		Value = Value * 1000000;
		return Value;
	}

	double HectareToSquareMeter()
	{
		Value = Value * 10000;
		return Value;
	}

	double ArToSquareMeter()
	{
		Value = Value * 100;
		return Value;
	}

	double SquareKMeterToSquareMeter()
	{
		Value = Value * 1000000;
		return Value;
	}

	double AcrToSquareMeter()
	{
		Value = Value * 4046.854;
		return Value;
	}

	double SquaresMeterToSquareMeter()
	{
		Value = Value / 10000;
		return Value;
	}

	double SquareInchToSquareMeter()
	{
		Value = Value / 1550, 003;
		return Value;
	}

public:

	Square() : BaseUnit()
	{

	}

	virtual void GetConvertFrom()
	{
		printf("�������� ��������, �� ������� �� ������ ���������� ���������������:\n"
			"1 - ���������� �����;\n"
			"2 - ���������� ���������;\n"
			"3 - ���������� ���������;\n"
			"4 - ���������� ���������;\n"
			"5 - �������;\n"
			"6 - ���;\n"
			"7 - ����;\n");

		std::cin >> ConvertFrom;
	}

	virtual void GetConvertTo()
	{
		printf("�������� ��������, � ������� �� ������ ���������� ���������������:\n"
			"1 - ���������� �����;\n"
			"2 - ���������� ���������;\n"
			"3 - ���������� ���������;\n"
			"4 - ���������� ���������;\n"
			"5 - �������;\n"
			"6 - ���;\n"
			"7 - ����;\n");

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
			SquareKMeterToSquareMeter();
			break;

		case 3:
			SquaresMeterToSquareMeter();
			break;

		case 4:
			SquaremMeterToSquareMeter();
			break;

		case 5:
			HectareToSquareMeter();
			break;

		case 6:
			ArToSquareMeter();
			break;

		case 7:
			AcrToSquareMeter();
			break;
		}

		switch (ConvertTo)
		{
		case 2:
			SquareMeterToSquareKMeter();
			break;

		case 3:
			SquareMeterToSquaresMeter();
			break;

		case 4:
			SquareMeterToSquaremMeter();
			break;

		case 5:
			SquareMeterToHectare();
			break;

		case 6:
			SquareMeterToAr();
			break;

		case 7:
			SquareMeterToAcr();
			break;
		}

		return Value;
	}
};