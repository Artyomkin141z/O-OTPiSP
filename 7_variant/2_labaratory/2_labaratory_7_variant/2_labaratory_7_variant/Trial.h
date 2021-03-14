#pragma once

#include <string>

using namespace std;

class Trial
{
private:
	// ��������� �� ������ ������
	static Trial * begin;
protected:
	// ���� ������
	string title;
	string goal;
	// ��������� �� ���������� �������
	Trial* prev = NULL;
public:
	// ����������� ����� ��� ����������� ������
	// ��������� ��������
	static void print();
	// ��� ����������� ������������
	// �� ��������� 
	Trial();
	// �����������
	Trial(const Trial & trial);
	// � �����������
	Trial(string title, string goal);
	// ����������� ����������
	// ����� ��� ����������� �������� ��������
	virtual ~Trial();
	// ����������� �����
	// ������� ������� ������� �����������
	// ����������� �������������� 
	virtual void show() = 0;
	// ����� ���������� � ������
	void add();
};

