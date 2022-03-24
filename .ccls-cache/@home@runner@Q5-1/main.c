#include <stdio.h>
#include <stdlib.h>

 float notaAluno(float nota1, float nota2, float nota3, char letra)
{
	float resposta;

	if(letra == 'A')
	{
		resposta = (nota1 + nota2 + nota3)/3;
	}
	else if(letra == 'P')
	{
		resposta = (nota1 * 5 + nota2 * 3 + nota3 * 2)/10;
	}
    else if(letra == 'H')
	{
		resposta = 1/((1/nota1 + 1/nota2 + 1/nota3)/3);
	}
	return resposta;
}

int main(void) {
	
 float Nota1, Nota2, Nota3, resultado;
 char Letra;
	
	printf("Digite uma dessas letras:\nA=Média Aritmética, P=Média Ponderada ou H=Média Harmônica: ");
	scanf("%c", &Letra);

	printf("Digite as notas: ");
	scanf("\n%f\n %f \n%f", &Nota1, &Nota2, &Nota3);
	
	resultado = notaAluno(Nota1, Nota2, Nota3, Letra);

	printf("Média: %f", resultado);
  return 0;
}