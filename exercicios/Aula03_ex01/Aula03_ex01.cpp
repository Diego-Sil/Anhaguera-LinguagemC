#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float CalcularMassa(float a, float b){
	const float mA=321.43;
	const float mB=150.72;
	
	printf("\n 1,2 : 1,0 \t =%f" , (1,2*mA+1*mB));
	printf("\n 1,4 : 1,0 \t =%f" , (1,4*mA+1*mB));
	printf("\n 1,0 : 1,6 \t =%f" , (1*mA+1,6*mB));
	
	return (a*mA) + (b*mB);
}

int main(int argc, char** argv) {
	float a=0, b=0, resultado=0;
	printf("\n Digite as massa dos elementos A e B: ");
	scanf("%f %f", &a,&b);
	
	resultado = CalcularMassa (a,b);
	printf("\n resultado %f", resultado);
	return 0;
}
