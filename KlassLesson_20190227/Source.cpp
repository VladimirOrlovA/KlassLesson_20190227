#include<iostream>
#include<time.h>
#include<cstring>			// библиотека работы со строками

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

/*
int main()
{
	
	char str[100];						// объявляем строковый массив
	strcpy_s(str, "Hello World!");		// вводим посредством функции strcpy_s в массив str запись Hello World!
	cout << str << endl;			





	system("pause");
	return 0;
}
*/


///// Лабораторная работа  C_lab5_b13_strings_zp  /////

//1.	Дана строка символов.Определить количество букв, количество цифр и количество остальных символов, присутствующих в строке.

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
	char str[100];						// объявляем строковый массив
	strcpy_s(str, "Hello World!");		// вводим посредством функции strcpy_s в массив str запись Hello World!
	cout << str << endl;

	func1(str);

	system("pause");
	return 0;

}
*/

/// пример ////

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



/////// Практические задания файл С_pract_strings_dp ///////




//1.	Подсчитать количество слов во введенном предложении.
//a)	* между словами находится только 1 пробел
//b)	**пробелы также могут располагаться вначале и в конце предложения.
//c)	***пробелы могут располагаться вначале и в конце предложения, и между словами может быть более 1 пробела.
//Рекомендации:
//Ввод с клавиатуры с помощью cin не позволяет ввести пробелы, поэтому можно вместо пробелов вводить символ подчеркивания «_» или воспользоваться cin.getline().
//char Mas[250];
//cin.getline(Mas, 250);
//cout << Mas;

/*
void countA(char *str)
{
	int sumSpace = 0;

	for (int i = 0; i < strlen(str); i++)		// a)	* между словами находится только 1 пробел
	{
		if (str[i] == ' ')
		{
			sumSpace++;
		}

	}

	cout << "sumSpace -> " << sumSpace << endl;

}


int words_amountB(char *str)					// b)	**пробелы также могут располагаться вначале и в конце предложения.
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


int words_amountC(char *str)					// c)	***пробелы могут располагаться вначале и в конце предложения, и между словами может быть более 1 пробела. 
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


/// Задачи 2 и 3

/*
int string_lenght(char *str)		/// 2.	*Написать функцию, которая вычисляет длину строки, проиллюстрировать примером ее работу.			
{
	int k = 0;

	while (*str != '\0')
	{
		str++;
		k++;
	}
	return k;
	

}

void pointToExclamation(char *str)		//// 3.	*Написать программу, которая заменяет все символы точки «.» в строке, введенной пользователем, на символы восклицательного знака «!».
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


////// 4.	*Написать программу, которая заменяет все символы вопросительного знака «?» в строке, введенной пользователем, на символы «1». - аналогично 3 задаче

/*
void cnangeSymbol(char *str)
{

	while (*str++ != '\0')	// цикл работает пока не будет достигнут конец строки - обозначается символом \0
	{
	if (*str == '?')		// как только будет достигнут адрес в строке содержащий символ '?'
		*str = '1';			// замена найденного символа '?' на символ '1'
	}

}

int main()
{
	char str[100];

	cin.getline(str, 100); // ввод данных пользователем из консольного окна в массив str[100]

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

	p = strtok_s(str1, " !.?,", &context);   // функция strtok_s разбивает строку на подстроки

	while (p != NULL)
	{
		cout << p << endl;
		p = strtok_s(context, " !.?,", &context); // разбивает строку на подстроки
	}

	system("pause");
	return 0;
}
*/


/// 9.	**Пользователь вводит строку и слово. Осуществить в этой строке поиск заданного слова.

/*
int main()
{
	char str1[100];
	char str2[100];
	cin >> str2;

	cin.ignore();
	cin.getline(str1, 100);

	char* p;
	

	p = strstr(str1, str2);		// str1 строка в которой ищем, str2 искомая строка

	if(p)
	cout << p << endl;  // функция возвращает указатель 


	system("pause");
	return 0;
}
*/

/// написание фнкции strstr самостоятельно ///

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
			for (int i = 1; i < strlen(s2); i++)   // strlen вытаскивает длину строки
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
	
	p = my_strstr(str1, str2);		// str1 строка в которой ищем, str2 искомая строка

	if (p!=0)
		cout << p << endl;  // функция возвращает указатель 


	system("pause");
	return 0;
}
*/


/// 13.	*Написать функцию, которая выполняет преобразование целого числа в строку. Проиллюстрировать работу функции примером.

/*
int main()
{
	char str[10] = "125";
	cout << atoi(str) * 2 << endl;  /// перевод строки в число

	system("pause");
	return 0;
}
*/


/*
int main()
{
	int a = 125;
	char str[10];
	_itoa_s(a, str, 10);    // перевод числа в строку, 2 - двоичное число, 8 - восмиричное, 10 - десятичное, 16...
	cout << str << endl;
	cout << strchr(str, '2') << endl;  // поиск первого вхождения символа symbol в строку string

	system("pause");
	return 0;
}
*/

//// код функции - поиск первого вхождения символа symbol в строку string

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
int myStrCompair(const char *s1, const char *s2) // сравнение двух строк
{
	int k1 = strlen(s1);
	int k2 = strlen(s2);
	int n = k1 < k2 ? k1 : k2; // определяем самую короткую строку

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
void myStrCopy(char *str1, const char *str2) // функция копирования строк  ///   const - запрещает изменение str2
{
	
	int i = 0;
	for (i = 0; *str2; i++, str2++)
	{
		str1[i] = *str2;
	}

	str1[i] = '\0';
}

void myStrCopyVer1(char *str1, const char *str2) // функция копирования строк  ///   const - запрещает изменение str2 
{

	char *t_ptr = str1;

	while (*str2 != '\0')
	{
		*t_ptr++ = *str2++;
	}

	*t_ptr = '\0';
}


void myStrCopyVer2(char *str1, const char *str2) // функция копирования строк  ///   const - запрещает изменение str2 
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



// определить сколько раз встречается заданное слово в предложении


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

//30.	Пользователь вводит с клавиатуры арифметическое выражение.Необходимо вычислить его значение с учетом приоритетов введенных математических операций и скобок.
//Если в выражении встречаются другие символы, выдать сообщение, что выражение введено не корректно.
//a)	*выражение содержит операции + , -и числа состоят из одной цифры
//b)	**выражение содержит операции + , -, *, / и числа могут состоять из нескольких цифр
//c)	*** выражение содержит операции + , -, *, / , ^ (возведение в степень), скобки «(» «)» и числа могут быть вещественными.

int main()
{
	char str1[50] = "2+5-4";

	if (!isdigit(str1[0]) || !isdigit(str1[strlen(str1) - 1]))
		cout << "Wrong expression" << endl;
	else
	{

	}
}
