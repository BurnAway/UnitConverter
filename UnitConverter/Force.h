
class Force : public BaseUnit
{
private:

	double NewtonToKNewton() 
	{
		Value = Value / 1000;
		return Value;
	}

	double NewtonToMNewton() {
		Value = Value * 1000;
		return Value;
	}

	double NewtonToMgNewton() 
	{
		Value = Value / 1000000;
		return Value;
	}

	double NewtonToMkNewton()
	{
		Value = Value * 1000000;
		return Value;
	}

	double NewtonToKgsNewton()
	{
		Value = Value * 0.101972;
		return Value;
	}

	double NewtonToPsNewton() 
	{
		Value = Value * 0.225;
		return Value;
	}

	double KNewtonToNewton() 
	{
		Value = Value * 1000;
		return Value;
	}

	double MNewtonToNewton()
	{
		Value = Value / 1000;
		return Value;
	}

	double MgNewtonToNewton() 
	{
		Value = Value * 1000000;
		return Value;
	}

	double MkNewtonToNewton() 
	{
		Value = Value / 1000000;
		return Value;
	}

	double KgsNewtonToNewton() 
	{
		Value = Value / 0.101972;
		return Value;
	}

	double PsNewtonToNewton() 
	{
		Value = Value / 0.225;
		return Value;
	}

public:

	Force() : BaseUnit()
	{

	}

	virtual void GetConvertFrom()
	{
		printf("�������� ��������, �� ������� �� ������ ���������� ���������������:\n"
			"1 - ������;\n"
			"2 - ����������;\n"
			"3 - �����������;\n"
			"4 - ����������;\n"
			"5 - �����������;\n"
			"6 - ���������-����;\n"
			"7 - ����-����;\n");

		std::cin >> ConvertFrom;
	}

	virtual void GetConvertTo()
	{
		printf("�������� ��������, � ������� �� ������ ���������� ���������������:\n"
			"1 - ������;\n"
			"2 - ����������;\n"
			"3 - �����������;\n"
			"4 - ����������;\n"
			"5 - �����������;\n"
			"6 - ���������-����;\n"
			"7 - ����-����;\n");

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
			KNewtonToNewton();
			break;

		case 3:
			MNewtonToNewton();
			break;

		case 4:
			MgNewtonToNewton();
			break;

		case 5:
			MkNewtonToNewton();
			break;

		case 6:
			KgsNewtonToNewton();
			break;

		case 7:
			PsNewtonToNewton();
			break;
		}

		switch (ConvertTo)
		{
		case 2:
			NewtonToKNewton();
			break;

		case 3:
			NewtonToMNewton();
			break;

		case 4:
			NewtonToMgNewton();
			break;

		case 5:
			NewtonToMkNewton();
			break;

		case 6:
			NewtonToKgsNewton();
			break;

		case 7:
			NewtonToPsNewton();
			break;
		}

		return Value;
	}
};