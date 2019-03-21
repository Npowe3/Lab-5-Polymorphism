//Faculty.h
#include"Person.h"
#ifndef FACULTY_H
#define FACULTY_H

class Faculty: public Person{
	public:
		Faculty();
		void setSalary(double);
		void setOffice(string);
		void setRank(string);
		void print();
	private:
		string rank;
		double salary;
		string office;
};

#endif
