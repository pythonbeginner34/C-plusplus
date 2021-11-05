#include<iostream>
using namespace std;

//class A
//{
//public:
//	A(int a)
//	{
//		_a = a;
//		cout << "A(int a = 0)" << endl;
//	}
//
//	A& operator =(const A& aa)
//	{
//		if (this != &aa)
//		{
//			_a = aa._a;
//		}
//		cout << "operator =(const A& aa)" << endl;
//		return *this;
//	}
//private:
//	int _a;
//};

//class B
//{
//public:
//	B(int a, int b)
//		//:_aa(a)
//		//, _b(b)//函数内初始化，改用初始化列表初始化，可以提高效率 //尽管这里没有显示写初始化列表，但是这里也是认为有初始化列表的，我们可以认为初始化列表是对对象的成员变量定义的地方
//	{
//		/*A aa(a);
//		_aa = aa;
//		_b = b;*/
//		//_aa = A(a);//创建匿名对象
//		/*_b = b;*/
//	}
//private:
//	int _b = 1;
//	A _aa;
//};

//class B
//{
//public:
//	B(int c, int& b, int d)
//		:_c(c)
//		,_ret(b)
//		,_aa(d)
//	{
//		_ret = 100;
//	}
//private:
//	const int _c;//const成员必须在定义时定义
//	int& _ret;//引用必须在定义时初始化
//	A _aa;//没有默认构造函数的自定义类型需要使用初始化列表
//};

//int main()
//{
//	int tmp = 10;
//	B b(1, tmp,10);
//	cout << tmp<< endl;
//	return 0;
//}
//建议尽量使用初始化列表

//class D
//{
//public:
//	D(int a)
//		:_a1(a)//成员变量在类中声明次序就是其在初始化列表中的初始化的顺序，与其在列表中先后顺序没有关系。
//		,_a2(_a1)//建议初始化列表顺序和定义顺序一致
//	{
//
//	}
//
//	void Print()
//	{
//		cout << _a1 << " " << _a2 << endl;
//	}
//private:
//	int _a2;
//	int _a1;
//};
//
//int main()
//{
//	D aa(1);
//	aa.Print();
//	return 0;
//}

//class A
//{
//public:
//	/*explicit*/ A(int a)//不支持隐式类型转换可以加上一个explicit关键字
//		:_a(a)
//	 {
//		cout << "A(int a)" << endl;
//	 }
//	 A(const A& aa)
//	 {
//		 cout << "A(const A& aa)" << endl;
//	 }
//private:
//	int _a;
//};
//
//int main()
//{
//	A aa1(1);
//	//隐式类型转换
//	A aa2 = 2;
//	/*A aa2 = { 1,2 };*/
//	double d = 11.11;
//	int i = d;
//	return 0;
//}

//让程序计算，下面构造了多少个对象
int countc = 0;
int countcc = 0;

//class A
//{
//public:
//	A()
//	{
//		++_count;
//	}
//	A(const A& a)
//	{
//		++_count;
//	}
//
//private:
//	int _a;//存在定义出的对象中，属于对象
//};
//
//int A::_count = 0;//定义初始化
//
//A f(A a)
//{
//	A ret(a);
//	return ret;
//}
//
////构造3次，拷贝构造5次
//int main()
//{
//	A a1 = f(A());
//	A a2;
//	A a3;
//	a3 = f(a2);
//	cout << countc << endl;
//	cout << countcc << endl;
//	return 0;
//}

//class A
//{
//public:
//	A()
//	{
//		++_count;
//	}
//	A(const A& a)
//	{
//		++_count;
//	}
//
//	static int Getcount()//私有的成员变量，在类域外面不可以访问，可以在域内使用函数访问，然后在域外调用成员函数
//	//可以定义一个静态的成员函数，这样做可以避免调用构造函数等函数带来的开销，只是单纯的访问成员变量，并不创建对象
//	//静态成员函数没有this指针，静态成员变量不可以访问非静态成员变量，非静态成员变量可以访问静态成员变量
//	{
//		return _count;
//	}
//private:
//	int _a;//存在定义出的对象中，属于对象
//	static int _count;//存在静态区，属于整个类，也属于每个定义出来的对象共享
//	//和全局的变量相比，他受到类域限定和访问限定符限定，更好的体现封装，别人不能轻易更改
//	//静态类型不能在构造函数初始化，要在全局位置初始化
//	//静态类型的成员函数可以设置成私有也可设置成共有
//	//静态成员变量必须在类外定义，定义时不添加static
//};
//
//int A::_count = 0;//定义初始化
//
//A f(A a)
//{
//	A ret(a);
//	return ret;
//}

