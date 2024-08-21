
#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putnbr(int num) {
    // 1ª: Verificación de si el número es negativo
    if (num < 0) {
        ft_putchar('-');   // Imprime el signo negativo
        num = -num;        // Convierte el número a positivo
    }

    // 2ª: Verificación de si el número es mayor o igual a 10
    if (num >= 10) {
        ft_putnbr(num / 10);  // Llama recursivamente eliminando el último dígito
        // Aquí es como si tuviera un "if" implícito:
        // Este bloque recursivo sigue dividiendo el número hasta que sea menor de 10
    }

    // 3ª: Ahora el número es menor de 10
    // (O estamos regresando de la recursión para imprimir el dígito más a la derecha)
    ft_putchar((num % 10) + '0');  // Convierte el último dígito en char y lo imprime
}

int main(void) {
    int num = 121111;
    ft_putnbr(num);  // Debería imprimir "121111"
    return 0;
}


