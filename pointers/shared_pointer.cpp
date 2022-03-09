#include <iostream>
#include <memory>
#include <utility>

void compute()
{
	std::shared_ptr<int> ptr = std::make_shared<int>(100);

	std::shared_ptr<int> ptr_copy = ptr;

	std::cout << ptr.use_count() << std::endl;
}

int main()
{
	compute();

	return 0;
}
