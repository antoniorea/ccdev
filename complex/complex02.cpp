/*    
    Este programa convierte numeros complejos en coord. polares 
    a coord. rectangulares y viceversa.
    los argumentos deben estar expresados en grados
$ ./complex02 
    1. - de coord. rectangulares a polares .
    2. - de coord. polares a rectangulares .
    3. - salir .
2
 Introduzca modulo y argumento en grados : 61.2 -111.1

 El numero complejo en coord rectangulares :    (-22.03,-57.10)
    1. - de coord. rectangulares a polares .
    2. - de coord. polares a rectangulares .
    3. - salir .
1
 Introduzca coord. rectangulares del num complejo : -18.5 -26.1
        El modulo de z es :31.99 el argumento z en grados es :-125.33   (-18.50,-26.10)
    1. - de coord. rectangulares a polares .
    2. - de coord. polares a rectangulares .
    3. - salir .
*/

#include <iostream>
#include <complex>

const double PI {3.14159};
int ans{0};

void rect_pol();
void pol_rect();

int main() {
    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);                 // numero de decimales a mostrar

    do {
    std::cout << "1. - de coord. rectangulares a polares ."<< std::endl; 
    std::cout << "2. - de coord. polares a rectangulares ." << std::endl;
    std::cout << "3. - salir ." << std::endl;
    std::cin >> ans;
    std::cin.get();

        switch (ans)
        {
        case 1:
            rect_pol();
            break;
        case 2:
            pol_rect();
            break;
        
        default:
            break;            
        }

    }while (ans == 1 || ans == 2);    

    return 0;
}

void rect_pol(){
    double a2, m2;
    std::cout << " Introduzca coord. rectangulares del num complejo : " ;
    std::cin >> m2 >> a2;
    std::cin.get();
    std::complex<double> z2(m2, a2);  // crea el num complejo z2 
                                    // a partir de los datos introducidos
                                        
    
    
    std::cout << "\tEl modulo de z es :" << std::abs(z2) << " el argumento z en grados es :";
    std::cout << std::arg(z2) * 180 / PI << "\t"  << z2 << std::endl;

}
void pol_rect(){
    double a1, m1;
    std::cout << " Introduzca modulo y argumento en grados : " ;
    std::cin >> m1 >> a1 ;
    std::cin.get();
    std::complex<double> z1(std::polar(m1, a1 * PI / 180)); // crea el num complejo z1 
                                                            // a partir de los datos introducidos
                                                                
    
    
    std::cout << "\n El numero complejo en coord rectangulares :"<< "\t"  << z1 << std::endl;
    
}
