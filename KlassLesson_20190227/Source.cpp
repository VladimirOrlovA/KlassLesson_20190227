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