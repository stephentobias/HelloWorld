#include <iostream>

void Log(const char* message);

int main()
{
	std::cout << "Size of double is " << sizeof(double) << " bytes and type of double is " << typeid(double).name() << std::endl;
	return 0;
}