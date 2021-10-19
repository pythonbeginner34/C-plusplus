#include<iostream>
#include<stdlib.h>

//c++提出命名空间来解决命名冲突的问题
namespace WJ//定义命名空间域
{
	int rand = 10;

	int Add(int a, int b)
	{
		return a + b;
	}
	struct Node
	{
		struct Node* next;
		int val;
	};
	namespace MY
	{
		int c;
		int d;
		int Sub(int left, int right)
		{
			return left - right;
		}
	}
}

namespace WJ
{
	int ret = 1000;
	//int rand = 1000; //这种行为是不被允许的，不可以在相同的命名空间多次定义变量
}

namespace cpp
{
	int rand = 100;
}

//int main()
//{
//	printf("%p\n", rand);
//	printf("%d\n", cpp::rand);//不同命名空间的变量可以相同
//	printf("%d\n", WJ::ret);//同一个工程中可以使用多个相同名字的命名空间编译器最后会将相同的命名空间合并，但是其中的变量不可以在次定义
//	printf("%d\n", WJ::rand);
//	printf("%d\n", WJ::Add(1, 2));
//	//struct WJ::Node node1;
//	printf("%d\n", WJ::MY::Sub(3, 1));//命名空间可以嵌套使用
//	return 0;
//}

//如何使用命名空间里面的内容
//三种方式使用
//1、全部直接展开到全局
//using namespace WJ;//不建议全部展开，容易造成命名污染
//using namespace std;//std是包含c++标准库的命名空间
//int main()
//{
//
//	printf("%d\n",Add(1, 2));
//	return 0;
//}
//2、访问命名空间内容时，指定命名空间
//int main()
//{
//	std::cout << "hello world" << std::endl;
//	std::cout << "I love MY" << std::endl;
//	std::cout << WJ::Add(1, 2) << std::endl;
//	return 0;
//}

//3、把命名空间中常用的展开
//using WJ::Node;
//using WJ::Add;
//using std::cout;
//using std::endl;
//int main()
//{
//	struct Node node1;
//	Add(1, 2);
//	cout << "I love MY" << endl;
//	return 0;
//}
using namespace std;

//int main()
//{
//	int n;
//	cin >> n;//输入运算符/流提取运算符
//	//int* a = (int*)malloc(sizeof(int) * n);
//	double* a = (double*)malloc(sizeof(double) * n);
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> a[i];//c++可以自动识别类型
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i]<<" ";//输入运算符/流插入运算符
//	}
//	cout << endl;//换行
//	cout << "\n";
//	return 0;
//}

//int main()
//{
//	char ch = 'A';
//	int i = 10;
//	int* p = &i;
//	double d = 1.1111;
//	cout << ch << endl;
//	cout << i << endl;
//	cout << p << endl;
//	cout << d << endl;
//	printf("%.2f", d);
//	return 0;
//}

//void TestFun(int a = 0)//函数缺省参数
//{
//	cout << a << endl;
//}
//
//int main()
//{
//	TestFun(10);//传参数就不使用缺省参数
//	TestFun();//不传参就使用缺省值-相当于TestFun(0);
//	return 0;
//}

//全缺省
//void TestFun(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	cout << "c= " << c << endl;
//	cout << endl;
//}

//半缺省(部分缺省)
void TestFun(int a, int b = 10, int c = 30)//半缺省只能从右往左依次缺省，不能间隔
{
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "c= " << c << endl;
}

//缺省参数不能在声明和定义中同时出现，一般的将缺省参数放在声明中，定义中不放缺省参数
//缺省参数必须是常量或者全局变量
//int main()
//{
//	TestFun(1);
//	TestFun(1, 2);
//	TestFun(1, 2, 3);
//	return 0;
//}

//函数重载
//在同一作用域中，函数名可以相同，但是要求这些函数的形参列表中(参数个数不同或者类型不同或者顺序不同),与返回值无关。
//int Add(int left, int right)
//{
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	return left + right;
//}
//
//long Add(long left, long right)
//{
//	return left + right;
//}
//
//void Swap(int* a, int* b)
//{}
//
//void Swap(double* a, double* b)
//{}

//int main()
//{
//	Add(10, 20);
//	Add(10.0, 20.0);
//	Add(10L, 20L);
//	return 0;
//}

