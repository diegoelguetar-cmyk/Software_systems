#include <stdio.h>
#include <stdlib.h>

int bits1(unsigned int n) {
    int total =0; 
    while(n){ //cuando lleguemos al n=0, será falso y salderemos del ciclo. la idea es ir revisando el ultimo numero 
        total += (n & 1U); // u es unsigned int  cambia de constante  a enteri son signo, donde += hace total = total + (cuando sea 1)
        // 101100 & 00001 -> 0
        // ahora nos hace falta el shift right
        n = n>> 1; // n >>=1
    }
    return total
    
}