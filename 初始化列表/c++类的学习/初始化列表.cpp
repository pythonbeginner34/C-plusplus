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
//		//, _b(b)//�����ڳ�ʼ�������ó�ʼ���б��ʼ�����������Ч�� //��������û����ʾд��ʼ���б���������Ҳ����Ϊ�г�ʼ���б�ģ����ǿ�����Ϊ��ʼ���б��ǶԶ���ĳ�Ա��������ĵط�
//	{
//		/*A aa(a);
//		_aa = aa;
//		_b = b;*/
//		//_aa = A(a);//������������
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
//	const int _c;//const��Ա�����ڶ���ʱ����
//	int& _ret;//���ñ����ڶ���ʱ��ʼ��
//	A _aa;//û��Ĭ�Ϲ��캯�����Զ���������Ҫʹ�ó�ʼ���б�
//};

//int main()
//{
//	int tmp = 10;
//	B b(1, tmp,10);
//	cout << tmp<< endl;
//	return 0;
//}
//���龡��ʹ�ó�ʼ���б�

//class D
//{
//public:
//	D(int a)
//		:_a1(a)//��Ա������������������������ڳ�ʼ���б��еĳ�ʼ����˳���������б����Ⱥ�˳��û�й�ϵ��
//		,_a2(_a1)//�����ʼ���б�˳��Ͷ���˳��һ��
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
//	/*explicit*/ A(int a)//��֧����ʽ����ת�����Լ���һ��explicit�ؼ���
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
//	//��ʽ����ת��
//	A aa2 = 2;
//	/*A aa2 = { 1,2 };*/
//	double d = 11.11;
//	int i = d;
//	return 0;
//}

//�ó�����㣬���湹���˶��ٸ�����
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
//	int _a;//���ڶ�����Ķ����У����ڶ���
//};
//
//int A::_count = 0;//�����ʼ��
//
//A f(A a)
//{
//	A ret(a);
//	return ret;
//}
//
////����3�Σ���������5��
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
//	static int Getcount()//˽�еĳ�Ա���������������治���Է��ʣ�����������ʹ�ú������ʣ�Ȼ����������ó�Ա����
//	//���Զ���һ����̬�ĳ�Ա���������������Ա�����ù��캯���Ⱥ��������Ŀ�����ֻ�ǵ����ķ��ʳ�Ա������������������
//	//��̬��Ա����û��thisָ�룬��̬��Ա���������Է��ʷǾ�̬��Ա�������Ǿ�̬��Ա�������Է��ʾ�̬��Ա����
//	{
//		return _count;
//	}
//private:
//	int _a;//���ڶ�����Ķ����У����ڶ���
//	static int _count;//���ھ�̬�������������࣬Ҳ����ÿ����������Ķ�����
//	//��ȫ�ֵı�����ȣ����ܵ������޶��ͷ����޶����޶������õ����ַ�װ�����˲������׸���
//	//��̬���Ͳ����ڹ��캯����ʼ����Ҫ��ȫ��λ�ó�ʼ��
//	//��̬���͵ĳ�Ա�����������ó�˽��Ҳ�����óɹ���
//	//��̬��Ա�������������ⶨ�壬����ʱ�����static
//};
//
//int A::_count = 0;//�����ʼ��
//
//A f(A a)
//{
//	A ret(a);
//	return ret;
//}

//����3�Σ���������5��
//int main()
//{
//	A a1 = f(A());
//	A a2;
//	A a3;
//	a3 = f(a2);
//	cout << sizeof(A) << endl;//˵��static����ı������������ڶ����У����Ƕ����ھ�̬����sizeof������Ƕ���Ĵ�С��������Ĵ�С
//	//A::_count = 10;static����ı����������������޸�
//	//���ඨ��Ϊ����ʱ�����������·������ʳ�Ա����
//	//cout << A::count << endl;
//	//cout<<a1._count<<endl;
//	//cout<<a2._count<<endl;
//	/*A ret;
//	cout << ret.Getcount()-1 << endl;*/
//	/*cout << A().Getcount()-1 << endl;*/
//	cout << A::Getcount() << endl;
//	return 0;
//}

//static������
//c���� 1������ȫ�ֱ�����ȫ�ֺ������ı��������ԣ�ֻ�ڵ�ǰ�ļ��ɼ���2�����ξֲ��������ı��������ڣ������������c++���������ã�c++����c����Щ����
//c++ 1.���γ�Ա�����ͳ�Ա��������Ա�������������࣬���ж����������ĳ�����󣬳�Ա����û��thisָ��

//class Sum //�����1�ӵ�n����ֵ
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


//��Ԫ����
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
////Ϊ�˴���Ŀɶ������ǲ��뽫��count��λ�ú�d1��λ�û������������������ԭ����thisָ�룬
////Ϊ�˱���thisָ�����ǿ��ǽ��ú���������������棬��������������ܷ������Ա��Ϊ�˿��Է��ʳ�Ա�������ǿ���ʹ����Ԫ������
////���ǲ����������Ǳ���ʹ����Ԫ���������ǿ��Զ����Ա���������ʳ�Ա����
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
//	//cout << d1; ��������أ�������м������������������ؾ��м�������
//	//�������������������������ǵ�һ���������Ҳ������ǵڶ�������
//	//operator << д�ɳ�Ա������thisָ��Ĭ��ռ���˵�һ��λ�ã������Ҫ���������
//	//�������������������ԣ���Ȼ�����ã����ǲ����������ԭ�����÷�������
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
//	class B//B��������A����Ԫ
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
//	cout << sizeof(A) << endl;//����A���С��ʱ�򲻿����ڲ���Ĵ�С,B��ΪA���ڲ�������ͨ��û�����𣬽������ܵ����������
//	A::B bb;
//	bb.foo();
//	return 0;
//}


//��1�ӵ�n��ֵ
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

//��������ת��������
#include<iostream>
using namespace std;

//int main()
//{
//	static int daysArray[13] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
//	int year, month, day;
//	cout << "����������:" << endl;
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
//	//�����̬����Ķ������������ͣ���malloc��newû��ʲô����
//	//�����̬����Ķ������Զ������ͣ�������: new/delete�������Կ��ռ䣬�����Ե��ù��캯������������
//
//	A* p3 = (A*)malloc(sizeof(A));
//	free(p3);
//
//	A* p4 = new A(10, 20);//�����ڿ��ٿռ��ʱ�򣬵���Ĭ�Ϲ��캯�����и�ֵ
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

	//����
	int* p5 = (int*)malloc(sizeof(int) * 5);
	free(p5);

	int* p6 = new int[5];
	delete[] p6;

	A* p7 = new A[10];//����ʮ�ι��캯��
	delete[] p7;
	return 0;
}