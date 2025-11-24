/*    
    Este programa suma y resta dos numeros complejos en coord. polares
    los argumentos deben estar expresados en grados
$ ./complex01 
 Introduzca mod y arg del primer num complejo : 12.041 48.36
 Introduzca mod y arg del segundo num complejo : 8.60 54.46
z1 + z2 :       El modulo de z es :20.61 el argumento z en grados es :50.90     (13.00,16.00)
z1 - z2 :       El modulo de z es :3.61 el argumento z en grados es :33.69      (3.00,2.00)
*/

#include <iostream>
#include <complex>

const double PI = 3.14159;
double a1, a2, m1, m2;
std::complex<double> z, w;

int main() {

    std::cout << " Introduzca mod y arg del primer num complejo : " ;
    std::cin >> m1 >> a1 ;
    std::cin.get();
    std::complex<double> z1(std::polar(m1, a1 * PI / 180)); // crea el num complejo z1 
                                                            // a partir de los datos introducidos
    std::cout << " Introduzca mod y arg del segundo num complejo : " ;
    std::cin >> m2 >> a2;
    std::cin.get();
    std::complex<double> z2(std::polar(m2, a2 * PI / 180));  // crea el num complejo z2 
                                                            // a partir de los datos introducidos
        z = z1 + z2;    
        w = z1 - z2;

    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);                 // numero de decimales a mostrar

    std::cout << "\nz1 + z2 :\tEl modulo de z es :" << std::abs(z) << " el argumento z en grados es :";
    std::cout << std::arg(z) * 180 / PI << "\t"  << z << std::endl;
    std::cout << "z1 - z2 :\tEl modulo de z es :" << std::abs(w) << " el argumento z en grados es :";
    std::cout << std::arg(w) * 180 / PI << "\t"  << w << std::endl;

    return 0;
}
