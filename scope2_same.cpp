#include <iostream>

namespace sum {
    int calc(int x, int y) {
        return x + y;
    }
}
namespace substr {
    int calc(int x, int y) {
        return x - y;
    }
}
namespace mult {
    int calc(int x, int y) {
        return x * y;
    }
}
namespace division {
    int calc(int x, int y) {
        return y == 0 ? 0 : x / y;
    }
}

int main()
{
    setlocale(LC_ALL, "RU");

    int x = 6, y = 9;

    std::cout << "Сложение: " << sum::calc(x, y) << std::endl;
    std::cout << "Вычитание: " << substr::calc(x, y) << std::endl;
    std::cout << "Умножение: " << mult::calc(x, y) << std::endl;
    std::cout << "Деление: " << division::calc(x, y) << std::endl;
    
    return 0;
}