//c++支持函数重载，C语言不支持函数重载因为c++增加了函数修饰规则。
//extern c 作用是在c++的编译器中将C用c的编译方法而不是按照c++修饰规则， 本质是在c++的编译器中使用c实现的（静态库或者动态库）时
//需要使用C语言的“修饰规则”，防止被c++编译时以c++的修饰规则修饰，故需要加上extern c，在c的编译器中也可以使用extern c 将c++写的库用c的编译方法编译
//没有extern c++的写法是因为c++的项目中本身使用的就是c++的修饰规则，而在c的编译器中不支持c++的语法，就算以c++的修饰规则也没有用处
//形参列表相同的函数，不会因为一个有缺省值，另一个没有缺省值，而函数重载。


//函数引用
//引用不是定义一个新的变量，而是给已经存在的变量起一个别名，或者理解为贴一个标签，它不会开辟新的空间，而是和被引用的对象共用同一块内存空间

//int main()
//{
//	int a = 10;
//	int& b = a;
//	int& c = b;
//	c = 20;
//	cout << c << endl;
//	return 0;
//}
//引用在定义时必须初始化
//一个变量可有多个引用
//引用之后不能再变成其他变量的引用

//int main()
//{
//	int a = 10;
//	int& b = a;
//	int c = 20;
//	b = c;//这里的含义是将c的值赋给b而不是让b成为c引用
//}

