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

//函数：operator 运算符
//参数： 操作符的操作数有几个就有几个参数，参数类型：你要操作的对象的类型, 返回值：看运算符运算后的返回值是什么

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
	//运算符默认都是给内置类型使用，自定义类型
	//自定义类型如果想要使用需要，自己进行运算符重载（写一个函数定义运算符的行为）
	operator==(d1, d2);
	return 0;
}