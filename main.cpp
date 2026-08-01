#include <iostream>
#include "matrix.h"
int main() {
    Matrix m;
    m.transpose();
    std::cout << "Transposed" << std::endl;
    return 0;
}