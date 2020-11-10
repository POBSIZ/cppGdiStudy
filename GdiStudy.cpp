#include <iostream>
//#include <gdiplus.h>
#include "test.h"

//using namespace Gdiplus;
//#pragma comment (lib,"Gdiplus.lib")

//ULONG_PTR m_gdiplusToken;
//GdiplusStartup(&m_gdiplusToken, &gdiplusStartupInput, NULL);
//GdiplusShutdown(m_gdiplusToken);

typedef void(*Login)(int state);
void login(Login methodResult)
{
	methodResult(0);
	for (int i = 0; i < 100000; i++)
	{
		std::cout << "login ~\n";
	}
	methodResult(1);
}
void loginResult(int state)
{
	if (state == 0) { std::cout << "Login continue\n"; }
	if (state == 1) { std::cout << "Login succes\n"; }
}

class fL
{
public:
	static int func1(int a, int b) { return a + b; }
	static int func2(int a, int b) { return a - b; }
	static int func3(int a, int b) { return a * b; }
	static int func4(int a, int b) { return a / b; }
	static int func5(int a, int b) { return a % b; }
};

int main()
{
	login(loginResult);
	


	int result;

	int(*func[5])(int, int) = {fL::func1, fL::func2, fL::func3, fL::func4, fL::func5};

	//typedef int(*Func)(int, int);
	//Func func[5] = { func1, func2, func3, func4, func5 };

	int z[3][2] = { {1,2}, {3,4}, {5,6} };
	int zpl[5] = { {'+'}, {'-'}, {'*'}, {'/'}, {'%'} };
	for (int x=0; x<3; x++)
	{
		std::cout << "-------------------" << x + 1 << "\n";
		int a = z[x][0], b = z[x][1];
		for (int y=0; y<5; y++)
		{
			result = func[y](a, b);
			std::cout << zpl[y] << "func_result: " << result << "\n";
		}
	}

	typedef int num;
	//typedef signed int int32;

	//num numeric = 10;
	//std::cout << "%d\n", numeric;

	//num listt[3] = { 1, 2, 3 };
	//for (num i = 0; i < 3; i++)
	//{
	//	std::cout << listt[i] << '\n';
	//}

	/*
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
	*/
}

int multiply(int a, int b)
{
	int c = a * b;
	return c; 
}
