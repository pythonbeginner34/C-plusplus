#include<iostream>
#include<stdlib.h>

//c++��������ռ������������ͻ������
namespace WJ//���������ռ���
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
	//int rand = 1000; //������Ϊ�ǲ�������ģ�����������ͬ�������ռ��ζ������
}

namespace cpp
{
	int rand = 100;
}

//int main()
//{
//	printf("%p\n", rand);
//	printf("%d\n", cpp::rand);//��ͬ�����ռ�ı���������ͬ
//	printf("%d\n", WJ::ret);//ͬһ�������п���ʹ�ö����ͬ���ֵ������ռ���������Ὣ��ͬ�������ռ�ϲ����������еı����������ڴζ���
//	printf("%d\n", WJ::rand);
//	printf("%d\n", WJ::Add(1, 2));
//	//struct WJ::Node node1;
//	printf("%d\n", WJ::MY::Sub(3, 1));//�����ռ����Ƕ��ʹ��
//	return 0;
//}

//���ʹ�������ռ����������
//���ַ�ʽʹ��
//1��ȫ��ֱ��չ����ȫ��
//using namespace WJ;//������ȫ��չ�����������������Ⱦ
//using namespace std;//std�ǰ���c++��׼��������ռ�
//int main()
//{
//
//	printf("%d\n",Add(1, 2));
//	return 0;
//}
//2�����������ռ�����ʱ��ָ�������ռ�
//int main()
//{
//	std::cout << "hello world" << std::endl;
//	std::cout << "I love MY" << std::endl;
//	std::cout << WJ::Add(1, 2) << std::endl;
//	return 0;
//}

//3���������ռ��г��õ�չ��
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
//	cin >> n;//���������/����ȡ�����
//	//int* a = (int*)malloc(sizeof(int) * n);
//	double* a = (double*)malloc(sizeof(double) * n);
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> a[i];//c++�����Զ�ʶ������
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i]<<" ";//���������/�����������
//	}
//	cout << endl;//����
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

//void TestFun(int a = 0)//����ȱʡ����
//{
//	cout << a << endl;
//}
//
//int main()
//{
//	TestFun(10);//�������Ͳ�ʹ��ȱʡ����
//	TestFun();//�����ξ�ʹ��ȱʡֵ-�൱��TestFun(0);
//	return 0;
//}

//ȫȱʡ
//void TestFun(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	cout << "c= " << c << endl;
//	cout << endl;
//}

//��ȱʡ(����ȱʡ)
void TestFun(int a, int b = 10, int c = 30)//��ȱʡֻ�ܴ�����������ȱʡ�����ܼ��
{
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "c= " << c << endl;
}

//ȱʡ���������������Ͷ�����ͬʱ���֣�һ��Ľ�ȱʡ�������������У������в���ȱʡ����
//ȱʡ���������ǳ�������ȫ�ֱ���
//int main()
//{
//	TestFun(1);
//	TestFun(1, 2);
//	TestFun(1, 2, 3);
//	return 0;
//}

//��������
//��ͬһ�������У�������������ͬ������Ҫ����Щ�������β��б���(����������ͬ�������Ͳ�ͬ����˳��ͬ),�뷵��ֵ�޹ء�
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

//c++֧�ֺ������أ�C���Բ�֧�ֺ���������Ϊc++�����˺������ι���
//extern c ��������c++�ı������н�C��c�ı��뷽�������ǰ���c++���ι��� ��������c++�ı�������ʹ��cʵ�ֵģ���̬����߶�̬�⣩ʱ
//��Ҫʹ��C���Եġ����ι��򡱣���ֹ��c++����ʱ��c++�����ι������Σ�����Ҫ����extern c����c�ı�������Ҳ����ʹ��extern c ��c++д�Ŀ���c�ı��뷽������
//û��extern c++��д������Ϊc++����Ŀ�б���ʹ�õľ���c++�����ι��򣬶���c�ı������в�֧��c++���﷨��������c++�����ι���Ҳû���ô�
//�β��б���ͬ�ĺ�����������Ϊһ����ȱʡֵ����һ��û��ȱʡֵ�����������ء�


