#pragma once
#include <stdio.h>
#include <stdlib.h>

namespace func {

	char* get_letters(char* str); //�������� ����� �� ������ (��� ������� �������� �� ������������ � ������ �������, ������ �����.)
	int isUnique_let(char* str, char ch); // �������� �� ���������� ������. � ��� ����� ����������� ��� get_unique_letters, ����� �������� ��������� > 1 �������.
	char* get_unique_letters(char* str); //�������� ��������� �� ������ � ���������� SET �� ������ (������ ������������� �����)
	int isVowel(char ch); //�������� �� �������
	int isalpha(char ch); //�������� �� �����


}
