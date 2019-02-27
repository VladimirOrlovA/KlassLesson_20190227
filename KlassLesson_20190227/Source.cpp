#include<iostream>
#include<time.h>
#include<cstring>

using namespace std;

/*
////// Константные указатели /////////

// неконстантный указатель на неконстантную переменную
int *p1;

// неконстантный указатель на константную переменную
const int *p2;

// константный указатель на неконстантную переменную
int *const p3=&x;

// константный указатель на константную переменную
const int *const p = &x;

*/



/*
int main()
{
	srand(time(NULL));

	int *p;
	double *p1;
	int x = 100;
	double y;
	char z;

	void* vp;		// указатель void указывает только на адрес в памяти, но не может содержать никаких значений
	vp = &x;		// присваиваем указателбю адрес переменной x

	cout << *(int*)vp << endl;  // чтобы получить значение через указатель vp необходимо сначало переназначить ему соотвествующий тип данных


	system("pause");
	return 0;
}
*/

////// множественные указатели /////

/*
int main()
{
	srand(time(NULL));

	int **p, *p1;
	int x;
	
	p = &p1;
	p1 = &x;

	


	system("pause");
	return 0;
}
*/


////// строки /////


int main()
{
	srand(time(NULL));

	char str[100];						// объявляем строковый массив
	strcpy_s(str, "Hello World!");		// вводим посредством функции strcpy_s в массив str запись Hello World!
	cout << str << endl;			





	system("pause");
	return 0;
}
