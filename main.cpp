#include <iostream>
#include <set>

void PrintSet(std::set<unsigned> mySet);

int main()
{
    std::cout << "Clang format demmo" << std::endl;

    PrintSet({ 1, 4, 3, 5, 5 });

    return 0;
}

void PrintSet(std::set<unsigned> mySet)
{
    for (auto&& i : mySet)
    {
        std::cout << i << std::endl;
    }
}
