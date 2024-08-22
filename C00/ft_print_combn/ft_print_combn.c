#include <unistd.h>

// Función para imprimir un solo carácter
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Función principal para imprimir todas las combinaciones de n dígitos
void	ft_print_combn(int n)
{
	int comb[10]; // Array para almacenar la combinación actual
	int i;

	// Validar que n esté en el rango válido
	if (n <= 0 || n >= 10)
		return;

	// Inicializar la primera combinación con los primeros n números
	i = 0;
	while (i < n)
	{
		comb[i] = i; // comb[0] = 0, comb[1] = 1, ..., comb[n-1] = n-1
		i++;
	}

	while (1) // Bucle infinito que se romperá cuando lleguemos a la última combinación
	{
		// Imprimir la combinación actual
		i = 0;
		while (i < n)
		{
			ft_putchar(comb[i] + '0'); // Convertir el número a carácter y escribirlo
			i++;
		}

		// Verificar si hemos llegado a la última combinación posible
		if (comb[0] == 10 - n) // Si el primer dígito ha alcanzado su valor máximo
			break; // Salir del bucle si es la última combinación

		// Imprimir la separación ", " entre combinaciones
		write(1, ", ", 2);

		// Incrementar la combinación actual
		i = n - 1;
		// Buscar el primer dígito que pueda ser incrementado
		while (i >= 0 && comb[i] == 9 - (n - 1 - i))
			i--; // Decrementar i hasta encontrar un dígito que pueda aumentar

		comb[i]++; // Incrementar el dígito encontrado

		// Ajustar los dígitos siguientes para que sigan la secuencia mínima posible
		while (++i < n)
			comb[i] = comb[i - 1] + 1;
	}
}

void main(void)
{
    int n = 5;
    ft_print_combn(n);
}