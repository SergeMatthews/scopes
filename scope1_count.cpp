#include <iostream>

void counting_function();

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "RU");

    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }

    return 0;
}

void counting_function() {
    static unsigned int count = 0;
    std::cout << "Количество вызовов функции counting_function(): " << ++count << std::endl;
}

