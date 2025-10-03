#include <iostream>
#include <string>


template<typename T>
T suma(T a, T b){
	return a+b;
}

int main()
{
	int i = suma<int>(10, 20);
	double d = suma<double>(123.456, 789.101);

	std::cout << i << std::endl;
	std::cout << d << std::endl;

return 0;
}

