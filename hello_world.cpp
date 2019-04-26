#include <iostream>
#include <string>

int main()
{
    std::string usname;
    std::cout << "User name: ";
    std::cin >> usname;
    std::cout << std::endl
              << "Hello world from " << usname;
    return 0;
}