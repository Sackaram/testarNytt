

#include <iostream>


class Person
{
private:
    std::string name;
    int age;

public:
    Person(std::string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void print()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};


void test()
{

    std::cout << "Testing" << std::endl;
}


int main()
{
    Person person("John", 30);
    person.print();

    std::cout << "Ok, this is it?" << std::endl;

    return 0;
}