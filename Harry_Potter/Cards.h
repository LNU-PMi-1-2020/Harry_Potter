#pragma once
#include <iostream>
const int countOfCards = 51;
using namespace std;

class Cards {
protected:
	string name;
	string surname;
	string faculty;
	int hp;
	int damage;
public:
	Cards() = default;

	const string& getname()const {
		return name;
	}
	const string& getsurname()const {
		return surname;
	}
	const string& getfaculty()const {
		return faculty;
	}
	const int& gethp()const {
		return hp;
	}
	const int& getdamage()const {
		return damage;
	}

	virtual void input(istream& is) {
		is >> name>>surname >> faculty >> hp >> damage;
	}
	virtual void output(ostream& os) {
		os<< name <<surname << endl <<faculty<<endl << hp << damage;
	}

	friend istream& operator>>(istream& is, Cards& c) {
		c.input(is);
		return is;
	}
	friend ostream& operator<<(ostream& os, Cards& c) {
		c.output(os);
		return os;
	}
};
