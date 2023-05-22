#include "ani.h"
void main() {
	animal b(4);
	human a;
	std::cout << b.neye << std::endl;
	std::cout << a.neye << std::endl;

}
void animal::die() {
	std::cout << "im dying" << std::endl;
}
