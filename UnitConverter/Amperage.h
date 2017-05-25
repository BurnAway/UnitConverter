
class Amperage : public BaseUnit
{
private:

	double AmpereToKAmpere() 
	{
		Value = Value / 1000;
		return Value;
	}

	double KAmpereToAmpere()
	{
		Value = Value * 1000;
		return Value;
	}

	double AmpereToMAmpere()
	{
		Value = Value * 1000;
		return Value;
	}

	double MAmpereToAmpere()
	{
		Value = Value / 1000;
		return Value;
	}

	double AmpereToMkAmpere()
	{
		Value = Value * 1000000;
		return Value;
	}

	double MkAmpereToAmpere()
	{
		Value = Value / 1000000;
		return Value;
	}

	double AmpereToNAmpere()
	{
		Value = Value / 1000000000;
		return Value;
	}

	double NAmpereToAmpere() 
	{
		Value = Value / 1000000000;
		return Value;
	}

public:

	Amperage() : BaseUnit()
	{

	}

	virtual void GetConvertFrom()
	{
		printf("�������� ��������, �� ������� �� ������ ���������� ���������������:\n"
			"1 - �����;\n"
			"2 - ���������;\n"
			"3 - ����������;\n"
			"4 - ����������;\n"
			"5 - ���������;\n");

		std::cin >> ConvertFrom;
	}

	virtual void GetConvertTo()
	{
		printf("�������� ��������, � ������� �� ������ ���������� ���������������:\n"
			"1 - �����;\n"
			"2 - ���������;\n"
			"3 - ����������;\n"
			"4 - ����������;\n"
			"5 - ���������;\n");

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
			KAmpereToAmpere();
			break;

		case 3:
			MAmpereToAmpere();
			break;

		case 4:
			MkAmpereToAmpere();
			break;

		case 5:
			NAmpereToAmpere();
			break;
		}

		switch (ConvertTo)
		{
		case 2:
			AmpereToKAmpere();
			break;

		case 3:
			AmpereToMAmpere();
			break;

		case 4:
			AmpereToMkAmpere();
			break;

		case 5:
			AmpereToNAmpere();
			break;
		}

		return Value;
	}
};