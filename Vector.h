#pragma once
class Vector
{
	int* arr;
	int size;
public:
	Vector();
	~Vector();


	Vector(int s);
	void InputRand(); // ������������� ���� �������
	void Print();// ����� �� �������

	void PushBack(int a);
	int PopBack();
};

/*
��������� ��������� ������:
��������� 1 �������� �� ������ �������
���������� �� �������, ������ � �������� �������� ��� ��������
�������� �� �������
�������� ������� ��������

���������� ������� � ����� �������� �������!


*/