void Swap1(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void Swap2(int& p1, int& p2)
{
	int temp = p1; 
	p1 = p2;
	p2 = temp;
}

//int main()
//{
//	int x = 0, y = 1;
//	Swap1(&x, &y);
//	cout << x <<" "<< y << endl;
//	Swap2(x, y);
//	cout << x << " " << y << endl;
//
//	int* p1 = &x;
//	int* p2 = &y;
//	int*& p3 = p1;//指针也可以被引用
//	*p3 = 10;
//	p3 = p2;
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	double d = i;
//	//double& r = i;//这种写法是不正确的，这里的i；并不是真正的i而是i的临时变量，临时变量具有常性
//	const double& r = i;
//}

//引用做返回值时，返回值实际上也是要返回数的一份临时变量，故使用引用做返回值时要注意这点
//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	//int& ret = Add(1, 2);
//	const int& ret = Add(1, 2);
//	cout << ret << endl;
//	return 0;
//}

//int& Add(int a, int b)
//{
//	int c = a + b;
//	return c;
//}

//int main()
//{
//	int& ret = Add(1, 2);//这种写法是错误的使用引用没有创建临时变量，当将返回值返回时Add的函数栈帧已经销毁，此时再访问属于非法访问
//	Add(3,4);
//	cout << ret << endl;
//	return 0;
//}
//出了函数作用域，返回值不被销毁，就可以用引用返回
//出了函数作用域，返回值被销毁，就不可以用引用返回

//内联函数
//用inline来修饰，编译时c++编译器会在调用内联函数的地方展开，没有函数调用建立栈帧的开销，提升运行效率
//对于频繁调用的函数进行优化，用法不变，不建立栈帧：c语言可以使用宏， 而c++可以使用const， enum，内联函数代替宏

//在调用的地方展开，没有建立调用函数栈帧的开销
inline int Add(int x, int y)
{
	return x + y;
}
//内联函数适应于代码较少的函数，有循环递归的函数不宜使用，长的函数展开会引起代码膨胀--编译出来可执行程序变大
//inline对编译器来说只是一个建议，编译器会自动优化，不一定会使用内联函数
//inline不建议生命和定义分离，会导致错误，声明代表告诉编译器要使用内联函数，于是在使用内联函数的地方编译器默认函数已经展开，没有调用函数栈帧，没有函数地址，导致链接出现问题

//int main()
//{
//	int a = 1;
//	char b = 'a';
//	//通过右边赋值类型推出左边变量的类型，当类型复杂，太长，autot可以用来简化代码，牺牲了代码的可读性
//	auto c = a;
//	auto d = b;
//	//可以去看变量的实际类型
//	cout << typeid(c).name() << endl;
//	return 0;
//}

//int main()
//{
//	int x = 10;
//	auto a = &x;
//	auto* b = &x;
//	auto& c = x;
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	return 0;
//}
//在同一行，定义多个变量时，变量类型必须相同
//auto不能用作函数参数
//auto不能用来声明数组

//范围for
//void TestFor()
//{
//	int array[] = { 1,2,3,4,5 };
//	for (auto e : array)//取数组中的每个值赋值给e
//	{
//		e *= 2;//e只是拷贝，它乘2并不影响array数组中的值,出了作用域就会销毁
//	}
//
//	for (auto& e : array)//使用引用使e变为数组中每个元素的别名
//	{
//		e *= 2;
//	}
//
//	for (auto e : array)//自动取数组中的值赋给e，自动判断结束 
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	TestFor();
//	return 0;
//}

//void TestArrayFor(int array[])
//{
//	//这种方法是错误的，此时的array已经退化成指针，不代表数组了。
//	for (auto e : array)
//	{
//		cout << e << endl;
//	}
//}
//
//int main()
//{
//	TestArrayFor(array);
//}

//int main()
//{
//	int* p1 = NULL;
//	//推荐使用nullptr初始化空指针变量
//	int* p2 = nullptr;
//	return 0;
//}

//void f(int)
//{
//	cout << "f(int)" << endl;
//}
//
//void f(int*)
//{
//	cout << "f(int*)" << endl;
//}
//
//int main()
//{
//	//在c++中NULL被定义成宏#define NULL 0
//	int* p1 = NULL;
//	int* p2 = 0;
//	int x = 0;
//	f(0);
//	f(NULL);
//	f(nullptr);
//}

//定义类的时候一般使用class
//如果全部成员都是公有的话，可以使用struct

struct QueueNode
{
	QueueNode* next;
	int val;
};

//class Queue
//{
//public:
//	void Init();//将声明放在类中，生命和定义分离
//	void push(int x);
//	void Pop();
//private:
//	QueueNode* head;
//	QueueNode* tail;
//};
//
//void Queue::Init()//在类域外面定义的函数要加上域作用限定符
//{}
//
//void Queue::push(int x)
//{}
//
//void Queue::Pop()
//{}
//
//int main()
//{
//	Queue qu;
//	qu.Init();
//}

//也可以将声明和定义都放到类中
//成员函数如果放在类的内部定义，编译器可能会将其当成内联函数处理
//规范的做法是短小的函数直接在类里面定义，直接定义成内联函数，长的函数声明和定义分离
class Queue
{
public:
	void Init()
	{}
	void push(int x)
	{}
	void Pop()
	{}
private:
	QueueNode* head;
	QueueNode* tail;
};

//int main()
//{
//	Queue qu;
//	qu.Init();
//	return 0;
//}
//计算类型大小，或者类对象，只考虑成员变量，因为对象中只存在成员变量，没有成员函数
//int main()
//{
//	Queue q1;
//	q1.Init();
//	q1.push(1);
//	q1.push(2);
//	q1.push(3);
//	Queue q2;
//	q2.Init();
//	q2.push(1);
//	q2.push(2);
//	cout << sizeof(q1) << endl;
//	cout << sizeof(q2) << endl;
//	return 0;
//}

//class A
//{
//public:
//	void Print()
//	{}
//private:
//	int i;
//	char ch;
//};
//
////没有成员变量的类
//class B
//{
//public:
//	void Print()
//	{}
//};
//
////空类
//class C
//{};
//
//int main()
//{
//	cout << sizeof(A) << endl;
//	cout << sizeof(B) << endl;
//	cout << sizeof(C) << endl;//如果一个类没有成员需要给一字节占位，标标识对象存在，这一字节不存储有效数据
//	return 0;
//}

//this指针
//class Date
//{
//public:
//	void Display()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	//void SetDate(Date* this, int year, int month, int day)
//	void SetDate(int year, int month, int day)
//	{
//		_year = year;   //this->_year = year;
//		_month = month; //this->_month = month;
//		_day = day;		//this->_day = day;
//		//对象可以调用成员函数，成员函数还可以调用成员函数
//		//以为有this指针
//		Display();  //this->Display();
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};

//class A
//{
//public:
//	void Show()
//	{
//		cout << "Show()" << endl;
//	}
//	void Print()
//	{
//		cout << _a << endl;
//	}
//private:
//	int _a;
//};

