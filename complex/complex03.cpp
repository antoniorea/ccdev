/*    
    Este programa suma y resta dos numeros complejos en coord. polares
    los argumentos deben estar expresados en grados
    entrada de datos en linea de comandos
$ ./complex03 12.041 48.36 8.60 54.46
z1 + z2 :       El modulo de z es :20.61 el argumento z en grados es :50.90     (13.00,16.00)
z1 - z2 :       El modulo de z es :3.61 el argumento z en grados es :33.69      (3.00,2.00)
*/

#include <iostream>
#include "cpx.h"




double arr[4]{0.0};



int main(int argc, char* argv[]) {


   switch (argc)
   {
   case 1:
    std::cout << "$ ./complex03 mod(z1) arg(z1) mod(z2) arg(z2)" << std::endl;
    std::cout << "mod y arg del primer num complejo z1" << std::endl;
    std::cout << "mod y arg del segundo num complejo z2" << std::endl;    
    break;
   case 5:
       for(int i = 1; i < argc; i++){        
            arr[i - 1] = std::stod(argv[i]);
        }
        //  for (auto elem : arr)
        //     std::cout << elem << std::endl;
        sum_complex(arr[0], arr[1], arr[2], arr[3]);
    break;   
   default:
   std::cout << "error al introducir los datos" << std::endl;
    break;
   }
     
return 0;
}


