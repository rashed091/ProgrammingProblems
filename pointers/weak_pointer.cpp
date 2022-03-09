#include <iostream>
#include <algorithm>
#include <memory>
#include <utility>

void taker(std::unique_ptr<double[]>);
void borrower1(double *);
void borrower2(std::unique_ptr<double[]> *);
void borrower3(std::unique_ptr<double[]> &);

int main()
{
	int n = 5;
	std::unique_ptr<double> p1 = std::make_unique<double>(3.14);
	std::unique_ptr<double[]> p2 = std::make_unique<double[]>(n);

	std::cout << *p1 << std::endl;

	// std::unique_ptr<double[]> q1 = p2;

	// taker(p2);

	borrower1(p2.get());
	borrower2(&p2);
	borrower3(p2);

	std::unique_ptr<double[]> p3 = std::move(p2);

	taker(std::move(p3));

	p3.reset();

	return 0;
}