//int main()
//{
//	//Date d1;
//	//Date d2;
//	//d1.SetDate(2021, 10, 8);//d1.SetDate(&d1, 2021, 10, 8);
//	////d1.Display();
//	//d2.SetDate(2022, 10, 8);//d2.SetDate(&d2, 2022, 10, 8);
//	////d2.Display();
//	A* p = nullptr;
//	//p->Show();//成员函数的地址不在对象中存储，存在公共代码段，故函数的调用与p指针无关，这里p指针调用show函数只是一个形式，
//	//p指针会传递给show函数做隐藏的this指针，但是show函数中并没有使用p指针，也就不存在空指针的解引用
//	p->Print();//this->_a 将p传给p，对空指针解引用，程序崩溃
//	return 0;
//}
//this指针存在栈区

//构造函数

//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	Date()
//	{
//		_year = 0;
//		_month = 1;
//		_day = 1;
//	}
//
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	Date(int year)
//	{
//		_year = year;
//		_month = 6;
//		_day = 10;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//class Stack
//{
//public:
//	void Init()
//	{
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//
//	Stack()
//	{
//		_a = nullptr;
//		_capacity = _top = 0;
//	}
//	Stack(int capacity)
//	{
//		_a = (int*)malloc(sizeof(int)*capacity);
//		if (_a == nullptr)
//		{
//			cout << "malloc fail" << endl;
//			exit(-1);
//		}
//		_top = 0;
//		_capacity = capacity;
//	}
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//int main()
//{
//	//经常忘记初始化
//	//可不可以对象调用出来就初始化 -- 构造函数
//	//构造函数并不是去开辟空间而是初始化对象
//	//1.构造函数名和类名相同, 2,无返回值，3，对象实例化时编译器自动调用对映的构造函数 4，构造函数可以重载
//	Date d1;//无参数的构造函数，创建实例
//	Date d2(2001, 6, 10);//有参数的构造函数，创建实例
//	Date(2001);
//	//d1.Init(2021, 10, 17);
//	Stack s1;
//	Stack s2(10);
//	//s1.Init();
//	return 0;
//}

//如果类中没有显式定义构造函数，则c++编译器会自动生成一个无参的默认构造函数，一旦用户显式定义，编译器将不再生成

//class A
//{
//public:
//	//A()
//	//{
//	//	_a1 = 0;
//	//	_a2 = 1;
//	//	cout << "A()" << endl;
//	//}
//	
//private:
//	int _a1 = 0;
//	int _a2 = 0;
//	
//};
//class Date
//	{
//	public:
//		/*Date()
//		{
//			_year = 0;
//			_month = 1;
//			_day = 1;
//		}
//	
//		Date(int year, int month, int day)
//		{
//			_year = year;
//			_month = month;
//			_day = day;
//		}
//	
//		Date(int year)
//		{
//			_year = year;
//			_month = 6;
//			_day = 10;
//		}*/
//
//		void Print()
//		{
//			cout << _year<<"." << _month<<"." << _day;
//		}
//	
//	private:
//		//我们不写构造函数，默认器默认生成的构造函数，该类内中的内置类型不会初始化，该类中的自定义类型struct/class会调用他的构造类型初始化，
//		// 如果该类型没有构造函数，编译器默认生成的构造函数不会初始化其内置函数。
//		//内置类型/基本类型
//		int _year = 0;
//		int _month = 1;//这里并不是成员变量的定义，这里只是一个缺省值，一般这种写法用在没有构造函数时使用，有构造函数可以不使用缺省值
//		int _day = 1;
//		A _aa;//自定义类型，它被它自己的构造函数初始化，如果没有构造函数，编译器默认生成构造函数值不初始化其内置函数，其自定义函数调用自己的无参的构造函数，以此类推。
//	};
//
//int main()
//{
//	Date d1;//只要我们写了构造函数，编译器就不会默认生成构造函数，不管我们写的是否匹配
//	d1.Print();
//	return 0;
//}
//	

