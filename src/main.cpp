

#include <iostream>

void test()
{

    std::cout << "Testing" << std::endl;
}

int main()
{

    
    constexpr int test = 5;
    std::string ok = "asdasd";


    for (size_t i = 0; i < test; i++)
    {
        std::cout << "Hello there!2" << std::endl;
    }

    std::cout << "Ok, those changes were bad.." << std::endl;

    return 0;
}