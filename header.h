#pragma once
#include <iostream>
class animal {
public:
	animal() :neye(2) {
		std::cout << neye << " Animal"<<std::endl;
	}
	animal(int a) :neye(a) {
		std::cout << neye << " Animal wow" << std::endl;
	}
	int neye;
	void die();
};
class human: public animal {
public:
	human() { animal::animal(4); narms = 2; }
	int narms;
	void run() {
		std::cout << "im running" << std::endl;
	}
};
class baby :public human {
	baby() { age = rand() % 5; }
	int age;
	void cry() { std::cout << "mommy where are yooo" << std::endl; }
};
