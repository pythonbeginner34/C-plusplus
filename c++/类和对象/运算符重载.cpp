#include<iostream>
class Date
{
public:
	Date(int year = 0, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	int _year;
	int _month;
	int _day;
};

//������operator �����
//������ �������Ĳ������м������м����������������ͣ���Ҫ�����Ķ��������, ����ֵ��������������ķ���ֵ��ʲô

bool operator == (Date x1, Date x2)
{
	return x1._year == x2._year
		&& x1._month == x2._month
		&& x1._day == x2._day;
}

int main(void)
{
	Date d1(2021, 10, 19);
	Date d2(2021, 11, 11);
	Date d3(2021, 11, 11);
	//�����Ĭ�϶��Ǹ���������ʹ�ã��Զ�������
	//�Զ������������Ҫʹ����Ҫ���Լ�������������أ�дһ�������������������Ϊ��
	operator==(d1, d2);
	return 0;
}