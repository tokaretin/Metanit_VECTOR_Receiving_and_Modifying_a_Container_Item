#include <iostream>
#include <vector>

int main()
{

    std::cout << "Получение и изменение элемента контейнера" << '\n';
    std::vector<int> vec{ 1,2,3,4,5,6 };
    for (int n : vec)
    {
        std::cout << n << ", ";
    }
    std::cout << '\n';

    auto iter{ vec.begin() }; // получаем отератор\
    
    // получаем эдемент, на который указывает элемент
    std::cout << *iter << '\n'; // 1

    // изменяем итератор
    *iter = 123;

    // проверяем изменения элемента
    std::cout << vec[0]; // 123

    std::cout << '\n';

    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << ", ";
    }
    std::cout << '\n';

    for (int n : vec)
    {
        std::cout << n << ", ";
    }
}

