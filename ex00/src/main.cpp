#include "../include/template.hpp"

int main()
{
	std::string a = "abc";
	std::string b = "def";
	std::cout << "before --> a: " << a << ", b: " << b << std::endl;
	mswap(a, b);
	std::cout << "after --> a: " << a << ", b: " << b << std::endl;
	std::cout << "la plus petite valeur est : " << mmin(a, b) << " !" << std::endl;
	std::cout << "la plus grande valeur est : " << mmax(a, b) << " !" << std::endl;
}