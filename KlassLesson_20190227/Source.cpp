#include<iostream>
#include<time.h>
#include<cstring>

using namespace std;

/*
////// ����������� ��������� /////////

// ������������� ��������� �� ������������� ����������
int *p1;

// ������������� ��������� �� ����������� ����������
const int *p2;

// ����������� ��������� �� ������������� ����������
int *const p3=&x;

// ����������� ��������� �� ����������� ����������
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

	void* vp;		// ��������� void ��������� ������ �� ����� � ������, �� �� ����� ��������� ������� ��������
	vp = &x;		// ����������� ���������� ����� ���������� x

	cout << *(int*)vp << endl;  // ����� �������� �������� ����� ��������� vp ���������� ������� ������������� ��� �������������� ��� ������


	system("pause");
	return 0;
}
*/

////// ������������� ��������� /////

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


////// ������ /////


int main()
{
	srand(time(NULL));

	char str[100];						// ��������� ��������� ������
	strcpy_s(str, "Hello World!");		// ������ ����������� ������� strcpy_s � ������ str ������ Hello World!
	cout << str << endl;			





	system("pause");
	return 0;
}
