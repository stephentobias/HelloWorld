#include <iostream>

void Log(const char* message);

/*
* The function prompts the user to enter 3 numbers separated by spaces
*/
int main()
{
	int x{};
	int y{};
	int z{};
	Log("Enter three numbers separated by a space: ");
	std::cin >> x >> y >> z;
	std::cout << "The values are: " << x << ", " << y << ", and " << z << ".\n";
	return 0;
}