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

#include "cpx.h"



double a1, a2, m1, m2;

void sum_complex( double m1, double a1, double m2, double a2);

int main() {

    std::cout << " Introduzca mod y arg del primer num complejo : " ;
    std::cin >> m1 >> a1 ;
    std::cin.get();
    
    std::cout << " Introduzca mod y arg del segundo num complejo : " ;
    std::cin >> m2 >> a2;
    std::cin.get();
   
    sum_complex( m1, a1, m2, a2);

    return 0;
}

