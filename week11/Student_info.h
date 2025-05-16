#pragma once
// Student_info.h

#ifndef GUARD_Student_info
#define GUARD_Student_info

#include <iostream>
#include <string>

#include "Vec.h" // 우리 만든 Vec 클래스

using namespace std;

class Student_info {
private:
	string name;
	double midterm, final;
	Vec<double> homework;

public:
	// 생성자!
	Student_info(); // 빈 Student_info 객체를 생성
	Student_info(istream&); // 스트림을 읽어 Studen_info 객체를 생성

	string get_name() const { return name; }
	double get_midterm() const { return midterm; }
	double get_final() const { return final; }
	Vec<double> get_hw() const { return homework; }

	void set_name(string n) { name = n; } // 에런 추가

	bool valid() const { return !homework.empty(); }
	istream& read(istream&);
	double grade() const;
};

bool compare(const Student_info&, const Student_info&);

#endif

