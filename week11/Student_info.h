#pragma once
// Student_info.h

#ifndef GUARD_Student_info
#define GUARD_Student_info

#include <iostream>
#include <string>

#include "Vec.h" // �츮 ���� Vec Ŭ����

using namespace std;

class Student_info {
private:
	string name;
	double midterm, final;
	Vec<double> homework;

public:
	// ������!
	Student_info(); // �� Student_info ��ü�� ����
	Student_info(istream&); // ��Ʈ���� �о� Studen_info ��ü�� ����

	string get_name() const { return name; }
	double get_midterm() const { return midterm; }
	double get_final() const { return final; }
	Vec<double> get_hw() const { return homework; }

	void set_name(string n) { name = n; } // ���� �߰�

	bool valid() const { return !homework.empty(); }
	istream& read(istream&);
	double grade() const;
};

bool compare(const Student_info&, const Student_info&);

#endif

