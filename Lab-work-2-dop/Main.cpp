#include <stdio.h>
#include "Functions.h"
/*
	ЛР 2: Необходимо ввести множество букв: вывести все слова, которые
	начинаются и заканчиваются буквами из введенного множества

*/
const int MAX_LENGHT_STRING = 256; //указать максимальный размер для строки.

using namespace func;
int InASet(char* str, char ch);
char* get_words(char* str, char* unique_letters);
int main() {





	printf("enter set of letters: ");

	char letters[MAX_LENGHT_STRING];
	fgets(letters, MAX_LENGHT_STRING, stdin);

	char* uniq_letters = get_unique_letters(letters);

	printf("your unique SET: ");
	int i = 0;
	while (uniq_letters[i] != 0)
	{
		printf("%c ", uniq_letters[i]);
		i++;
	}

	char text[MAX_LENGHT_STRING];
	printf("\n\ninput your text: ");
	fgets(text, MAX_LENGHT_STRING, stdin);

	char* result = get_words(text, uniq_letters);
	i = 0;
	while (result[i] != 0)
	{
		printf("%c", result[i++]);

	}



	return 0;
}
/*
	ПОПРОБОВАТЬ ОТСЕЯТЬ ПРЯМЫМ ХОДОМ И ЗАТЕМ ОБРАТНЫМ ХОДОМ ПО МАССИВУ


*/
char* get_words(char* str, char* unique_letters) {
	char word[MAX_LENGHT_STRING];
	char* tmp = (char*)malloc(sizeof(char) * MAX_LENGHT_STRING);
	//hello edik odin odin 
	int i = 0, j = 0, t = 0;
	int index = 0;
	tmp[j++] = ' ';
	while (str[i] != 0)
	{
		if (!isalpha(str[i-1]) && !isUnique_let(unique_letters, str[i]))
		{
			while (str[i] != 0 && isalpha(str[i]))
			{
				tmp[j] = str[i];
				i++;
				j++;

			}
			tmp[j++] = ' ';

			//обратный очищающий ход
			if (isUnique_let(unique_letters, tmp[j-2]))
			{
				j--;
				j--;
				while (tmp[j] != ' ')
				{
					tmp[j] = ' ';
					j--;
				}
				

			}



		}




		i++;
	}


	tmp[j] = 0;
	return tmp;

}




int InASet(char* str, char ch) {
	int i = 0;
	while (str[i] != 0)
	{
		if (str[i] == ch)
		{
			return 1;
		}
		i++;
	}
	return 0;


}