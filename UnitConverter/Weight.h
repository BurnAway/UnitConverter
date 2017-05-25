
class Weight : public BaseUnit
{
private:
	
	double KilogramToGram() 
	{
		Value = Value * 1000;
		return Value;
	}

	double KilogramToQuintal()
	{
		Value = Value / 100;
		return Value;
	}

	double KilogramToTonne()
	{
		Value = Value / 1000;
		return Value;
	}

	double KilogramToCarat()
	{
		Value = Value * 5000;
		return Value;
	}
	
	double KilogramToFunt() 
	{
		Value = Value * 4.40925;
		return Value;
	}

	double KilogramToOunce()
	{
		Value = Value * 35.274;
		return Value;
	}

	double GramToKilogram()
	{
		Value = Value / 1000;
		return Value;
	}

	double QuintalToKilogram()
	{
		Value = Value * 100;
		return Value;
	}

	double TonneToKilogram() 
	{
		Value = Value * 1000;
		return Value;
	}

	double CaratToKilogram()
	{
		Value = Value / 5000;
		return Value;
	}
	
	double FuntToKilogram()
	{
		Value = Value * 0.00453592;
		return Value;
	}

	double OunceToKilogram()
	{
		Value = Value * 0.0283495;
		return Value;
	}

public:

	Weight() : BaseUnit()
	{

	}

	virtual void GetConvertFrom()
	{
		printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
			"1 - Грамм;\n"
			"2 - Килограмм;\n"
			"3 - Центнер;\n"
			"4 - Тонна;\n"
			"5 - Карат;\n"
			"6 - Фунт;\n"
			"7 - Унция;\n");

		std::cin >> ConvertFrom;
	}

	virtual void GetConvertTo()
	{
		printf("Выберите величину, в которую Вы хотите произвести конвертирование:\n"
			"1 - Грамм;\n"
			"2 - Килограмм;\n"
			"3 - Центнер;\n"
			"4 - Тонна;\n"
			"5 - Карат;\n"
			"6 - Фунт;\n"
			"7 - Унция;\n");

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
			GramToKilogram();
			break;

		case 3:
			QuintalToKilogram();
			break;

		case 4:
			TonneToKilogram();
			break;

		case 5:
			CaratToKilogram();
			break;

		case 6:
			FuntToKilogram();
			break;

		case 7:
			OunceToKilogram();
			break;
		}

		switch (ConvertTo)
		{
		case 1:
			KilogramToGram();
			break;

		case 3:
			KilogramToQuintal();
			break;

		case 4:
			KilogramToTonne();
			break;

		case 5:
			KilogramToCarat();
			break;

		case 6:
			KilogramToFunt();
			break;

		case 7:
			KilogramToOunce();
			break;
		}

		return Value;
	}
};