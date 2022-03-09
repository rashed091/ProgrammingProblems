#include <iostream>
#include <algorithm>
#include <string>
#include <string_view>
#include <optional>
using namespace std::literals::string_view_literals;

std::optional<std::string> might_fail(int arg)
{
	if (arg == 0)
	{
		return std::optional<std::string>("zero");
	}
	else if (arg == 1)
	{
		return "one";
	}
	else if (arg < 7)
	{
		return std::make_optional<std::string>("less than 7");
	}
	else
	{
		return std::nullopt; // alternatively: return {}
	}
}

int main()
{
	std::string name = "Md Rasheduzzaman";
	std::string substr = name.substr(0, 3);

	std::string_view view = name;
	std::string_view subview = view.substr(3, 14);

	std::cout << subview << std::endl;

	auto s1 = "string_view\0with\0nulls"sv;
	std::cout << s1 << std::endl;

	std::cout << might_fail(3).has_value() << std::endl;
	std::cout << might_fail(8).has_value() << std::endl;
	return 0;
}
