// C++ program to find roots of
// a quadratic equation
#include <bits/stdc++.h>


// Prints roots of quadratic equation
// ax*2 + bx + x
void findRoots(int a, int b, int c)
{

    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);

    // If a is 0, then equation is
    // not quadratic, but linear
    if (a == 0) {
        std::cout << "Invalid";
        return;
    }

    int d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d));

    if (d > 0) {
        std::cout << "Roots are real and different ";
        std::cout << static_cast<double>(-b + sqrt_val) / (2 * a) << " "
             << static_cast<double>(-b - sqrt_val) / (2 * a);
    }
    else if (d == 0) {
        std::cout << "Roots are real and same ";
        std::cout << -(static_cast<double>(b)) / (2 * a);
    }

    // d < 0
    else {
        std::cout << "Roots are complex ";
        std::cout << -(static_cast<double>(b))  / (2 * a) << " + i"
             << sqrt_val / (2 * a) << " "
             << -(static_cast<double>(b))  / (2 * a) << " - i"
             << sqrt_val / (2 * a);
    }
}

// Driver code
int main()
{
    int a = 1, b = -7, c = 12;

    // Function call
    findRoots(a, b, c);
    return 0;
}