//class Date
//{
//public:
//	//本来是构成函数重载的
//	//但是他们两个不能同时存在，因为缺省函数可以不传参数，无参的构造函数也可以不传参数，
//	//这样会造成歧义导致自动初始化时不知道使用哪一个来初始化，故无参的构造函数和全省的构造函数不能同时存在
//	Date()
//	{
//		_year = 0;
//		_month = 1;
//		_day = 1;
//	}
//
//	/*Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}*/
//
//	void Print()
//	{
//		cout << _year << "." << _month << "." << _day;
//	}
//
//private:
//	int _year = 0;
//	int _month = 1;
//	int _day = 1;
//	A _aa;
//};
////注：无参构造函数，全缺省构造函数，和编译器默认生成的都可以叫做默认构造函数
////一般情况下，推荐使用全缺省的默认构造函数。
//int main()
//{
//	Date d1;//只要我们写了构造函数，编译器就不会默认生成构造函数，不管我们写的是否匹配
//	d1.Print();
//	return 0;
//}

//class Date
//{
//public:
//	//Date(int year)
//	//{
//	//	//这里的两个year都是函数形参，依据局部优先原则，编译器将year认为是形参变量，故该式代表的意思为形参付给形参，与成员变量无关，相当于成员变量并没有被初始化。
//	//	year = year;
//	//}
//	//如果形参的名字和成员变量相同可以使用this指针指向成员变量
//	//最好成员名和函数形参不要相同
//	Date(int year)
//	{
//		this->year = year;
//	}
//private:
//	int year;
//};
//
//int main()
//{
//	Date d1(1);
//	return 0;
//}

//析构函数-对象在销毁时会自动调用析构函数，完成一些特殊的资源清理函数工作。
//析构函数名实是在类名前加上~
//一个类有且只有一个析构函数，若未显示定义，系统自动生成默认的析构函数， 对象生命周期结束时，c++编译器会自东调用析构函数

//class Date
//	{
//	public:
//		Date()
//		{
//			_year = 0;
//			_month = 1;
//			_day = 1;
//		}
//	
//		Date(int year, int month, int day)
//		{
//			_year = year;
//			_month = month;
//			_day = day;
//		}
//	
//		/*Date(int year)
//		{
//			_year = year;
//			_month = 6;
//			_day = 10;
//		}*/
//		
//		//像日期这样的类是不需要清理资源的，故这样的函数是不需要析构函数的
//		~Date()
//		{
//			cout << "~Date()" << endl;
//		}
//
//		void Print()
//		{
//			cout << _year<<"." << _month<<"." << _day;
//		}
//	
//	private:
//		int _year;
//		int _month;
//		int _day;
//	};
//
//int main()
//{
//	Date d1;
//	return 0;
//}

//class Stack
//{
//public:
//	Stack(int capacity = 10)
//	{
//		_a = (int*)malloc(sizeof(int) * capacity);
//		_top = 0;
//		_capacity = capacity;
//	}
//	~Stack()
//	{
//		//像stack这样的类需要析构函数
//		free(_a);
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//	//和构造函数相识我们不写，内置类型不处理，自定义类型会去调用它的析构函数
//
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};

//int main()
//{
//	Stack st;
//	return 0;
//}
  
//这种情况下编译器默认生成的构造函数和析构函数就很有用处
//class MyQueue
//{
//private:
//	Stack _PushST;
//	Stack _PopST;
//};
//
//int main()
//{
//	MyQueue mq;
//	return 0;
//}


//拷贝构造函数
//class Date
//	{
//	public:
//		Date(int year = 1, int month = 1, int day = 1)
//		{
//			_year = year;
//			_month = month;
//			_day = day;
//		}
//	
//		/*date(int year)
//		{
//			_year = year;
//			_month = 6;
//			_day = 10;
//		}*/
//		/*
//		~Date()
//		{
//			cout << "~date()" << endl;
//		}*/
//
//		//拷贝构造
//		//Date d3(d2)当把d2传给形参，需要先创建一个临时变量拷贝d2后将拷贝值赋给d，再进行拷贝时有相当于进行了一次的拷贝构造，这样下去将会无穷递归下去，故使用引用解决这种情况
//		//如果引用不是做输出型参数，最好用const& 做保护
//		Date(const Date& d)
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//
//		//使用指针外代替拷贝构造也是可以的，不过没有拷贝构造方便
//		Date(Date* p)
//		{
//			_year = p->_year;
//			_month = p->_month;
//			_day = p->_day;
//		}
//
//		void print()
//		{
//			cout << _year<<"." << _month<<"." << _day;
//			cout << endl;
//		}
//	
//	private:
//		int _year;
//		int _month;
//		int _day;
//};
//
//int main()
//{
//	Date d1;
//	Date d2(2001, 6, 10);
//	d1.print();
//	d2.print();
//	//拷贝复制出一个d2对象来
//	Date d3(d2);
//	d3.print();
//	Date d4(&d2);
//	d4.print();
//	return 0;
//}

