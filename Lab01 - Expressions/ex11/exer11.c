#include <stdio.h>
#include <math.h>

int main() {
	printf("Numero complexo\n");
	
	double z_real, z_imaginario, w_real, w_imaginario, soma_real, soma_imaginario, subtracao_real, subtracao_imaginario, multi_real, multi_imaginario, modulo_z, modulo_w;
	
	printf("Informe a parte real de z: ");
	scanf("%lf", &z_real);
	printf("Informe a parte imaginaria de z: ");
	scanf("%lf", &z_imaginario);
	printf("Informe a parte real de w: ");
	scanf("%lf", &w_real);
	printf("Informe a parte imaginaria de w: ");
	scanf("%lf", &w_imaginario);
	
	soma_real = (z_real + w_real);
	soma_imaginario = (z_imaginario + w_imaginario);
	subtracao_real = (z_real - w_real);
	subtracao_imaginario = (z_imaginario - w_imaginario);
	multi_real = (z_real * w_real) - (z_imaginario * w_imaginario);
	multi_imaginario = (z_real * w_imaginario) + (w_real *z_imaginario);
	modulo_z = sqrt((z_real * z_real) + (z_imaginario * z_imaginario));
	modulo_w = sqrt((w_real * w_real) + (w_imaginario * w_imaginario));
	
	printf("\n\n");
	printf("z + w = %.1lf + %.1lfi\n", soma_real, soma_imaginario);
	printf("z - w = %.1lf + %.1lfi\n", subtracao_real, subtracao_imaginario);
	printf("z * w = %.1lf + %.1lfi\n", multi_real, multi_imaginario);
	printf("|z| = %.4lf\n", modulo_z);
	printf("|w| = %.4lf\n", modulo_w);
	
	return 0;
}
