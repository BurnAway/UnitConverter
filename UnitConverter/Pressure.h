
class Pressure : public BaseUnit
{
private:

	double BarTomBar()
	{
		Value = Value * 1000;
		return Value;
	}

	double BarToPaskal()
	{
		Value = Value * 100000;
		return Value;
	}

	double BarToKPaskal()
	{
		Value = Value * 100;
		return Value;
	}

	double BarToMPaskal()
	{
		Value = Value * 0.1;
		return Value;
	}

	double BarToGcm()
	{
		Value = Value * 1020;
		return Value;
	}

	double BarToKgcm()
	{
		Value = Value * 1.02;
		return Value;
	}

	double BarToToncm()
	{
		Value = Value * 0.00102;
		return Value;
	}

	double BarToKgm()
	{
		Value = Value * 10200;
		return Value;
	}

	double BarToTonm()
	{
		Value = Value * 10.2;
		return Value;
	}

	double BarToNewtoncm()
	{
		Value = Value * 10;
		return Value;
	}

	double BarToNewtonm()
	{
		Value = Value * 100000;
		return Value;
	}

	double mBarToBar() 
	{
		Value = Value / 1000;
		return Value;
	}

	double PaskalToBar() 
	{
		Value = Value * 0.00001;
		return Value;
	}

	double KPaskalToBar() 
	{
		Value = Value * 0.01;
		return Value;
	}

	double MPaskalToBar() 
	{
		Value = Value * 10;
		return Value;
	}

	double GcmToBar() 
	{
		Value = Value * 0.0009807;
		return Value;
	}

	double KgcmToBar()
	{
		Value = Value * 0.9807;
		return Value;
	}

	double ToncmToBar()
	{
		Value = Value * 980.7;
		return Value;
	}

	double KgmToBar() 
	{
		Value = Value * 0.00009807;
		return Value;
	}

	double TonmToBar()
	{
		Value = Value * 0.09807;
		return Value;
	}

	double NewtoncmToBar()
	{
		Value = Value / 10;
		return Value;
	}

	double NewtonmToBar()
	{
		Value = Value / 100000;
		return Value;
	}

public:

	Pressure() : BaseUnit()
	{

	}

	virtual void GetConvertFrom()
	{
		printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
			" 1 - Бар;\n"
			" 2 - Миллибар;\n"
			" 3 - Паскаль;\n"
			" 4 - Килопаскль;\n"
			" 5 - Мегапаскаль;\n"
			" 6 - Грамм/сантиметр;\n"
			" 7 - Килограмм/сантиметр;\n"
			" 8 - Тонна/сантиметр;\n"
			" 9 - Килограмм/метр;\n"
			" 10 - Тонна/метр;\n"
			" 11 - Ньютон/сантиметр;\n"
			" 12 - Ньютон/метр;\n");

		std::cin >> ConvertFrom;
	}

	virtual void GetConvertTo()
	{
		printf("Выберите величину, в которую Вы хотите произвести конвертирование:\n"
			" 1 - Бар;\n"
			" 2 - Миллибар;\n"
			" 3 - Паскаль;\n"
			" 4 - Килопаскль;\n"
			" 5 - Мегапаскаль;\n"
			" 6 - Грамм/сантиметр;\n"
			" 7 - Килограмм/сантиметр;\n"
			" 8 - Тонна/сантиметр;\n"
			" 9 - Килограмм/метр;\n"
			" 10 - Тонна/метр;\n"
			" 11 - Ньютон/сантиметр;\n"
			" 12 - Ньютон/метр;\n");

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
			mBarToBar();
			break;

		case 3:
			PaskalToBar();
			break;

		case 4:
			KPaskalToBar();
			break;

		case 5:
			MPaskalToBar();
			break;

		case 6:
			GcmToBar();
			break;

		case 7:
			KgcmToBar();
			break;

		case 8:
			ToncmToBar();
			break;

		case 9:
			KgmToBar();
			break;

		case 10:
			TonmToBar();
			break;

		case 11:
			NewtoncmToBar();
			break;

		case 12:
			NewtonmToBar();
			break;
		}

		switch (ConvertTo)
		{
		case 2:
			BarTomBar();
			break;

		case 3:
			BarToPaskal();
			break;

		case 4:
			BarToKPaskal();
			break;

		case 5:
			BarToMPaskal();
			break;

		case 6:
			BarToGcm();
			break;

		case 7:
			BarToKgcm();
			break;

		case 8:
			BarToToncm();
			break;

		case 9:
			BarToKgm();
			break;

		case 10:
			BarToTonm();
			break;

		case 11:
			BarToNewtoncm();
			break;

		case 12:
			BarToNewtonm();
			break;
		}

		return Value;
	}
};