//若未显示定义，系统生成默认的拷贝函数，默认拷贝构造函数对象按内存存储字节序完成拷贝，这种拷贝被称为浅拷贝，或者值拷贝
//我们不写，编译器默认生成的拷贝构造，跟拷贝构造和析构函数又不太一样，不会去区分内置类型和自定义类型，都会去处理
//内置类型-按字节序进行浅拷贝
//自定义类型会去调用它的拷贝构造

//class A
//{
//	public:
//		A()
//		{}
//
//		A(const A& a)
//		{
//			cout << "A()" << endl;
//		}
//};
//
//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	/*date(int year)
//	{
//		_year = year;
//		_month = 6;
//		_day = 10;
//	}*/
//	/*
//	~Date()
//	{
//		cout << "~date()" << endl;
//	}*/
//
//	//Date(const Date& d)
//	//{
//	//	_year = d._year;
//	//	_month = d._month;
//	//	_day = d._day;
//	//}
//
//
//	void print()
//	{
//		cout << _year << "." << _month << "." << _day;
//		cout << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//	A _aa;
//};
//
//int main()
//{
//	Date d1;
//	Date d2(d1);
//	d2.print();
//	return 0;
//}

//class Stack
//{
//public:
//	Stack(int capacity = 10)
//	{
//		_a = (int*)malloc(sizeof(int) * capacity);
//		_top = 0;
//		_capacity = capacity;
//	}
//	~Stack()
//	{
//		//像stack这样的类需要析构函数
//		free(_a);
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//	//和构造函数相似我们不写，内置类型不处理，自定义类型会去调用它的析构函数
//
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//int main()
//{
//	Stack st1;
//	Stack st2(st1); //没有拷贝构造函数编译器默认，内置类型完成浅拷贝，拷贝完后st1和st2中的a指针指向同一块空间，
//	//程序结束后调自动调用析构函数，先析构st2中的a指针，在析构st2，导致一块空间释放了两次，导致程序崩溃
//	return 0;
//}

//运算符重载
#include<iostream>

//class A
//{
//public:
//	A& operator=(const A& a)
//	{
//		cout << "A()" << endl;
//		return *this;
//	}
//};
//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	bool operator == (const Date& x2)//为了防止发生拷贝构造，做使用引用
//	{
//		return _year == x2._year
//			&& _month == x2._month
//			&& _day == x2._day;
//	}
//
//	bool operator < (const Date& x)
//	{
//		if (_year < x._year)
//		{
//			return true;
//		}
//		else if (_year == x._year && _month < x._month)
//		{
//			return true;
//		}
//		else if (_year == x._year && _month == x._month && _day < x._day)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//	Date(const Date& x)
//	{
//		_year = x._year;
//		_month = x._month;
//		_day = x._day;
//		cout << "Date()" << endl;
//	}
//
//	//Date operator=(const Date x)//不使用引用进行传参，传递返回，会调用拷贝构造
//	//{
//	//	_year = x._year;
//	//	_month = x._month;
//	//	_day = x._day;
//	//	return *this;
//	//}
//
//	//如果我们不写赋值重载编译器会默认生成赋值重载
//	//内置类型成员会完成值拷贝，自定义类型成员会去调用它的赋值重载
//	//Date& operator=(const Date& x)//运用Date& 防止拷贝传参的发生
//	//{
//	//	if (this != &x)
//	//	{
//	//		_year = x._year;
//	//		_month = x._month;
//	//		_day = x._day;
//	//		return *this;//相当返回赋值运算符的第一个操作数，这样可以进行连续赋值
//	//	}
//	//}
//
//	void Print()
//	{
//		cout << _year << "." << _month << "." << _day << endl;
//	}
//private:
//
//	int _year;
//	int _month;
//	int _day;
//	A _aa;
//};

