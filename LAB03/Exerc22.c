#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <math.h>

/*22. Faça um programa que calcule o maior número 
palíndromo feito a partir do produto de dois
números de 3 dígitos. Ex.: O maior palíndromo feito a 
partir do produto de dois números de dois
dígitos é 9009 = 91*99.*/

int is_palindrome(int n) {
    // Verifica se um número é palíndromo
    int reversed = 0;
    int original = n;
    while (original > 0) {
        reversed = reversed * 10 + original % 10;
        original /= 10;
    }
    return n == reversed;
}

int main() {
    int max_palindrome = 0;

    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            // Calcula o produto de i e j
            int product = i * j;
            // Verifica se o produto é palíndromo e se é maior que o maior palíndromo encontrado até agora
            if (is_palindrome(product) && product > max_palindrome) {
                max_palindrome = product;
            }
        }
    }

    printf("\nO maior palindromo feito a partir do produto de dois numeros de 3 digitos eh: %d\n\n", max_palindrome);

    return 0;
}