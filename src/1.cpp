#include <iostream>

void allocateMemory()
{

    int *arr = new int[1000000];

    int c = 1;

    std::cout << "Enter 0 to free space and eliminate memory leak" << std::endl;

    for (;;)
    {
        std::cin >> c;
        if (c == 0)
            break;
    }

    delete[] arr;

    std::cout << "Leak eleminated" << std::endl;
}

int main()
{
    allocateMemory();

    std::cout << "Enter 0 to close" << std::endl;

    int c = 1;

    while (c != 0)
    {
        std::cin >> c;
    }
}
