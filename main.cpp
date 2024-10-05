#include <iostream>
#include <limits>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
/*
Вариант 9.
Написать программу, которая рассчитает площадь треугольника по известному углу a,
 сторонам A и B. Считается, что треугольник существует.

        А - сторона
        В - сторона
        а - угол
        S - площадь
                         S = (a * b * sinα) / 2 - фрмуля
                        треугольник заведомо существует*

*/




int main()
{
    int A;
    std::cin >> A;

    int B;
    std::cin >> B;

    int degrees;
    std::cin >> degrees;
    //созд. перемен. Получает и сохран. данные
    return 0;
}

double degrees_to_radians(double degrees)
{
    return degrees * M_PI / 180.0;
}
//приобразует градусы в радианы