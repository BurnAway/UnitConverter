
class Speed : public BaseUnit
{
private:

	double kmchTomc()
	{
		Value = Value * 0.277777;
		return Value;
	}

	double kmchTouzl()
	{
		Value = Value * 0.539956;
		return Value;
	}

	double kmchTomah()
	{
		Value = Value * 0.00084;
		return Value;
	}

	double kmchTomilch()
	{
		Value = Value * 0.62;
		return Value;
	}

	double uzlTokmch()
	{
		Value = Value * 1.8520;
		return Value;
	}

	double mahTokmch()
	{
		Value = Value * 1193.26;
		return Value;
	}


	double milchTokmch()
	{
		Value = Value * 1.609344;
		return Value;
	}


	double mcTokmch()
	{
		Value = Value * 3.6;
		return Value;
	}


public:

	Speed() : BaseUnit()
	{

	}

	virtual void GetConvertFrom()
	{
		printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
			"1 - Километры в час;\n"
			"2 - Метры в секунду;\n"
			"3 - Узлы;\n"
			"4 - Мили в час;\n");

		std::cin >> ConvertFrom;
	}

	virtual void GetConvertTo()
	{
		printf("Выберите величину, в которую Вы хотите произвести конвертирование:\n"
			"1 - Километры в час;\n"
			"2 - Метры в секунду;\n"
			"3 - Узлы;\n"
			"4 - Мили в час;\n");

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
			mcTokmch();
			break;

		case 3:
			uzlTokmch();
			break;

		case 4:
			milchTokmch();
			break;
		}

		switch (ConvertTo)
		{
		case 2:
			kmchTomc();
			break;

		case 3:
			kmchTouzl();
			break;

		case 4:
			kmchTomilch();
			break;
		}

		return Value;
	}
};