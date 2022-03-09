#include <iostream>
#include <memory>
#include <utility>

template <typename T>
class bst
{
private:
	struct node
	{
		T value;
		std::unique_ptr<node> left;
		std::unique_ptr<node> right;

		explicit node(T _value)
		{
			value = _value;
			left = nullptr;
			right = nullptr;
		}
	};

	std::unique_ptr<ndoe> root;
	std::size_t size = 0;

public:
	bst() : root(nullptr), size(0){};
	void insert(T value);
	void remove(T value);
};


int main()
{

	return 0;
}