//函数：operator 运算符
//参数： 操作符的操作数有几个就有几个参数，参数类型：你要操作的对象的类型, 返回值：看运算符运算后的返回值是什么
//运算符重载可以写成全局的，但是面临访问私有问题
//bool operator == (const Date& x1, const Date& x2)//为了防止发生拷贝构造，做使用引用
//{
//	return x1._year == x2._year
//		&& x1._month == x2._month
//		&& x1._day == x2._day;
//}
//


//int main(void)
//{
//	Date d1(2021, 10, 19);
//	Date d2(2021, 11, 11);
//	Date d3(2021, 11, 11);
//	//运算符默认都是给内置类型使用，自定义类型
//	//自定义类型如果想要使用需要，自己进行运算符重载（写一个函数定义运算符的行为）
//	/*operator == (d1, d2);*///可以这样写但是可读性太差
//	//d1 == d2;//d1.operator==(d2);//当将运算符重载定义成全局时，不可以访问私有，故将运算符重载放到类里面，此时，要注意传参时，编译器会使用this指针
//	//cout << (d1 == d2) << endl;//加上括号，<<优先级比==要高
//	//cout << (d1 < d2) << endl;
//	//cout << (d1 < d3) << endl;
//	//赋值运算符重载，用于两个已经定义出来的对象间拷贝复制
//	//d1 = d3;
//	//d1 = d2 = d3;
//	d1.Print();
//	//d3.Print();
//	//拷贝构造，用于创建在对象时创建一个已经存在的对象的拷贝
//	//Date d4(d3);
//	//Date d5 = d3;//拷贝构造，创建新的对象的拷贝都是拷贝构造
//	//d4.Print();
//	//d5.Print();
//	d1 = d2;
//	d1.Print();//没有赋值重载函数编译器默认生成的赋值重载函数，对自定义类型完成浅拷贝
//	return 0;
//}
//不能连接其他符号来创建新的操作符：比如operator@
//重载操作符必须有一个类类型或者枚举类型的操作数
//不能改变运算符原来的含义
//作为类的成员函数时，其形参看起来比操作数目少1，作为成员函数的运算符重载中有以么默认的this指针限定为第一个参数如果为双目运算符则为左侧的哪一个
//.*, ::, sizeof, ?:, . 这五个运算符不可以进行函数重载
#include<assert.h>
class Date
{
public:

	int GetMonthDay(int year, int month)//获取某您某月的天数
	{
		assert(month > 0 && month < 13);
		static int Month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31 };//将其定义在静态区，避免每次调用函数都会，创建数组
		if (month == 2 && year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			return 29;
		}
		else
		{
			return Month[month];
		}	
	}

	Date(int year = 0, int month = 1,int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;

		//判断是否合法
		if(_year < 0 
			|| _month <= 0 || _month >= 13
			|| _day <= 0 || _day > GetMonthDay(_year, _month))
		{
			cout << _year << "/" << _month << "/" << _day << "->";
			cout << "这是一个非法日期" << endl;
		}
	}

	void Print()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}

	Date operator+(int day)
	{
		Date tmp(*this);
		tmp._day += day;
		while (tmp._day > GetMonthDay(tmp._year,tmp. _month))
		{
			tmp._day -= GetMonthDay(tmp._year, tmp._month);
			tmp._month++;
			if (tmp._month > 12)
			{
				tmp._year++;
				tmp._month = 1;
			}
		}
		return tmp;
	}

	Date& operator+=(int day)
	{
		_day += day;
		while (_day > GetMonthDay(_year, _month))
		{
			_day -= GetMonthDay(_year, _month);
			++_month;
			if (_month > 12)
			{
				_year++;
				_month = 1;
			}
		}
		return *this;
	}
private: 
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1(2021, 10, 19);
	d1.Print();
	//Date d2(2021, 2, 29);
	//Date d3(2022, 2, 29);
	//Date d4(2020, 13, 29);
	//d2.Print();
	//d3.Print();
	//d4.Print();
	Date ret = d1 + 100;
	ret.Print();
	d1.Print();

	Date tmp = d1 += 100;
	tmp.Print();
	d1.Print();
	return 0;
}


