// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

int main()
{
    int limit = 1000;

    for (int a = 2; a <= limit; a += 1)
    {
        for (int b = a; b <= limit; b += 1) 
        {
            int c_squared = a * a + b * b;
            double c = sqrt(c_squared);

            if (floor(c) == c) 
            {
                std::cout << a << ", " << b << ", " << c << "\n";
            }
        }
    }

    return 0;
}
