/******************************************************************************

*******************************************************************************/
#include <iostream>

void intercambiar1(int a, int b) {
    int t = a;
    a = b;
    b = t;
}

void intercambiar2(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void intercambiar3(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}

int main() {
    int x = 1;
    int y = 2;

    intercambiar1(x, y);
    std::cout << "Despues de intercambiar1: x = "
              << x << ", y = " << y << '\n';

    x = 1;
    y = 2;

    intercambiar2(&x, &y);
    std::cout << "Despues de intercambiar2: x = "
              << x << ", y = " << y << '\n';

    x = 1;
    y = 2;

    intercambiar3(x, y);
    std::cout << "Despues de intercambiar3: x = "
              << x << ", y = " << y << '\n';

    return 0;
}