//��������
//���ò��Ƕ���һ���µı��������Ǹ��Ѿ����ڵı�����һ���������������Ϊ��һ����ǩ�������Ὺ���µĿռ䣬���Ǻͱ����õĶ�����ͬһ���ڴ�ռ�

//int main()
//{
//	int a = 10;
//	int& b = a;
//	int& c = b;
//	c = 20;
//	cout << c << endl;
//	return 0;
//}
//�����ڶ���ʱ�����ʼ��
//һ���������ж������
//����֮�����ٱ����������������

//int main()
//{
//	int a = 10;
//	int& b = a;
//	int c = 20;
//	b = c;//����ĺ����ǽ�c��ֵ����b��������b��Ϊc����
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
//	int*& p3 = p1;//ָ��Ҳ���Ա�����
//	*p3 = 10;
//	p3 = p2;
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	double d = i;
//	//double& r = i;//����д���ǲ���ȷ�ģ������i��������������i����i����ʱ��������ʱ�������г���
//	const double& r = i;
//}

//����������ֵʱ������ֵʵ����Ҳ��Ҫ��������һ����ʱ��������ʹ������������ֵʱҪע�����
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
//	int& ret = Add(1, 2);//����д���Ǵ����ʹ������û�д�����ʱ��������������ֵ����ʱAdd�ĺ���ջ֡�Ѿ����٣���ʱ�ٷ������ڷǷ�����
//	Add(3,4);
//	cout << ret << endl;
//	return 0;
//}
//���˺��������򣬷���ֵ�������٣��Ϳ��������÷���
//���˺��������򣬷���ֵ�����٣��Ͳ����������÷���

//��������
//��inline�����Σ�����ʱc++���������ڵ������������ĵط�չ����û�к������ý���ջ֡�Ŀ�������������Ч��
//����Ƶ�����õĺ��������Ż����÷����䣬������ջ֡��c���Կ���ʹ�ú꣬ ��c++����ʹ��const�� enum���������������

//�ڵ��õĵط�չ����û�н������ú���ջ֡�Ŀ���
inline int Add(int x, int y)
{
	return x + y;
}
//����������Ӧ�ڴ�����ٵĺ�������ѭ���ݹ�ĺ�������ʹ�ã����ĺ���չ���������������--���������ִ�г�����
//inline�Ա�������˵ֻ��һ�����飬���������Զ��Ż�����һ����ʹ����������
//inline�����������Ͷ�����룬�ᵼ�´�������������߱�����Ҫʹ������������������ʹ�����������ĵط�������Ĭ�Ϻ����Ѿ�չ����û�е��ú���ջ֡��û�к�����ַ���������ӳ�������

//int main()
//{
//	int a = 1;
//	char b = 'a';
//	//ͨ���ұ߸�ֵ�����Ƴ���߱��������ͣ������͸��ӣ�̫����autot���������򻯴��룬�����˴���Ŀɶ���
//	auto c = a;
//	auto d = b;
//	//����ȥ��������ʵ������
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
//��ͬһ�У�����������ʱ���������ͱ�����ͬ
//auto����������������
//auto����������������

//��Χfor
//void TestFor()
//{
//	int array[] = { 1,2,3,4,5 };
//	for (auto e : array)//ȡ�����е�ÿ��ֵ��ֵ��e
//	{
//		e *= 2;//eֻ�ǿ���������2����Ӱ��array�����е�ֵ,����������ͻ�����
//	}
//
//	for (auto& e : array)//ʹ������ʹe��Ϊ������ÿ��Ԫ�صı���
//	{
//		e *= 2;
//	}
//
//	for (auto e : array)//�Զ�ȡ�����е�ֵ����e���Զ��жϽ��� 
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
//	//���ַ����Ǵ���ģ���ʱ��array�Ѿ��˻���ָ�룬�����������ˡ�
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
//	//�Ƽ�ʹ��nullptr��ʼ����ָ�����
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
//	//��c++��NULL������ɺ�#define NULL 0
//	int* p1 = NULL;
//	int* p2 = 0;
//	int x = 0;
//	f(0);
//	f(NULL);
//	f(nullptr);
//}

