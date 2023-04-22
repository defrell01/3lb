#include <iostream>

void allocateMemory() {
	size_t i;
	try
	{
		for (i = 0; ; ++i)
		{
			int* arr = new int[i];
		}
	}
	catch (const std::bad_alloc&)
	{
		std::cout << i*8 << std::endl;
	}
        
}

void arrayRange()
{
	int f = 0, e = 0, d = 0, c = 0;
	int b[2] = { 2, 2 };
	int a[6] = { 6, 6, 6, 6, 6, 6 };

	a[6] = 5;
	std::cout << b[0] << std::endl;
	b[3] = 7;
	std::cout << d << std::endl;
}

void ptrArray()
{
	int* arr = new int[15];
	arr[15] = 15;
	std::cout << *(arr+15) << std::endl;
}

int main()
{
	allocateMemory();
}

