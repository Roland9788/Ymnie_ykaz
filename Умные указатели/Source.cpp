#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<memory>
#include<windows.h>
using namespace std;

class X
{
	int a;
	double b;
public:

	int func() { return 0; };


};


//void func(unique_ptr<X> a) { cout << "a: " << a; };
//void func1(X* a) {};

//class Owner
//{
//
//public:
//
//	shared_ptr<X> owintPtr;
//	Owner()
//	{
//		owintPtr = make_shared<X>();
//	}
//};
//
//class User
//{
//	weak_ptr<X> usingPtr;
//public:
//
//	User(weak_ptr<X> object)
//	{
//		usingPtr = object;
//	}
//
//	void Use()
//	{
//		if (shared_ptr<X>object = usingPtr.lock()) //������� �������� ������������ shared_ptr �� weak_ptr, ���� ��������� ������ shared_ptr �� weak_ptr, ���� ��������� ������ shared_ptr, ������, ������ ��� ��� ������
//		{
//			object->func();
//		}
//	}
//
//
//};
//
//class videoBuffer
//{
//	int* myPixels;
//public:
//
//	videoBuffer()
//	{
//		myPixels = new int[2560 * 1440];
//	}
//
//	void makeFrame()
//	{
//
//	}
//
//	~videoBuffer()
//	{
//		delete[] myPixels;
//	}
//};
//
//int game()
//{
//	videoBuffer screen;
//	screen.makeFrame();
//}
//
//int game()
//{
//	int* myPixels = new int[2560 * 1440];
//	//...
//	delete[]myPixels;
//}
//
//int game()
//{
//	int* myPixels = new int[2560 * 1440];
//	//...
//	//if(someCodition) 
//	//{
//	//	return 1;
//	//}                          - ��� ������ ������ ���� ������ delete[]  ���� �� �������� ����� ������ ������
//	//if(someCodition)
//	//{
//	//	return 4;
//	//}
//	delete[]myPixels;
//}
//
//class Foo
//{
//	int* data1;
//	double* data2;
//	char* data3;
//public:
//
//	Foo()
//	{
//		data1 = new int(5);
//		//...
//	}
//	~Foo()
//	{
//		delete[] data1;
//		//...
//	}
//
//
//
//};
//
//
////����� ����� ���������
//template<typename T>
//class Smart_pointer
//{
//	T* m_obj;
//public:
//	//�������� ��� ����� ������ ������
//
//	Smart_pointer(T* obj) :m_obj(obj) {};
//	//������� �� ������� ��������� ���� ������ �� �������
//
//	~Smart_pointer() { delete[] m_obj };
//	//����������� ���������
//	//��������.��������� ���������� � ������ ���� � ����������� "���������"
//	T* operator->() { return m_obj; };
//	T& operator*() { return *m_obj; };
//
//};
//
//class MyClass
//{
//
//public:
//
//	void somthing() {};
//};
//
//int test()
//{
//
//	//������ Myclass(����� �����) �� �������� ������ ���������
//	Smart_pointer<MyClass>pMyClass(new MyClass(/*programs*/));
//	//���������� � ������ MyClass ����� �������� "���������"
//	pMyClass->somthing();
//	/*
//		�������� ��� ��� ������ ������ ���� ������� ������ ��� � ostream
//		��� ������� ����� �� ���������� �������� ������ �� ������
//		������� ������ ���� ������� �� �����
//	*/
//
//	//cout << *pMyClass;
//	
//	//����� ������ ��� ����� �������
//	return 0;
//}

//int test()
//{
//	auto_ptr<int> p1(new int);
//	auto_ptr<int> p2;
//
//	p2 = p1;
//
//
//	auto_ptr<int> giveMeMyObject();
//
//
//
//	return 0;
//}

int test()
{


	shared_ptr<int>p1(new int);
	shared_ptr<int>p2;
	p2 = p1;
	if (p2)
	{
		cout << "Hello, World\n";
	}


	return 0;
}



int main()
{

	//Owner owner;
	//User user(owner.owintPtr);
	//user.Use();
	//{
	//	unique_ptr<X> ptr(new X());//������ ������ X ������ � ������������ ������
	//}//����� ��������� ptr �������� ������� ��������� � ������������ �� ����� ���� ���������� ������

	//auto ptr = make_unique<X>();
	//func(unique_ptr<X>(new X()), unique_ptr<X>(new X()));

	//auto a = make_unique<X>();
	// �����-������� ������� ������� ��������� � ����� �����
	//func(a);//- �� ����� ��������� ��������� � ������� (�)
	//func1(a.get());//-���������� ������ ����(�������� �������� � func1())
	//func(move(a));//-�������� ����� ������������� � ������� func()

	srand(time(NULL));
	do
	{
		system("color 1");
		cout << rand() % 2;
		system("color 2");
		cout << rand() % 2;
		system("color 3");
		cout << rand() % 2;
		system("color 4");
		cout << rand() % 2;
		system("color 5");
		cout << rand() % 2;
		system("color 6");
		cout << rand() % 2;
	} while (true);

	//std::experimental::observer_ptr - �� ����� � ��������
	//std::shared_ptr/std::weak_ptr








	return 0;
}


