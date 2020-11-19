#include "Functions.h"

namespace func {

	char* get_letters(char* str) {
		//���� ������ � ���������� ����
		//erte  ryiety354.4357er tyoi456
		int i = 0;
		int counter = 0;
		//������� ���������� ����
		while (str[i] != 0)
		{
			if (isalpha(str[i]))
			{
				counter++;
			}

			i++;
		}
		i = 0;
		int j = 0;
		char* letters = (char*)malloc(sizeof(char) * (counter+1)); //��������� ������ ��� ���� ����� + ������� �������, ����� ����� ����� ������
		//���������� ������� ������� � ��� ������
		while (str[i] != 0)
		{
			if (isalpha(str[i]))
			{
				letters[j] = str[i];
				j++;
			}
			i++;
		}
		letters[j] = 0; //���������� ����� ������
		
		return letters; 
	}

	
	char* get_unique_letters(char* str) {
		//str = eredttutu = 9
		int i = 0;
		int counter = 0;
		//������� ���������� ����
		while (str[i] != 0)
		{
			if (isalpha(str[i]))
			{
				counter++;
			}

			i++;
		}
		i = 0;
		int j = 0;
		char* letters = (char*)malloc(sizeof(char) * (counter + 1)); //��������� ������ ��� ���� ����� + ������� �������, ����� ����� ����� ������
		//���������� ������� ������� � ��� ������
		while (str[i] != 0)
		{
			if (isalpha(str[i]))
			{
				letters[j] = str[i];
				j++;
			}
			i++;
		}
		letters[j] = 0; //���������� ����� ������
		
		char* temp = (char*)malloc(sizeof(char) * (counter + 1));


		i = 0; j = 0;
		//ed2drt.yortleo234ap
		temp[j++] = letters[i++];
		while (letters[i] != 0)
		{
			if (isUnique_let(temp, letters[i]))
			{
				temp[j++] = letters[i];
			}

			i++;
		}
		temp[j] = 0; //���������� ����� ������


		free(letters);

		return temp;
		

	}
	
	int isUnique_let(char* str, char ch) {
		int i = 0;
		int counter = 0;
		while (str[i] != 0)
		{
			if (ch == str[i])
			{
				counter++;
			}
			i++;
		}
		if (counter > 0) //������ > 0 ���������� ��� �-��� get_unique_letters(), ���� ����� ������ �������, �� ������� > 1 !!!!!!
		{
			return 0;
		}
		return 1;


	}


	
	// ������� ��� �������� true ��� false ( 1 or 0 ) ��� ������� - true. ������ ��� ������� � ����� ���� 
	int isVowel(char ch) {

		char vowels[] = { 'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u', 'Y', 'y' };

		for (int i = 0; i < sizeof(vowels); i++)
		{
			if (ch == vowels[i])
			{
				return 1;
			}

		}
		return 0;

	}


	//������� ��� �������� true ���� ��� ����� ( �� ������� ASCI
	int isalpha(char ch) {
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}



}





