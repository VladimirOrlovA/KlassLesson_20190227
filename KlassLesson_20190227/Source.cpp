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

/*
int main()
{
	
	char str[100];						// ��������� ��������� ������
	strcpy_s(str, "Hello World!");		// ������ ����������� ������� strcpy_s � ������ str ������ Hello World!
	cout << str << endl;			





	system("pause");
	return 0;
}
*/


///// ������������ ������  C_lab5_b13_strings_zp  /////

//1.	���� ������ ��������.���������� ���������� ����, ���������� ���� � ���������� ��������� ��������, �������������� � ������.

/*
void func1(char* str)
{
	int sumSymbol = 0;
	int sumDigit = 0;
	int sunOthers = 0;

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
		{
			sumSymbol++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			sumDigit++;
		}
		else sunOthers++;

	}

	cout << endl << "sumSymbol ->\t" << sumSymbol << endl << "sumDigit ->\t" << sumDigit << endl << "sunOthers ->\t" << sunOthers << endl << endl;
}

int main()
{
	char str[100];						// ��������� ��������� ������
	strcpy_s(str, "Hello World!");		// ������ ����������� ������� strcpy_s � ������ str ������ Hello World!
	cout << str << endl;

	func1(str);

	system("pause");
	return 0;

}
*/

/// ������ ////

/*
int main()
{
	char str[100];

	cin.getline(str, 100, '.');
	cout << str << endl;



	system("pause");
	return 0;
}
*/



/////// ������������ ������� ���� �_pract_strings_dp ///////




//1.	���������� ���������� ���� �� ��������� �����������.
//a)	* ����� ������� ��������� ������ 1 ������
//b)	**������� ����� ����� ������������� ������� � � ����� �����������.
//c)	***������� ����� ������������� ������� � � ����� �����������, � ����� ������� ����� ���� ����� 1 �������.
//������������:
//���� � ���������� � ������� cin �� ��������� ������ �������, ������� ����� ������ �������� ������� ������ ������������� �_� ��� ��������������� cin.getline().
//char Mas[250];
//cin.getline(Mas, 250);
//cout << Mas;

/*
void countA(char *str)
{
	int sumSpace = 0;

	for (int i = 0; i < strlen(str); i++)		// a)	* ����� ������� ��������� ������ 1 ������
	{
		if (str[i] == ' ')
		{
			sumSpace++;
		}

	}

	cout << "sumSpace -> " << sumSpace << endl;

}


int words_amountB(char *str)					// b)	**������� ����� ����� ������������� ������� � � ����� �����������.
{
	int k = 0;

	for (int i = 0; i < strlen(str); i++)
		if (str[i] == ' ')
			k++;

	if (str[0] == ' ')
		k--;

	if (str[strlen(str) - 1] == ' ')k--;
	return k + 1;
}


int words_amountC(char *str)					// c)	***������� ����� ������������� ������� � � ����� �����������, � ����� ������� ����� ���� ����� 1 �������. 
{
	int k = 0;

	for (int i = 0; i < strlen(str); i++)
		if (str[i] == ' ')
		{
			if (str[i - 1] == ' ')
				continue;
				k++;
		}
			

	if (str[0] == ' ')
		k--;

	if (str[strlen(str) - 1] == ' ') k--;

	return k + 1;

}

int main()
{
	char str[100];

	cin.getline(str, 100);
	cout << str << endl;

	//countA(str);
	//cout << "words_amount -> " << words_amountB(str);
	cout << "words_amount -> " << words_amountC(str) << endl;


	system("pause");
	return 0;
}
*/


/// ������ 2 � 3

/*
int string_lenght(char *str)		/// 2.	*�������� �������, ������� ��������� ����� ������, ����������������� �������� �� ������.			
{
	int k = 0;

	while (*str != '\0')
	{
		str++;
		k++;
	}
	return k;
	

}

void pointToExclamation(char *str)		//// 3.	*�������� ���������, ������� �������� ��� ������� ����� �.� � ������, ��������� �������������, �� ������� ���������������� ����� �!�.
{
	while (*str++ != '\0')
	{
		if(*str=='.')
		*str='!';
	}
}

int main()
{
	char str[100];

	cin.getline(str, 100);
	
	//cout << "string_lenght -> " << string_lenght(str) << endl << endl;

	pointToExclamation(str);

	cout << str << endl;


	system("pause");
	return 0;
}
*/


////// 4.	*�������� ���������, ������� �������� ��� ������� ��������������� ����� �?� � ������, ��������� �������������, �� ������� �1�. - ���������� 3 ������