//构造3次，拷贝构造5次
//int main()
//{
//	A a1 = f(A());
//	A a2;
//	A a3;
//	a3 = f(a2);
//	cout << sizeof(A) << endl;//说明static定义的变量并不定义在对象中，而是定义在静态区，sizeof计算的是对象的大小而不是类的大小
//	//A::_count = 10;static定义的变量不能在类域外修改
//	//当类定义为共有时，可以用如下方法访问成员变量
//	//cout << A::count << endl;
//	//cout<<a1._count<<endl;
//	//cout<<a2._count<<endl;
//	/*A ret;
//	cout << ret.Getcount()-1 << endl;*/
//	/*cout << A().Getcount()-1 << endl;*/
//	cout << A::Getcount() << endl;
//	return 0;
//}

//static的作用
//c语言 1、修饰全局变量和全局函数，改变链接属性，只在当前文件可见。2，修饰局部变量，改变生命周期，上面的特性在c++中依旧有用，c++兼容c的这些特性
//c++ 1.修饰成员变量和成员函数，成员变量属于整个类，所有对象共享，不针对某个对象，成员函数没有this指针

//class Sum //计算从1加到n的数值
//{
//public:
//	Sum()
//	{
//		_ret += _i;
//		++_i;
//	}
//	
//	static int Getret()
//	{
//		return _ret;
//	}
//
//private:
//	static int _i;
//	static int _ret;
//};
//
//int Sum::_i = 1;
//int Sum::_ret = 0;
//
//class Solution
//{
//public:
//	int Sum_Solution(int n)
//	{
//		Sum a[n];
//		return Sum::Getret();
//	}
//};


//友元函数
//class Date
//{
//	friend ostream& operator<<(ostream& out, const Date& d);
//	friend istream & operator>>(istream& in, Date& d);
//public:
//	Date(int year=0, int month=0, int day=0)
//		:_year(year)
//		,_month(month)
//		,_day(day)
//	{}
//	
//	/*void operator<<(ostream& out)
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}*/
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
////为了代码的可读性我们不想将，count的位置和d1的位置互换，导致这种现象的原因是this指针，
////为了避免this指针我们考虑将该函数定义在类的外面，但是这样定义后不能访问类成员，为了可以访问成员变量我们可以使用友元函数，
////但是并不代表我们必须使用友元函数，我们可以定义成员函数来访问成员变量
//ostream& operator<<(ostream& out, const Date& d)
//{
//	out << d._year << "/" << d._month << "/" << d._day << endl;
//	return out;
//}
//
//istream& operator>>(istream& in, Date& d)
//{
//	in >> d._year >> d._month >> d._day;
//	return in;
//}
//
//int main()
//{
//	Date d1, d2;
//	//cout << d1; 运算符重载，运算符有几个操作数，函数重载就有几个参数
//	//如果是两个操作数，左操作数是第一个参数，右操作数是第二个参数
//	//operator << 写成成员函数，this指针默认占据了第一个位置，对象就要做左操作数
//	//用起来不符合流的特性，虽然可以用，但是不符合运算符原来的用法和特性
//	/*d1 << cout;*/
//	//cout << d1 << d2;
//	cin >> d1;
//	cout << d1;
//	return 0;
//}
//

