#include<iostream>
#include<time.h>
#include<cstring>			// ���������� ������ �� ��������

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

/*
void cnangeSymbol(char *str)
{

	while (*str++ != '\0')	// ���� �������� ���� �� ����� ��������� ����� ������ - ������������ �������� \0
	{
	if (*str == '?')		// ��� ������ ����� ��������� ����� � ������ ���������� ������ '?'
		*str = '1';			// ������ ���������� ������� '?' �� ������ '1'
	}

}

int main()
{
	char str[100];

	cin.getline(str, 100); // ���� ������ ������������� �� ����������� ���� � ������ str[100]

	cnangeSymbol(str);

	cout << str << endl;


	system("pause");
	return 0;
}
*/


/*
int main()
{
	char str1[100];

	cin.getline(str1, 100);

	char *p, *context;

	p = strtok_s(str1, " !.?,", &context);   // ������� strtok_s ��������� ������ �� ���������

	while (p != NULL)
	{
		cout << p << endl;
		p = strtok_s(context, " !.?,", &context); // ��������� ������ �� ���������
	}

	system("pause");
	return 0;
}
*/


/// 9.	**������������ ������ ������ � �����. ����������� � ���� ������ ����� ��������� �����.

/*
int main()
{
	char str1[100];
	char str2[100];
	cin >> str2;

	cin.ignore();
	cin.getline(str1, 100);

	char* p;
	

	p = strstr(str1, str2);		// str1 ������ � ������� ����, str2 ������� ������

	if(p)
	cout << p << endl;  // ������� ���������� ��������� 


	system("pause");
	return 0;
}
*/

/// ��������� ������ strstr �������������� ///

/*
char* my_strstr(char* s1, char* s2)
{
	char *p1 = s1;
	char *p2 = s2;
	int k = 0;

	while (*s1++ != '\0')
	{
		p1 = s1;
		p2 = s2;

		if (*p1 == *p2)
		{
			for (int i = 1; i < strlen(s2); i++)   // strlen ����������� ����� ������
				if (s1[i] == s2[i]) k++;
			if (k == (strlen(s2) - 1)) return p1;
		}
	}

	return 0;
}

int main()
{
	char str1[100];
	char str2[100];
	char* p;

	cin.getline(str1, 100);

	cin >> str2;
	
	p = my_strstr(str1, str2);		// str1 ������ � ������� ����, str2 ������� ������

	if (p!=0)
		cout << p << endl;  // ������� ���������� ��������� 


	system("pause");
	return 0;
}
*/


/// 13.	*�������� �������, ������� ��������� �������������� ������ ����� � ������. ����������������� ������ ������� ��������.

/*
int main()
{
	char str[10] = "125";
	cout << atoi(str) * 2 << endl;  /// ������� ������ � �����

	system("pause");
	return 0;
}
*/


/*
int main()
{
	int a = 125;
	char str[10];
	_itoa_s(a, str, 10);    // ������� ����� � ������, 2 - �������� �����, 8 - �����������, 10 - ����������, 16...
	cout << str << endl;
	cout << strchr(str, '2') << endl;  // ����� ������� ��������� ������� symbol � ������ string

	system("pause");
	return 0;
}
*/

//// ��� ������� - ����� ������� ��������� ������� symbol � ������ string

/*
char *my_strchr(char *pstr, char strx)
{
	while (*pstr++ != '\0')
	{
		if (*pstr == strx)
			return pstr;
	
	}
	return 0;
}

int main()
{
	char str[50];
	cin >> str;

	
	cout << my_strchr(str, 'o') << endl;

	system("pause");
	return 0;
}
*/

//////////////// 05/03/2019 ////////////////////////////////////////

/*
int myStrCompair(const char *s1, const char *s2) // ��������� ���� �����
{
	int k1 = strlen(s1);
	int k2 = strlen(s2);
	int n = k1 < k2 ? k1 : k2; // ���������� ����� �������� ������

	for (int i = 0; i <= n; i++)
	{
		if (s1[i] > s2[i])
			return 1;
		else if (s1[i] < s2[i])
			return -1;
	}
}

int main()
{
	char str1[100] = "Hello World!";
	char str2[] = "Hello";

	cout << myStrCompair(str1, str2) << endl;

	system("pause");
	
}
*/


/*
void myStrCopy(char *str1, const char *str2) // ������� ����������� �����  ///   const - ��������� ��������� str2
{
	
	int i = 0;
	for (i = 0; *str2; i++, str2++)
	{
		str1[i] = *str2;
	}

	str1[i] = '\0';
}

void myStrCopyVer1(char *str1, const char *str2) // ������� ����������� �����  ///   const - ��������� ��������� str2 
{

	char *t_ptr = str1;

	while (*str2 != '\0')
	{
		*t_ptr++ = *str2++;
	}

	*t_ptr = '\0';
}


void myStrCopyVer2(char *str1, const char *str2) // ������� ����������� �����  ///   const - ��������� ��������� str2 
{
	for (int i = 0; i < *str2; i++)
		str1[i] = str2[i];
}


void myStrCat(char *str1, char *str2)
{
	int k = strlen(str1);
	for (int i = 0; i <= strlen(str2); i++)
		str1[k + i] = str2[i];
}



// ���������� ������� ��� ����������� �������� ����� � �����������


void searchWorldCount(char *str, char *search)
{
	int k = 0;

	while (str = strstr(str, search))
	{
		str = str + strlen(search);
		k++;
	}

	cout << k << endl;
}


int main()
{
	//char str1[100] = "Hello";
	//char str2[100] = "World";

	//myStrCopy(str1, str2);
	//myStrCopyVer1(str1, str2);
	//myStrCopyVer2(str1, str2);
	//myStrCat(str1, str2);
	//cout << str1<<endl;

	char str[100] = "this example for example";
	char search[100]="example";

	searchWorldCount(str, search);

	system("pause");

}
*/

//30.	������������ ������ � ���������� �������������� ���������.���������� ��������� ��� �������� � ������ ����������� ��������� �������������� �������� � ������.
//���� � ��������� ����������� ������ �������, ������ ���������, ��� ��������� ������� �� ���������.
//a)	*��������� �������� �������� + , -� ����� ������� �� ����� �����
//b)	**��������� �������� �������� + , -, *, / � ����� ����� �������� �� ���������� ����
//c)	*** ��������� �������� �������� + , -, *, / , ^ (���������� � �������), ������ �(� �)� � ����� ����� ���� �������������.

int main()
{
	char str1[50] = "2+5-4";

	if (!isdigit(str1[0]) || !isdigit(str1[strlen(str1) - 1]))
		cout << "Wrong expression" << endl;
	else
	{

	}
}