//�������ʱ��һ��ʹ��class
//���ȫ����Ա���ǹ��еĻ�������ʹ��struct

struct QueueNode
{
	QueueNode* next;
	int val;
};

//class Queue
//{
//public:
//	void Init();//�������������У������Ͷ������
//	void push(int x);
//	void Pop();
//private:
//	QueueNode* head;
//	QueueNode* tail;
//};
//
//void Queue::Init()//���������涨��ĺ���Ҫ�����������޶���
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

//Ҳ���Խ������Ͷ��嶼�ŵ�����
//��Ա���������������ڲ����壬���������ܻὫ�䵱��������������
//�淶�������Ƕ�С�ĺ���ֱ���������涨�壬ֱ�Ӷ�����������������ĺ��������Ͷ������
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
//�������ʹ�С�����������ֻ���ǳ�Ա��������Ϊ������ֻ���ڳ�Ա������û�г�Ա����
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
////û�г�Ա��������
//class B
//{
//public:
//	void Print()
//	{}
//};
//
////����
//class C
//{};
//
//int main()
//{
//	cout << sizeof(A) << endl;
//	cout << sizeof(B) << endl;
//	cout << sizeof(C) << endl;//���һ����û�г�Ա��Ҫ��һ�ֽ�ռλ�����ʶ������ڣ���һ�ֽڲ��洢��Ч����
//	return 0;
//}

//thisָ��
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
//		//������Ե��ó�Ա��������Ա���������Ե��ó�Ա����
//		//��Ϊ��thisָ��
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
//	//p->Show();//��Ա�����ĵ�ַ���ڶ����д洢�����ڹ�������Σ��ʺ����ĵ�����pָ���޹أ�����pָ�����show����ֻ��һ����ʽ��
//	//pָ��ᴫ�ݸ�show���������ص�thisָ�룬����show�����в�û��ʹ��pָ�룬Ҳ�Ͳ����ڿ�ָ��Ľ�����
//	p->Print();//this->_a ��p����p���Կ�ָ������ã��������
//	return 0;
//}
//thisָ�����ջ��

//���캯��

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
//	//�������ǳ�ʼ��
//	//�ɲ����Զ�����ó����ͳ�ʼ�� -- ���캯��
//	//���캯��������ȥ���ٿռ���ǳ�ʼ������
//	//1.���캯������������ͬ, 2,�޷���ֵ��3������ʵ����ʱ�������Զ����ö�ӳ�Ĺ��캯�� 4�����캯����������
//	Date d1;//�޲����Ĺ��캯��������ʵ��
//	Date d2(2001, 6, 10);//�в����Ĺ��캯��������ʵ��
//	Date(2001);
//	//d1.Init(2021, 10, 17);
//	Stack s1;
//	Stack s2(10);
//	//s1.Init();
//	return 0;
//}

//�������û����ʽ���幹�캯������c++���������Զ�����һ���޲ε�Ĭ�Ϲ��캯����һ���û���ʽ���壬����������������

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
//		//���ǲ�д���캯����Ĭ����Ĭ�����ɵĹ��캯�����������е��������Ͳ����ʼ���������е��Զ�������struct/class��������Ĺ������ͳ�ʼ����
//		// ���������û�й��캯����������Ĭ�����ɵĹ��캯�������ʼ�������ú�����
//		//��������/��������
//		int _year = 0;
//		int _month = 1;//���ﲢ���ǳ�Ա�����Ķ��壬����ֻ��һ��ȱʡֵ��һ������д������û�й��캯��ʱʹ�ã��й��캯�����Բ�ʹ��ȱʡֵ
//		int _day = 1;
//		A _aa;//�Զ������ͣ��������Լ��Ĺ��캯����ʼ�������û�й��캯����������Ĭ�����ɹ��캯��ֵ����ʼ�������ú��������Զ��庯�������Լ����޲εĹ��캯�����Դ����ơ�
//	};
//
//int main()
//{
//	Date d1;//ֻҪ����д�˹��캯�����������Ͳ���Ĭ�����ɹ��캯������������д���Ƿ�ƥ��
//	d1.Print();
//	return 0;
//}
//	

