#include <iostream>
#include "test.h"

int main()
{
	typedef int num;
	//typedef signed int int32;

	//num numeric = 10;
	//std::cout << "%d\n", numeric;

	//num listt[3] = { 1, 2, 3 };
	//for (num i = 0; i < 3; i++)
	//{
	//	std::cout << listt[i] << '\n';
	//}

	char wutup[10] = { 'w', 'u', 't', 'u', 'p', '\0' }; // "\0" == 문장의 끝 표현

	struct cafe
	{
		char menu[20];
		int price;
		void print() { 
			std::cout << &menu[3] << " " << price << "\n"; 
		};
	};
	cafe cfe[3] =
	{
		{"아메리카노", 1500},
		{"카페라떼", 2500},
		{"바닐라라떼", 3000}
	};


	for (int i = 0; i < 3; i++)
	{
		//cfe[i].print();
		cafe* e = &cfe[i];
		//std::cout << e->menu << " " << e->price << "\n";
	}

	//std::cout << sizeof(cafe) << " " << sizeof(cafe(*)) << "\n";
	cfe[1].print();

	//char* m = cfe[1].menu; 오류있음!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	//std::cout << m;


	class test
	{
	public:
		test()
		{
			std::cout << "생성자\n";
		}
		~test()
		{
			std::cout << "파괴자\n";
		};
		void print()
		{
			std::cout << "출력문\n";
		}
	private:
	};

	test* t = new test();
	delete t;

	{test end; end.print();}


	std::cout << "END\n";


	class anim
	{
	public:
		//anim();
		//virtual ~anim();
		virtual void print() { std::cout << "Aprint\n"; };
		
	private:

	};
	class move: public anim
	{
	public:
		//move();
		//virtual ~move();
		//virtual void print() { anim->print(); std::cout << "Mprint\n"; };
	private:
	};

	move* a = new move();
	//a->print();

	//std::cout << multiply(2, 2);

	int r = 100;
	int* v = &r; // r의 위치 내용포함 
	std::cout << *v << "\n";  //*v == r
	*v = 231;
	std::cout << *v << "\n";
	int& vv = r;
	std::cout << vv << "\n";
	vv = 123;
	std::cout << vv << "\n";
}

int multiply(int a, int b)
{
	int c = a * b;
	return c; 
}
