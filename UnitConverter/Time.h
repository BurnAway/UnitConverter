
class Time: public BaseUnit
{
private:

	double NsecToMin()
	{
		Value = Value / (pow(10, 9) * 60);
		return Value;
	}

	double MksecToMin()
	{
		Value = Value / (pow(10, 6) * 60);
		return Value;
	}

	double MsecToMin()
	{
		Value = Value * pow(10, -3) * 60;
		return Value;
	}

	double SecToMin()
	{
		Value = Value / 60;
		return Value;
	}

	double HourToMin()
	{
		Value = Value * 60;
		return Value;
	}

	double DayToMin()
	{
		Value = Value * 60 * 24;
		return Value;
	}

	double WeekToMin()
	{
		Value = Value * 60 * 24 * 7;
		return Value;
	}

	double MinToNsec() 
	{
		Value = Value * 60 * 1000 * 1000 * 1000;
		return Value;
	}

	double MinToMksec()
	{
		Value = Value * 60 * 1000 * 1000;
		return Value;
	}

	double MinToMsec() 
	{
		Value = Value * 60 * 1000;
		return Value;
	}

	double MinToSec() 
	{
		Value = Value * 60;
		return Value;
	}

	double MinToHour()
	{
		Value = Value / 60;
		return Value;
	}

	double MinToDay()
	{
		Value = Value / (60 * 24);
		return Value;
	}
	
public:

	Time() : BaseUnit()
	{

	}

	virtual void GetConvertFrom()
	{
		printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
			"1 - Наносекунды;\n"
			"2 - Микросекунды;\n"
			"3 - Миллисекунды;\n"
			"4 - Секунды;\n"
			"5 - Минуты;\n"
			"6 - Часы;\n"
			"7 - Сутки;\n");

		std::cin >> ConvertFrom;
	}

	virtual void GetConvertTo()
	{
		printf("Выберите величину, в которую Вы хотите произвести конвертирование:\n"
			"1 - Наносекунды;\n"
			"2 - Микросекунды;\n"
			"3 - Миллисекунды;\n"
			"4 - Секунды;\n"
			"5 - Минуты;\n"
			"6 - Часы;\n"
			"7 - Сутки;\n");

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
			NsecToMin();
			break;

		case 2:
			MksecToMin();
			break;

		case 3:
			MsecToMin();
			break;
			
		case 4:
			SecToMin();
			break;

		case 6:
			HourToMin();
			break;

		case 7:
			DayToMin();
			break;

		case 8:
			WeekToMin();
			break;
		}

		switch (ConvertTo)
		{
		case 1:
			MinToNsec();
			break;

		case 2:
			MinToMksec();
			break;

		case 3:
			MinToMsec();
			break;
			
		case 4:
			MinToSec();
			break;

		case 6:
			MinToHour();
			break;

		case 7:
			MinToDay();
			break;
		}

		return Value;
	}
};