//class Date
//{
//public:
//	//�����ǹ��ɺ������ص�
//	//����������������ͬʱ���ڣ���Ϊȱʡ�������Բ����������޲εĹ��캯��Ҳ���Բ���������
//	//������������嵼���Զ���ʼ��ʱ��֪��ʹ����һ������ʼ�������޲εĹ��캯����ȫʡ�Ĺ��캯������ͬʱ����
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
////ע���޲ι��캯����ȫȱʡ���캯�����ͱ�����Ĭ�����ɵĶ����Խ���Ĭ�Ϲ��캯��
////һ������£��Ƽ�ʹ��ȫȱʡ��Ĭ�Ϲ��캯����
//int main()
//{
//	Date d1;//ֻҪ����д�˹��캯�����������Ͳ���Ĭ�����ɹ��캯������������д���Ƿ�ƥ��
//	d1.Print();
//	return 0;
//}

//class Date
//{
//public:
//	//Date(int year)
//	//{
//	//	//���������year���Ǻ����βΣ����ݾֲ�����ԭ�򣬱�������year��Ϊ���βα������ʸ�ʽ�������˼Ϊ�βθ����βΣ����Ա�����޹أ��൱�ڳ�Ա������û�б���ʼ����
//	//	year = year;
//	//}
//	//����βε����ֺͳ�Ա������ͬ����ʹ��thisָ��ָ���Ա����
//	//��ó�Ա���ͺ����ββ�Ҫ��ͬ
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

//��������-����������ʱ���Զ������������������һЩ�������Դ������������
//����������ʵ��������ǰ����~
//һ��������ֻ��һ��������������δ��ʾ���壬ϵͳ�Զ�����Ĭ�ϵ����������� �����������ڽ���ʱ��c++���������Զ�������������

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
//		//���������������ǲ���Ҫ������Դ�ģ��������ĺ����ǲ���Ҫ����������
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
//		//��stack����������Ҫ��������
//		free(_a);
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//	//�͹��캯����ʶ���ǲ�д���������Ͳ������Զ������ͻ�ȥ����������������
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
  
//��������±�����Ĭ�����ɵĹ��캯�������������ͺ����ô�
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


//�������캯��
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
//		//��������
//		//Date d3(d2)����d2�����βΣ���Ҫ�ȴ���һ����ʱ��������d2�󽫿���ֵ����d���ٽ��п���ʱ���൱�ڽ�����һ�εĿ������죬������ȥ��������ݹ���ȥ����ʹ�����ý���������
//		//������ò���������Ͳ����������const& ������
//		Date(const Date& d)
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//
//		//ʹ��ָ������濽������Ҳ�ǿ��Եģ�����û�п������췽��
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
//	//�������Ƴ�һ��d2������
//	Date d3(d2);
//	d3.print();
//	Date d4(&d2);
//	d4.print();
//	return 0;
//}

//��δ��ʾ���壬ϵͳ����Ĭ�ϵĿ���������Ĭ�Ͽ������캯�������ڴ�洢�ֽ�����ɿ��������ֿ�������Ϊǳ����������ֵ����
//���ǲ�д��������Ĭ�����ɵĿ������죬��������������������ֲ�̫һ��������ȥ�����������ͺ��Զ������ͣ�����ȥ����
//��������-���ֽ������ǳ����
//�Զ������ͻ�ȥ�������Ŀ�������

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
//		//��stack����������Ҫ��������
//		free(_a);
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//	//�͹��캯���������ǲ�д���������Ͳ������Զ������ͻ�ȥ����������������
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
//	Stack st2(st1); //û�п������캯��������Ĭ�ϣ������������ǳ�������������st1��st2�е�aָ��ָ��ͬһ��ռ䣬
//	//�����������Զ���������������������st2�е�aָ�룬������st2������һ��ռ��ͷ������Σ����³������
//	return 0;
//}

