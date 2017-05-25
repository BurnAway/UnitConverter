
class Volume : public BaseUnit
{
private:

	double SquaredMeterToSquaredKilometer()
	{
		Value = Value / (pow(10, -9));
		return Value;
	}

	double SquaredMeterToSquaredDecimeter() 
	{
		Value = Value * 1000;
		return Value;
	}

	double SquaredMeterToSquaredCentimeter() 
	{
		Value = Value * 1000000;
		return Value;
	}

	double SquaredMeterToSquaredMillimeter()
	{
		Value = Value * 1000000000;
		return Value;
	}

	double SquaredMeterToLiter()
	{
		Value = Value * 1000;
		return Value;
	}

	double SquaredMeterToMililiter()
	{
		Value = Value * 1000000;
		return Value;
	}

	double SquaredMeterToGallon()
	{
		Value = Value * 264.1720523581;
		return Value;
	}

	double SquaredMeterToBarrel()
	{
		Value = Value * 6.289810770432;
		return Value;
	}
	
	double SquaredMeterToQuart() 
	{
		Value = Value * 0.000002113376418865;
		return Value;
	}

	double SquaredKilometerToSquaredMeter()
	{
		Value = Value * 1000000000;
		return Value;
	}

	double SquaredDecimeterToSquaredMeter()
	{
		Value = Value / 1000;
		return Value;
	}

	double SquaredCentimeterToSquaredMeter()
	{
		Value = Value / 1000000;
		return Value;
	}

	double SquaredMillimeterToSquaredMeter()
	{
		Value = Value / (pow(10, -9));
		return Value;
	}

	double LiterToSquaredMeter() 
	{
		Value = Value / 1000;
		return Value;
	}

	double MililiterToSquaredMeter()
	{
		Value = Value / 1000000;
		return Value;
	}

	double GallonToSquaredMeter()
	{
		Value = Value * 0.003785411784;
		return Value;
	}

	double BarrelToSquaredMeter()
	{
		Value = Value * 0.158987294928;
		return Value;
	}

	double QuartToSquaredMeter()
	{
		Value = Value * 0.000946352946;
		return Value;
	}
	
public:

	Volume() : BaseUnit()
	{

	}

	virtual void GetConvertFrom()
	{
		printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
			"1 - Кубический километр;\n"
			"2 - Кубический метр;\n"
			"3 - Кубический дециметр;\n"
			"4 - Кубический сантиметр;\n"
			"5 - Кубический миллиметр;\n"
			"6 - Литр;\n"
			"7 - Миллилитр;\n"
			"8 - Галлон;\n"
			"9 - Баррель;\n"
			"10 - Кварта;\n");

		std::cin >> ConvertFrom;
	}

	virtual void GetConvertTo()
	{
		printf("Выберите величину, в которую Вы хотите произвести конвертирование:\n"
			"1 - Кубический километр;\n"
			"2 - Кубический метр;\n"
			"3 - Кубический дециметр;\n"
			"4 - Кубический сантиметр;\n"
			"5 - Кубический миллиметр;\n"
			"6 - Литр;\n"
			"7 - Миллилитр;\n"
			"8 - Галлон;\n"
			"9 - Баррель;\n"
			"10 - Кварта;\n");

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
			SquaredKilometerToSquaredMeter();
			break;

		case 3:
			SquaredDecimeterToSquaredMeter();
			break;

		case 4:
			SquaredCentimeterToSquaredMeter();
			break;

		case 5:
			SquaredMillimeterToSquaredMeter();
			break;

		case 6:
			LiterToSquaredMeter();
			break;

		case 7:
			MililiterToSquaredMeter();
			break;

		case 8:
			GallonToSquaredMeter();
			break;

		case 9:
			BarrelToSquaredMeter();
			break;

		case 10:
			QuartToSquaredMeter();
			break;
		}

		switch (ConvertTo)
		{
		case 1:
			SquaredMeterToSquaredKilometer();
			break;

		case 3:
			SquaredMeterToSquaredDecimeter();
			break;

		case 4:
			SquaredMeterToSquaredCentimeter();
			break;

		case 5:
			SquaredMeterToSquaredMillimeter();
			break;

		case 6:
			SquaredMeterToLiter();
			break;

		case 7:
			SquaredMeterToMililiter();
			break;

		case 8:
			SquaredMeterToGallon();
			break;

		case 9:
			SquaredMeterToBarrel();
			break;

		case 10:
			SquaredMeterToQuart();
			break;
		}

		return Value;
	}
};