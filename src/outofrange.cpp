#include <iostream>

void arrayRange()
{

    std::cout << "Spoiling values without pointers" << std::endl;

    int f = 0, e = 0, d = 0, c = 0;
    int b[2] = {2, 2};
    int a[6] = {6, 6, 6, 6, 6, 6};

    std::cout << "Default b[0] value - " << b[0] << std::endl;
    std::cout << "Changing value of a[6]=5" << std::endl;

    a[6] = 5;

    std::cout << "Spoiled b[0] value - " << b[0] << std::endl;

    std::cout << "Default d value - " << d << std::endl;
    std::cout << "Changing value of b[3]=7" << std::endl;

    b[3] = 7;

    std::cout << "Spoiled d value - " << d << std::endl;
}

void arrayRangePtr()
{
    int f = 0, e = 0, d = 0, c = 0;
    int b[2] = {2, 2};
    int a[6] = {6, 6, 6, 6, 6, 6};

    int *p_a = &a[0];
    int *p_b = &b[1];
    std::cout << "f address - " << &f << std::endl;

    std::cout << "default f value= " << f << std::endl;

    std::cout << "taking address of b second element - " << p_b << std::endl;
    p_b++;
    std::cout << "increment it - " << p_b << std::endl;

    std::cout << "seting its value to 322" << std::endl;
    *(p_b) = 322;

    std::cout << "f spoiled value= " << f << std::endl;
}
int main()
{
    arrayRange();
    std::cout << "-----------------------------------------" << std::endl;
    arrayRangePtr();
    return 0;
}