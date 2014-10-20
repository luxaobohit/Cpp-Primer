// Print each number in the range specified by two integers.

#include <iostream>

int main()
{
	int val_small = 0, val_big = 0;
	std::cout << "please input two integers:";
	std::cin >> val_small >> val_big;
	
	if (val_small > val_big)
	{
		int tmp = val_small;
		val_small = val_big;
		val_big = tmp;
	}
	
	for (int i = val_small;i <= val_big;++i)
		std::cout << i << std::endl;
	
	return 0;
}
