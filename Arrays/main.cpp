#include<iostream>
using namespace std;

void main()
{
	int number;
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE];
	int minRand, maxRand;
	do
	{
		cout << "������� ����������� ��������� �����: "; cin >> minRand;
		cout << "������� ������������ ��������� �����: "; cin >> maxRand;
		if (minRand >= maxRand)cout << "Error: ��� �� ����� �� ���." << endl;
	} while (minRand>=maxRand);

	/*if (minRand > maxRand)
	{
		int buffer;
		minRand = maxRand;
		maxRand = buffer;

	}*/
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		//0 ... 32 767 (RAND_MAX)
	}

	//����� ������� �� �����:
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//����� ������� �� ����� � �������� �������:
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;


	/*cout << "������ �����: "; cin >> arr[0];
	cout << "������ �����: "; cin >> arr[1];
	cout << "������ �����: "; cin >> arr[2];
	cout << "�������� �����: "; cin >> arr[3];
	cout << "����� �����: "; cin >> arr[4];
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;
	cout << endl;
	cout << arr[4] << endl;
	cout << arr[3] << endl;
	cout << arr[2] << endl;
	cout << arr[1] << endl;
	cout << arr[0] << endl;
	cout << endl;
	number = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
	cout << "����� �����: ";
	cout << number << endl;
	int average = number / 5;
	cout << "������� ��������������: ";
	cout << average;*/
	//���������� �������
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
		{
			arr[i];
			arr[j];
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}