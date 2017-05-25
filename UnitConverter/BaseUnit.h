

class BaseUnit
{
protected:
	double Value;
	int ConvertFrom;
	int ConvertTo;

	virtual void GetConvertFrom() = 0;
	virtual void GetConvertTo() = 0;

public:
	
	BaseUnit()
	{
		Value = 0;
		ConvertFrom = 0;
		ConvertTo = 0;
	}

	void GetValue()
	{
		printf("������� �����, ������� �� ������ ���� ���������. \n"
			"� �������� �����-����������� ��� ������������ ����� ����������� ������ '.'.\n");
		std::cin >> Value;
	}

	void PrintValue()
	{
		std::cout << Value << "\n";
	}

	virtual double Convert() = 0;
};