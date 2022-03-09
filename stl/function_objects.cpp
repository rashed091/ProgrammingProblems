#include <iostream>
#include <algorithm>

void lambda_expression()
{
	int j = 5;
	auto lambda = [&j](int x, int y)
	{
		return x + y + j;
	};
	int i = lambda(2, 4);
	std::cout << i << std::endl;
}

int main()
{
	lambda_expression();

	return 0;
}
