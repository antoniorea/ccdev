/*    The Range-Based for Loop   */
//#include <iostream>
#include <cstdio>

const int MAYUS {65};
const int MINUS {97};

int main() {

char alphabet[27];

auto i{0};
for ( auto& e : alphabet ){
    e = MINUS + i++;     
}
    
alphabet[26] = 0;
printf ("alphabet = %s\n", alphabet);

i = 0;
for ( auto& e : alphabet ){
    e = MAYUS + i++ ;       
}
    
alphabet[26] = 0;
printf ("alphabet = %s\n", alphabet); 

}
