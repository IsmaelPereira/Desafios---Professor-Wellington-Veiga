#include <stdio.h>
#include <stdlib.h>

float ganhador1(float premio){
	return premio*0.46;
}

float ganhador2(float premio){
	return premio*0.32;
}

float ganhador3(float premio){
	return premio*0.22;
}

int main(){
	float premio;
	printf("Digite o valor do premio: ");
	scanf("%f",&premio);
	printf("O ganhador 1 recebe: %.2f\n",ganhador1(premio));
	printf("O ganhador 2 recebe: %.2f\n",ganhador2(premio));
	printf("O ganhador 3 recebe: %.2f\n",ganhador3(premio));
	system("pause");
}
