
class Temperature : public BaseUnit
{
private:

	double KelvinToFahrenheit()
	{
		Value = Value * 9 / 5 - 459.67;
		return Value;
	}

	double KelvinToCelsiu()
	{
		Value = Value - 273.15;
		return Value;
	}

	double KelvinToReaumur() 
	{
		Value = (Value - 273.15) * 4 / 5;
		return Value;
	}

	double KelvinToRankine() 
	{
		Value = Value * 9 / 5;
		return Value;
	}

	double KelvinToNewton() 
	{
		Value = (Value - 273.15) * 33 / 100;
		return Value;
	}

	double KelvinToRomer() 
	{
		Value = (Value - 273.15) * 21 / 40 + 7.5;
		return Value;
	}

	double FahrenheitToKelvin()
	{
		Value = (Value + 459.67) * 5 / 9;
		return Value;
	}

	double CelsiuToKelvin()
	{
		Value = Value + 273.15;
		return Value;
	}

	double ReaumurToKelvin()
	{
		Value = Value * 5 / 4 + 273.15;
		return Value;
	}

	double RankineToKelvin()
	{
		Value = Value * 5 / 9;
		return Value;
	}

	double NewtonToKelvin()
	{
		Value = Value * 100 / 33 + 273.15;
		return Value;
	}

	double RomerToKelvin() 
	{
		Value = (Value - 7.5) * 40 / 21 + 273.15;
		return Value;
	}

public:

	Temperature() : BaseUnit()
	{

	}

	virtual void GetConvertFrom()
	{
		printf("�������� ��������, �� ������� �� ������ ���������� ���������������:\n"
			"1 - �������;\n"
			"2 - ���������;\n"
			"3 - �������;\n"
			"4 - �������;\n"
			"5 - �������;\n"
			"6 - �������;\n"
			"7 - и����;\n");

		std::cin >> ConvertFrom;
	}

	virtual void GetConvertTo()
	{
		printf("�������� ��������, � ������� �� ������ ���������� ���������������:\n"
			"1 - �������;\n"
			"2 - ���������;\n"
			"3 - �������;\n"
			"4 - �������;\n"
			"5 - �������;\n"
			"6 - �������;\n"
			"7 - и����;\n");

		std::cin >> ConvertTo;
	}

	virtual double Convert()
	{
		GetValue();
		GetConvertFrom();
		GetConvertTo();

		switch (ConvertFrom)
		{
		case 1:
			CelsiuToKelvin();
			break;

		case 2:
			FahrenheitToKelvin();
			break;

		case 4:
			ReaumurToKelvin();
			break;

		case 5:
			RankineToKelvin();
			break;

		case 6:
			NewtonToKelvin();
			break;

		case 7:
			RomerToKelvin();
			break;
		}

		switch (ConvertTo)
		{
		case 1:
			KelvinToCelsiu();
			break;

		case 2:
			KelvinToFahrenheit();
			break;

		case 4:
			KelvinToReaumur();
			break;

		case 5:
			KelvinToRankine();
			break;

		case 6:
			KelvinToNewton();
			break;

		case 7:
			KelvinToRomer();
			break;
		}

		return Value;
	}
};