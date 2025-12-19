#include <iostream>
#include <complex>
#include "cpx.h"


std::complex<double> z, w;

void sum_complex( double m1, double a1, double m2, double a2) {

    std::complex<double> z1(std::polar(m1, a1 * PI / 180)); // crea el num complejo z1 
                                                            // a partir de los datos introducidos

    std::complex<double> z2(std::polar(m2, a2 * PI / 180));  // crea el num complejo z2 
                                                            // a partir de los datos introducidos
        z = z1 + z2;    
        w = z1 - z2;

    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);                 // numero de decimales a mostrar

    std::cout << "\nz1 + z2:  El modulo de z es :" << std::abs(z) << "  el argumento z en grados es :";
    std::cout << std::arg(z) * 180 / PI << "  "  << z << std::endl;
    std::cout << "z1 - z2:  El modulo de z es :" << std::abs(w) << "  el argumento z en grados es :";
    std::cout << std::arg(w) * 180 / PI << "  "  << w << std::endl;
    
}