//���������
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
//	bool operator == (const Date& x2)//Ϊ�˷�ֹ�����������죬��ʹ������
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
//	//Date operator=(const Date x)//��ʹ�����ý��д��Σ����ݷ��أ�����ÿ�������
//	//{
//	//	_year = x._year;
//	//	_month = x._month;
//	//	_day = x._day;
//	//	return *this;
//	//}
//
//	//������ǲ�д��ֵ���ر�������Ĭ�����ɸ�ֵ����
//	//�������ͳ�Ա�����ֵ�������Զ������ͳ�Ա��ȥ�������ĸ�ֵ����
//	//Date& operator=(const Date& x)//����Date& ��ֹ�������εķ���
//	//{
//	//	if (this != &x)
//	//	{
//	//		_year = x._year;
//	//		_month = x._month;
//	//		_day = x._day;
//	//		return *this;//�൱���ظ�ֵ������ĵ�һ�����������������Խ���������ֵ
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

//������operator �����
//������ �������Ĳ������м������м����������������ͣ���Ҫ�����Ķ��������, ����ֵ��������������ķ���ֵ��ʲô
//��������ؿ���д��ȫ�ֵģ��������ٷ���˽������
//bool operator == (const Date& x1, const Date& x2)//Ϊ�˷�ֹ�����������죬��ʹ������
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
//	//�����Ĭ�϶��Ǹ���������ʹ�ã��Զ�������
//	//�Զ������������Ҫʹ����Ҫ���Լ�������������أ�дһ�������������������Ϊ��
//	/*operator == (d1, d2);*///��������д���ǿɶ���̫��
//	//d1 == d2;//d1.operator==(d2);//������������ض����ȫ��ʱ�������Է���˽�У��ʽ���������طŵ������棬��ʱ��Ҫע�⴫��ʱ����������ʹ��thisָ��
//	//cout << (d1 == d2) << endl;//�������ţ�<<���ȼ���==Ҫ��
//	//cout << (d1 < d2) << endl;
//	//cout << (d1 < d3) << endl;
//	//��ֵ��������أ����������Ѿ���������Ķ���俽������
//	//d1 = d3;
//	//d1 = d2 = d3;
//	d1.Print();
//	//d3.Print();
//	//�������죬���ڴ����ڶ���ʱ����һ���Ѿ����ڵĶ���Ŀ���
//	//Date d4(d3);
//	//Date d5 = d3;//�������죬�����µĶ���Ŀ������ǿ�������
//	//d4.Print();
//	//d5.Print();
//	d1 = d2;
//	d1.Print();//û�и�ֵ���غ���������Ĭ�����ɵĸ�ֵ���غ��������Զ����������ǳ����
//	return 0;
//}
//�����������������������µĲ�����������operator@
//���ز�����������һ�������ͻ���ö�����͵Ĳ�����
//���ܸı������ԭ���ĺ���
//��Ϊ��ĳ�Ա����ʱ�����βο������Ȳ�����Ŀ��1����Ϊ��Ա���������������������ôĬ�ϵ�thisָ���޶�Ϊ��һ���������Ϊ˫Ŀ�������Ϊ������һ��
//.*, ::, sizeof, ?:, . ���������������Խ��к�������
#include<assert.h>
class Date
{
public:

	int GetMonthDay(int year, int month)//��ȡĳ��ĳ�µ�����
	{
		assert(month > 0 && month < 13);
		static int Month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31 };//���䶨���ھ�̬��������ÿ�ε��ú������ᣬ��������
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

		//�ж��Ƿ�Ϸ�
		if(_year < 0 
			|| _month <= 0 || _month >= 13
			|| _day <= 0 || _day > GetMonthDay(_year, _month))
		{
			cout << _year << "/" << _month << "/" << _day << "->";
			cout << "����һ���Ƿ�����" << endl;
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


