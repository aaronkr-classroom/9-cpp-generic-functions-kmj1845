//Student_info.cpp
#include <iostream>

#include "Student_info.h"
#include "grade.h"

using namespace std;

// ������!
// �� ������
Student_info::Student_info() : midterm(0), final(0) {}

// cin�� �о� Student_info�� �ʱ�ȭ
Student_info::Student_info(istream& is) { read(is); }

bool compare(const Student_info& x, const Student_info& y) {
	return x.get_name() < y.get_name(); // A < Z�� �� �� ��ȯ, Z < A�� �� ���� ��ȯ
}

double Student_info::grade() const {
	return ::grade(midterm, final, homework);
}

istream& Student_info::read(istream& is) {
	// �л��� �̸�, �߰���� ����, �⸻��� ���� �о� ����
	is >> name >> midterm >> final;
	// ���� ������ ����
	read_hw(is, homework);
	return is;
}

istream& read_hw(istream& in, vector<double>& hw) {
	if (in) {
		// ���� ������ ����
		hw.clear();
		
		// �Է��� ���� ����
		double x; // cin���� ����ϱ�
		
		// �Է¹��� ������ ���� sum
		while (in >> x) {
			hw.push_back(x);
		}

		//���� �л��� ���� �Է� �۾��� ����� ��Ʈ���� ����
		in.clear();
		

	}
	return in;
}
