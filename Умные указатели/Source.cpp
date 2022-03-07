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
//		if (shared_ptr<X>object = usingPtr.lock()) //попытка получить оригинальный shared_ptr из weak_ptr, если возвращен пустой shared_ptr из weak_ptr, если возвращен пустой shared_ptr, значит, объект уже был удален
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
//	//}                          - При каждом выходе надо писать delete[]  если не написать бутет потеря памяти
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
////Класс умный указатель
//template<typename T>
//class Smart_pointer
//{
//	T* m_obj;
//public:
//	//Передаем ему какой нибудь объект
//
//	Smart_pointer(T* obj) :m_obj(obj) {};
//	//Выходим из области видимости этот объект мы удаляем
//
//	~Smart_pointer() { delete[] m_obj };
//	//Перегружаем операторы
//	//Селектор.Позволяет обращаться к данным типа Т посредством "стрелочки"
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
//	//Отдаем Myclass(Любой класс) во владение умному указателю
//	Smart_pointer<MyClass>pMyClass(new MyClass(/*programs*/));
//	//Обращаемся к методу MyClass через селектор "Стрелочку"
//	pMyClass->somthing();
//	/*
//		Допустим что для нашего класса есть функция вывода его в ostream
//		Эта функция одним из параметров получает ссылку на объект
//		Который должен быть выведен на экран
//	*/
//
//	//cout << *pMyClass;
//	
//	//После выхода все будет удалено
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
	//	unique_ptr<X> ptr(new X());//Объект класса X создан в динамической памяти
	//}//Здесь указатель ptr покидает область видимости и уничтожается но перед этим уничтожает объект

	//auto ptr = make_unique<X>();
	//func(unique_ptr<X>(new X()), unique_ptr<X>(new X()));

	//auto a = make_unique<X>();
	// ВАЖНО-сначала удалять простой указатель а потом умный
	//func(a);//- Не можем отправить указатель в функции (а)
	//func1(a.get());//-Исправляет ошибку выше(Передаем значение в func1())
	//func(move(a));//-Передает права использования в функцию func()

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

	//std::experimental::observer_ptr - не вошел в стандарт
	//std::shared_ptr/std::weak_ptr








	return 0;
}


