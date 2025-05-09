#pragma once
#ifndef GUARD_Student_info
#define GUARD_Student_info

// Student_info.h
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student_info {
private:
	string name;
	double midterm, final;
	vector<double> homework;

public:
	// ������!
	Student_info(); // �� Student_info ��ü�� ����
	Student_info(istream&); // ��Ʈ���� �о� Studen_info ��ü�� ����

	string get_name() const { return name; }
	void set_name(string n) { name = n; } // ���� �߰�

	bool valid() const { return !homework.empty(); }
	istream& read(istream&);
	double grade() const;
};

bool compare(const Student_info&, const Student_info&);

#endif