//class A
//{
//private:
//	static int k;
//	int h;
//	int b;
//public:
//	A(int a, int b)
//		:h(a)
//		,b(b)
//	{
//
//	}
//	class B//B天生就是A的友元
//	{
//	public:
//		void foo(const A& a = { 100, 10 })
//		{
//			cout << k << endl;
//			cout << a.h << endl;
//		}
//	private:
//		int _b;
//	};
//};
//
//int A::k = 0;
//
//int main()
//{
//	cout << sizeof(A) << endl;//计算A类大小的时候不考虑内部类的大小,B作为A的内部类与普通类没有区别，仅仅是受到类域的限制
//	A::B bb;
//	bb.foo();
//	return 0;
//}


//求1加到n的值
//class  Sum
//{
//private:
//	static int ret;
//	static int i;
//
//	Sum()
//	{
//		ret += i;
//		++i;
//	}
//public:
//	class Solution
//	{
//	public:
//		int solution_sum(int n)
//		{
//			Sum* p = new Sum[n];
//			return ret;
//		}
//	};
//};
//
//int Sum::ret = 0;
//int Sum::i = 1;
//
//int main()
//{
//	Sum::Solution a;
//	cout << a.solution_sum(100) << endl;
//	return 0;
//	
//}

//计算日期转换到天数
#include<iostream>
using namespace std;

//int main()
//{
//	static int daysArray[13] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
//	int year, month, day;
//	cout << "请输入日期:" << endl;
//	cin >> year >> month >> day;
//	int n = daysArray[month - 1] + day;
//	if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
//	{
//		n++;
//	}
//	cout << n << endl;
//	return 0;
//}

//int main()
//{
//	static int daysArray[13] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
//	int year, month, day, n;
//	cin >> year >> n;
//	 month = 1;                                 
//	 int fmonth = 3;
//	while (n < 367)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			if (n > 60)
//			{
//				if (n - (daysArray[fmonth-1] + 1) <= daysArray[fmonth] - daysArray[fmonth-1])
//				{
//					day = n % (daysArray[fmonth-1]+1);
//					month = fmonth;
//					break;
//				}
//				++fmonth;
//			}
//			else
//			{
//				if (n <= 31)
//				{
//					day = n;
//					break;
//				}
//				else
//				{
//					day = n-daysArray[1];
//					month = 2;
//					break;
//				}
//			}
//		}
//		else
//		{
//			int ret = n;
//			if (ret <= daysArray[1])
//			{
//				day = n;
//				break;
//			}
//
//			else if (ret - daysArray[month] <= (daysArray[month + 1] - daysArray[month]))
//			{
//				day = n % daysArray[month];
//			    ++month;
//				break;
//			}
//			month++;
//		}
//		
//	}
//	cout << year << "/" << month << "/" << day << endl;
//	return 0;
//}


class  A
{
public:
	A(int a =0, int b = 0)
		:_a(a)
		,_b(b)
	{
		cout << "A()" << endl;
	}
	
	~A()
	{
		cout << "~A()" << endl;
	}

private:
	int _a; 
	int _b;
};


//int main()
//{
//	int* p1 = (int*)malloc(sizeof(int));
//	free(p1);
//
//	int* p2 = new int;
//	delete p2;
//	//如果动态申请的对象是内置类型，用malloc和new没有什么区别
//	//如果动态申请的对象是自定义类型，有区别: new/delete不仅可以开空间，还可以调用构造函数和析构函数
//
//	A* p3 = (A*)malloc(sizeof(A));
//	free(p3);
//
//	A* p4 = new A(10, 20);//可以在开辟空间的时候，调用默认构造函数进行赋值
//	delete p4;
//	return 0;
//}

struct ListNode
{
	int _val;
	ListNode* _next;

	ListNode(int val)
		:_val(val)
		, _next(nullptr)
	{}
};


int main()
{
	ListNode* n1 = (ListNode*)malloc(sizeof(ListNode));
	n1->_val = 1;
	n1->_next = nullptr;
	
	ListNode* n2 = new ListNode(1);

	//数组
	int* p5 = (int*)malloc(sizeof(int) * 5);
	free(p5);

	int* p6 = new int[5];
	delete[] p6;

	A* p7 = new A[10];//调用十次构造函数
	delete[] p7;
	return 0;
}