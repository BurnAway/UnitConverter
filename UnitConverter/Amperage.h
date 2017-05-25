
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
		printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
			"1 - Ампер;\n"
			"2 - Килоампер;\n"
			"3 - Миллиампер;\n"
			"4 - Микроампер;\n"
			"5 - Наноампер;\n");

		std::cin >> ConvertFrom;
	}

	virtual void GetConvertTo()
	{
		printf("Выберите величину, в которую Вы хотите произвести конвертирование:\n"
			"1 - Ампер;\n"
			"2 - Килоампер;\n"
			"3 - Миллиампер;\n"
			"4 - Микроампер;\n"
			"5 - Наноампер;\n");

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