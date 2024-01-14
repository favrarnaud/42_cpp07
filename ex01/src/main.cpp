#include "../include/iter.hpp"

int main() {
	std::string tab1[] = {"ab", "cd", "ef", "gh","ij"};
	std::cout << "----- string -----" << std::endl;
	miter(tab1, 5, &print);
	std::cout << "----- char -----" << std::endl;
	char tab2[] = {'a', 'b', 'c', 'd', 'e'};
	miter(tab2, 5, &print);
	std::cout << "----- int -----" << std::endl;
	int tab3[] = {0, 1, 2, 3, 4};
	miter(tab3, 5, &print);
}