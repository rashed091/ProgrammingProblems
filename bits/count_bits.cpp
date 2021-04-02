#include <iostream>
using namespace std;

short CountBits(unsigned int x)
{
	short num_bits = 0;
	while (x)
	{
		num_bits += x & 1;
		x >>= 1;
	}
	return num_bits;
}
 
int main()
{
	cout << CountBits(9) << endl;
	return 0;
}
