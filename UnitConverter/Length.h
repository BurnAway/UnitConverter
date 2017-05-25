
class Length : public BaseUnit
{
private:

	double MeterToMilliMeter()
	{
		Value = Value * 1000;
		return Value;
	}

	double MeterToCentiMeter()
	{
		Value = Value * 100;
		return Value;
	}

	double MeterToDeciMeter()
	{
		Value = Value * 10;
		return Value;
	}

	double MeterToKiloMeter()
	{
		Value = Value / 1000;
		return Value;
	}

	double MeterToFathom()
	{
		Value = Value * 0.4686914135733;
		return Value;
	}
	
	double MeterToMile()
	{
		Value = Value * 0.0006213711922373;
		return Value;
	}
	
	double MeterToMicroMeter() 
	{
		Value = Value * 1000000;
		return Value;
	}

	double MeterToNanoMeter()
	{
		Value = Value * 1000000000;
		return Value;
	}


	double milliMeterToMeter() 
	{
		Value = Value / 1000;
		return Value;
	}

	double centiMeterToMeter() 
	{
		Value = Value / 100;
		return Value;
	}

	double deciMeterToMeter() 
	{
		Value = Value / 10;
		return Value;
	}

	double kiloMeterToMeter() 
	{
		Value = Value * 1000;
		return Value;
	}

	double fathomToMeter() 
	{
		Value = Value * 2.1336;
		return Value;
	}
	
	double mileToMeter() 
	{
		Value = Value * 1609.344;
		return Value;
	}
		
	double microMeterToMeter() 
	{
		Value = Value / 1000000;
		return Value;
	}

	double nanoMeterToMeter() 
	{
		Value = Value * 1 * (pow(10, -9));
		return Value;
	}

public:

	Length() : BaseUnit()
	{

	}

	virtual void GetConvertFrom()
	{
		printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
			"1 - Миллиметр;\n"
			"2 - Метр;\n"
			"3 - Сантиметр;\n"
			"4 - Дециметр;\n"
			"5 - Километр;\n"
			"6 - Микрометр;\n"
			"7 - Нанометр;\n"
			"8 - Миля;\n");

		std::cin >> ConvertFrom;
	}

	virtual void GetConvertTo()
	{
		printf("Выберите величину, в которую Вы хотите произвести конвертирование:\n"
			"1 - Миллиметр;\n"
			"2 - Метр;\n"
			"3 - Сантиметр;\n"
			"4 - Дециметр;\n"
			"5 - Километр;\n"
			"6 - Микрометр;\n"
			"7 - Нанометр;\n"
			"8 - Миля;\n");

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
			milliMeterToMeter();
			break;
			
		case 3:
			centiMeterToMeter();
			break;

		case 4:
			deciMeterToMeter();
			break;

		case 5:
			kiloMeterToMeter();
			break;

		case 6:
			microMeterToMeter();
			break;

		case 7:
			nanoMeterToMeter();
			break;

		case 8:
			mileToMeter();
			break;
		}

		switch (ConvertTo)
		{
		case 1:
			MeterToMilliMeter();
			break;
			
		case 3:
			MeterToCentiMeter();
			break;

		case 4:
			MeterToDeciMeter();
			break;

		case 5:
			MeterToKiloMeter();
			break;

		case 6:
			MeterToMicroMeter();
			break;

		case 7:
			MeterToNanoMeter();
			break;

		case 8:
			MeterToMile();
			break;
		}

		return Value;
	}
};