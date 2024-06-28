#include <iostream>
#include <cmath>

int main() {
    int dividend = 9;
    int divisor = 5;

    // Calculate the base-5 logarithm of the dividend
    double result = log(dividend) / log(divisor);

    // Round down to the nearest integer
    int timesDivided = static_cast<int>(result);

    std::cout << "125 can be divided by 5 continuously " << timesDivided << " times." << std::endl;

    return 0;
}
